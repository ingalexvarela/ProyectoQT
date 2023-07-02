/**
* @file loginsystem.cpp
* @brief Implementación de la clase LoginSystem
*/

#include "loginsystem.h"
#include "./ui_loginsystem.h"
#include "qdb.h"
#include <QSqlRecord>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include "global.h"
#include <QTimer>

QString globalEmail; // Declaración de la variable global
QString globalInteger;  // Declaración de la variable global
QDBLite::DB db;

/**
* @brief Constructor de la clase LoginSystem.
* @param parent Puntero al widget padre (opcional).
*/
LoginSystem::LoginSystem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginSystem)
{
    ui->setupUi(this);
    db.dbstate = db.Connect(QCoreApplication::applicationDirPath()+"/../TourismCompass/db.s3db");
    qDebug() << "Directorio de la aplicación:" << QCoreApplication::applicationDirPath();
    ui->winStack->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);

    ui->passwordBox->setEchoMode(QLineEdit::Password);
    ui->passwordBox->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
    ui->pBox->setEchoMode(QLineEdit::Password);
    ui->pBox->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
    ui->pBox_2->setEchoMode(QLineEdit::Password);
    ui->pBox_2->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
    ptrMainWindow = new MainWindow(); //ojo

}

/**
* @brief Destructor de la clase LoginSystem.
*/
LoginSystem::~LoginSystem()
{
    delete ui;
    delete ptrMainWindow;
}

/**
* @brief Manejador del evento de clic en el botón de inicio de sesión.
*/
void LoginSystem::on_loginButton_clicked()
{
    this->loggedIn = Login(ui->usernameBox->text(), ui->passwordBox->text(), ui->passwordBox_2->text());

    if(this->loggedIn)
    {
        this->username = ui->usernameBox->text();
        this->password = ui->passwordBox->text();
        this->email = ui->passwordBox_2->text();
        globalEmail = this->email;
        ui->loginLabel->setText("");
        ui->winStack->setCurrentIndex(2);
    }
    else
    {
        ui->loginLabel->setText("Error al iniciar sesión: ¡Credenciales no válidas!");
    }
}

/**
* @brief Realiza el inicio de sesión comprobando las credenciales proporcionadas.
* @param u Nombre de usuario.
* @param p Contraseña.
* @param e email.
* @return true si las credenciales son válidas, false en caso contrario.
*/
bool LoginSystem::Login(QString u, QString p, QString e)
{
    ui->adminButton->setVisible(false);
    ui->adminButton_2->setVisible(false);
    ui->eBox_2->setVisible(false);

    bool exists = false;

    QSqlQuery checkQuery(db.db);
    checkQuery.prepare("SELECT username FROM sys_users WHERE username = (:un) AND passwd = (:pw) AND email = (:em)" );
    checkQuery.bindValue(":un", u);
    checkQuery.bindValue(":pw", p);
    checkQuery.bindValue(":em", e);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }

    return exists;
}

/**
* @brief Manejador del evento de clic en el botón de registro.
*/
void LoginSystem::on_regButton_clicked()
{
    ui->uBox->setText(ui->usernameBox->text());
    ui->pBox->setText(ui->passwordBox->text());
    ui->winStack->setCurrentIndex(1);
}

/**
* @brief Manejador del evento de clic en el botón de cierre de sesión (logoutButton).
* Solicita una confirmación al usuario antes de cerrar la sesión.
* Si el usuario confirma, se realiza el cierre de sesión y se restablecen los campos y la interfaz de usuario.
*/
void LoginSystem::on_logoutButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                       "", "¿Está seguro de que desea cerrar sesión?",
                                       QMessageBox::Yes|QMessageBox::No).exec())
    {
        this->loggedIn = false;
        ui->passwordBox->setText("");
        ui->loginLabel->setText("Ha cerrado sesión!");
        ui->winStack->setCurrentIndex(0);
    }
}

/**
* @brief Manejador del evento de clic en el botón de registro completo (completeRegButton).
* Valida los campos de entrada del formulario de registro y realiza el registro en la base de datos si no hay errores.
* Si el registro es exitoso, se restablecen los campos del formulario y se muestra un mensaje de éxito.
*/
void LoginSystem::on_completeRegButton_clicked()
{
    bool halt = false;

    if(ui->uBox->text() == "")
    {
        ui->uBox->setPlaceholderText("Username EMPTY!");
        halt = true;
    }

    if(ui->pBox->text() == "")
    {
        ui->pBox->setPlaceholderText("Password EMPTY!");
        halt = true;
    }

    if(ui->eBox->text() == "")
    {
        ui->eBox->setPlaceholderText("E-mail EMPTY!");
        halt = true;
    }

    if(ui->fBox->text() == "")
    {
        ui->fBox->setPlaceholderText("First Name EMPTY!");
        halt = true;
    }

    if(ui->mBox->text() == "")
    {
        ui->mBox->setPlaceholderText("Middle Name (optional)");
        halt = false;
    }

    if(ui->lBox->text() == "")
    {
        ui->lBox->setPlaceholderText("Last Name EMPTY!");
        halt = true;
    }
    // Comprobar si el nombre de usuario ya existe en la base de datos
    QSqlQuery cQuery(db.db);
    cQuery.prepare("SELECT username FROM sys_users WHERE username = (:un)");
    cQuery.bindValue(":un", ui->uBox->text());

    if(cQuery.exec())
    {
        if(cQuery.next())
        {
            ui->uBox->setText("");
            ui->uBox->setPlaceholderText("¡Elige un nombre de usuario diferente!");
            halt = true;
        }
    }
    // Comprobar si el correo electrónico ya existe en la base de datos
    QSqlQuery cQuery2(db.db);
    cQuery2.prepare("SELECT email FROM sys_users WHERE email = (:em)");
    cQuery2.bindValue(":em", ui->eBox->text());

    if(cQuery2.exec())
    {
        if(cQuery2.next())
        {
            ui->eBox->setText("");
            ui->eBox->setPlaceholderText("¡Usa otro correo electrónico!");
            halt = true;
        }
    }


    if(halt)
    {
        ui->regLabel->setText("Por favor, corrija sus errores");
    }
    else
    {
        if (this->picName != "")
        {
            QString to = this->picDir+"/"+ui->uBox->text();

            if (QFile::exists(to))
            {
                QFile::remove(to);
            }

            QFile::copy(this->picName, to);
            this->picName = "";
        }
        // Realizar el registro en la base de datos
        ui->regLabel->setText("");
        QSqlQuery iQuery(db.db);
        iQuery.prepare("INSERT INTO sys_users(username, passwd, fname, mname, lname, email)"\
                       "VALUES(:un, :pw, :fn, :mn, :ln, :em)");
        iQuery.bindValue(":un", ui->uBox->text());
        iQuery.bindValue(":pw", ui->pBox->text());
        iQuery.bindValue(":fn", ui->fBox->text());
        iQuery.bindValue(":mn", ui->mBox->text());
        iQuery.bindValue(":ln", ui->lBox->text());
        iQuery.bindValue(":em", ui->eBox->text());

        if(iQuery.exec())
        {
            ui->uBox->setText("");
            ui->pBox->setText("");
            ui->eBox->setText("");
            ui->fBox->setText("");
            ui->mBox->setText("");
            ui->lBox->setText("");
            ui->rpLabel->setText("<img src=\":user.png\" />");
            ui->loginLabel->setText("¡Registro exitoso! Ahora puede iniciar sesión");
            ui->winStack->setCurrentIndex(0);
        }

    }
}

/**
* @brief Manejador del evento de clic en el botón de retroceso (backButton).
* Restablece el texto del label de inicio de sesión y cambia la página actual del stacked widget al índice 0.
*/
void LoginSystem::on_backButton_clicked()
{
    ui->loginLabel->setText("");
    ui->winStack->setCurrentIndex(0);
}

/**
* @brief Manejador del evento de clic en el botón de retroceso (backButton_2).
* Cambia la página actual del stacked widget al índice 2.
*/
void LoginSystem::on_backButton_2_clicked()
{
    ui->winStack->setCurrentIndex(2);
}

/**
* @brief Manejador del evento de clic en el botón de editar (editButton).
* Recupera los datos del usuario actual de la base de datos y los muestra en los campos de edición correspondientes.
* Cambia la página actual del stacked widget al índice 3.
*/
void LoginSystem::on_editButton_clicked()
{
    QSqlQuery fetcher;
    fetcher.prepare("SELECT * FROM sys_users WHERE username = (:un) AND passwd = (:pw)");
    fetcher.bindValue(":un", this->username);
    fetcher.bindValue(":pw", this->password);
    fetcher.exec();

    int idUsername = fetcher.record().indexOf("username");
    int idPasswd = fetcher.record().indexOf("passwd");
    int idEmail = fetcher.record().indexOf("email");
    int idFname = fetcher.record().indexOf("fname");
    int idMname = fetcher.record().indexOf("mname");
    int idLname = fetcher.record().indexOf("lname");

    while (fetcher.next())
    {
        ui->uBox_2->setText(fetcher.value(idUsername).toString());
        ui->pBox_2->setText(fetcher.value(idPasswd).toString());
        ui->eBox_2->setText(fetcher.value(idEmail).toString());
        ui->fBox_2->setText(fetcher.value(idFname).toString());
        ui->mBox_2->setText(fetcher.value(idMname).toString());
        ui->lBox_2->setText(fetcher.value(idLname).toString());
    }

    ui->winStack->setCurrentIndex(3);
}

/**
* @brief Manejador del evento de clic en el botón de eliminar cuenta (delButton).
* Solicita confirmación al usuario antes de eliminar su cuenta de usuario.
* Si se confirma la eliminación, se borra la imagen asociada a la cuenta (si existe) y se elimina el registro de usuario de la base de datos.
* Se borran los datos de inicio de sesión, se muestra un mensaje y se cambia la página actual del stacked widget al índice 0.
*/
void LoginSystem::on_delButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                       "",  "¿Está seguro de que desea eliminar su cuenta?",
                                       QMessageBox::Yes|QMessageBox::No).exec())
    {
        QString to = this->picDir+"/"+this->username;

        if (QFile::exists(to))
        {
            QFile::remove(to);
        }

        QSqlQuery dQuery(db.db);
        dQuery.prepare("DELETE FROM sys_users WHERE username = (:un)");
        dQuery.bindValue(":un", this->username);

        if(dQuery.exec())
        {
            ui->usernameBox->setText("");
            ui->passwordBox->setText("");
            ui->loginLabel->setText("¡Cuenta borrada!");
            ui->winStack->setCurrentIndex(0);
        }
    }
}

/**
* @brief Manejador del evento de clic en el botón de guardar cambios (editedButton).
* Valida los campos de edición y actualiza los datos del usuario en la base de datos.
* Si todos los campos son válidos, se actualiza la imagen asociada a la cuenta (si se ha seleccionado una nueva imagen).
* Se muestra un mensaje de éxito y se cambia la página actual del stacked widget al índice 2.
*/
void LoginSystem::on_editedButton_clicked()
{
    bool halt = false;

    if(ui->uBox_2->text() == "")
    {
        ui->uBox_2->setPlaceholderText("Username EMPTY!");
        halt = true;
    }

    if(ui->pBox_2->text() == "")
    {
        ui->pBox_2->setPlaceholderText("Password EMPTY!");
        halt = true;
    }

    if(ui->eBox_2->text() == "")
    {
        ui->eBox_2->setPlaceholderText("E-mail EMPTY!");
        halt = true;
    }

    if(ui->fBox_2->text() == "")
    {
        ui->fBox_2->setPlaceholderText("First Name EMPTY!");
        halt = true;
    }

    if(ui->mBox_2->text() == "")
    {
        ui->mBox_2->setPlaceholderText("Middle Name (optional)");
        halt = false;
    }

    if(ui->lBox_2->text() == "")
    {
        ui->lBox_2->setPlaceholderText("Last Name EMPTY!");
        halt = true;
    }

    QSqlQuery cQuery(db.db);
    cQuery.prepare("SELECT username FROM sys_users WHERE username = (:un)");
    cQuery.bindValue(":un", ui->uBox->text());

    if(cQuery.exec())
    {
        if(cQuery.next() && ui->uBox_2->text() != cQuery.value(0).toString())
        {
            ui->uBox_2->setText("");
            ui->uBox_2->setPlaceholderText("¡Elige un nombre de usuario diferente!");
            halt = true;
        }
    }

    QSqlQuery cQuery2(db.db);
    cQuery2.prepare("SELECT email FROM sys_users WHERE email = (:em)");
    cQuery2.bindValue(":em", ui->eBox_2->text());

    if(cQuery2.exec())
    {
        if(cQuery2.next() && ui->eBox_2->text() != cQuery2.value(0).toString())
        {
            ui->eBox_2->setText("");
            ui->eBox_2->setPlaceholderText("¡Utilice otro correo electrónico!");
            halt = true;
        }
    }


    if(halt)
    {
        ui->regLabel_2->setText("Por favor, corrija sus errores.");
    }
    else
    {
        if (this->picName != "")
        {
            QString to = this->picDir+"/"+ui->uBox_2->text();

            if (QFile::exists(to))
            {
                QFile::remove(to);
            }

            QFile::copy(this->picName, to);
            this->picName = "";
        }

        ui->regLabel_2->setText("");
        QSqlQuery iQuery(db.db);
        iQuery.prepare("UPDATE sys_users SET username=(:un), passwd=(:pw), fname=(:fn), mname=(:mn), lname=(:ln), email=(:em) WHERE username=(:uno)");
        iQuery.bindValue(":un", ui->uBox_2->text());
        iQuery.bindValue(":pw", ui->pBox_2->text());
        iQuery.bindValue(":fn", ui->fBox_2->text());
        iQuery.bindValue(":mn", ui->mBox_2->text());
        iQuery.bindValue(":ln", ui->lBox_2->text());
        iQuery.bindValue(":em", ui->eBox_2->text());
        iQuery.bindValue(":uno", ui->uBox_2->text());

        if(iQuery.exec())
        {
            ui->winStack->setCurrentIndex(2);
        }

    }
}

/**
* @brief Manejador del evento de cambio de página en el stacked widget (winStack).
* Actualiza la interfaz según la página actualmente mostrada.
* Si la página actual es la página de edición de perfil (índice 3) y el usuario ha iniciado sesión,
* muestra la imagen asociada a la cuenta del usuario si existe.
* Si la página actual es la página de perfil (índice 2) y el usuario ha iniciado sesión,
* muestra la imagen y los datos de perfil del usuario y muestra el botón de administrador si el usuario tiene rango de administrador.
* Si la página actual es la página de confirmación de eliminación de cuenta (índice 4) y el usuario ha iniciado sesión,
* cambia la página actual del stacked widget al índice 0 (página de inicio de sesión).
* @param arg1 Índice de la página actual del stacked widget.
*/
void LoginSystem::on_winStack_currentChanged(int arg1)
{

    if(arg1 == 3 && this->loggedIn)
    {
        if(QFile::exists(this->picDir+"/"+this->username))
        {
            ui->rpLabel_2->setText("<img src=\"file:///"+this->picDir+"/"+this->username+"\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
        }
    }

    if(arg1 == 2 && this->loggedIn)
    {
        if(QFile::exists(this->picDir+"/"+this->username))
        {
            ui->loggedPic->setText("<img src=\"file:///"+this->picDir+"/"+this->username+"\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
        }

        QSqlQuery fetcher;
        fetcher.prepare("SELECT * FROM sys_users WHERE username = (:un)");
        fetcher.bindValue(":un", this->username);
        fetcher.exec();

        int idFname = fetcher.record().indexOf("fname");
        int idMname = fetcher.record().indexOf("mname");
        int idLname = fetcher.record().indexOf("lname");
        int idRank = fetcher.record().indexOf("rank");
        int idEmail = fetcher.record().indexOf("email");

        QString fullname, email, rank;

        while (fetcher.next())
        {
            fullname = fetcher.value(idFname).toString();
            fullname += " " + fetcher.value(idMname).toString();
            fullname += " " + fetcher.value(idLname).toString();
            rank = fetcher.value(idRank).toString();
            email = fetcher.value(idEmail).toString();
        }
        if(rank == "-1")
        {
            ui->adminButton->setVisible(true);
            ui->adminButton_2->setVisible(true);
            ui->eBox_2->setVisible(true);
            ui->adminButton_3->setVisible(false);
        }
        if(rank == "1")
        {
           ui->adminButton_3->setVisible(true);

        }
        ui->nameLabel->setText(fullname);
        globalInteger = rank;
        ui->emailLabel->setText(email);
    }

    if(arg1 == 4 && this->loggedIn)
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
}

/**
* @brief Manejador del evento de clic en el botón "adminButton".
* Cambia la página actual del stacked widget (winStack) al índice 4 (página de administrador).
*/
void LoginSystem::on_adminButton_clicked()
{
    ui->winStack->setCurrentIndex(4);
}

/**
* @brief Manejador del evento de clic en el botón "pageButton".
* Cambia la página actual del stacked widget (winStack) al índice 2 (página de perfil).
*/
void LoginSystem::on_pageButton_clicked()
{
    ui->winStack->setCurrentIndex(2);
}

/**
* @brief Manejador del evento de clic en el botón "editedButton_2".
* Guarda los cambios realizados en el modelo de tabla y los envía a la base de datos.
* Actualiza la etiqueta de estado en la interfaz de administrador.
*/
void LoginSystem::on_editedButton_2_clicked()
{
    if(this->tblMdl->submitAll())
    {
        this->tblMdl->database().commit();
        ui->adminLabel->setText("¡Guardado en la base de datos!");
    }
    else
    {
        this->tblMdl->database().rollback();
    }
}

/**
* @brief Manejador del evento de clic en el botón "backButton_5".
* Revierte todos los cambios realizados en el modelo de tabla y realiza un rollback en la base de datos.
*/
void LoginSystem::on_backButton_5_clicked()
{
    this->tblMdl->revertAll();
    this->tblMdl->database().rollback();
}

/**
* @brief Manejador del evento de clic en el botón "userBrowse".
* Cambia a la página de navegación de usuarios en el stacked widget.
*/
void LoginSystem::on_userBrowse_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/**
* @brief Manejador del evento de cambio de página en el stacked widget.
* Actualiza la tabla de usuarios o administradores según la página actual.
*/
void LoginSystem::on_stackedWidget_currentChanged(int arg1)
{
    if(arg1 == 0 && this->loggedIn)
    {
        ui->headLabel->setText("CLIENTES");
        this->tblMdl = new QSqlTableModel;
        this->tblMdl->setTable("sys_users");
        this->tblMdl->setFilter("rank != -1 AND rank != 0");
        this->tblMdl->select();
        ui->tableView->setModel(this->tblMdl);
        this->tblMdl->database().transaction();
    }

    if(arg1 == 1 && this->loggedIn)
    {
        ui->headLabel->setText("ADMINISTRADORES");
        this->tblMdl = new QSqlTableModel;
        this->tblMdl->setTable("sys_users");
        this->tblMdl->setFilter("rank == -1 OR rank == 0");
        this->tblMdl->select();
        ui->tableView_2->setModel(this->tblMdl);
        this->tblMdl->database().transaction();
    }
}

/**
* @brief Manejador del evento del botón "Admin Browse".
* Cambia la página actual del stacked widget a la página de administradores.
*/
void LoginSystem::on_adminBrowse_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
* @brief Manejador del evento del botón "Delete All Admins".
* Elimina todos los administradores excepto el usuario actual.
*/
void LoginSystem::on_delAButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                        "", "¿Está seguro de que desea borrar todos los administradores?"\
                                        "\n(Esto no borrará a los usuarios ni a ti)",
                                        QMessageBox::Yes|QMessageBox::No).exec())
    {
        QSqlQuery dQuery(db.db);
        dQuery.prepare("DELETE FROM sys_users WHERE rank != 1 AND username != \"" + this->username + "\"");

        if(dQuery.exec())
        {
            ui->adminLabel->setText("¡Consulta ejecutada!");
        }
    }
}

/**
* @brief Manejador del evento del botón "adminButton_2": Go to Main.
* Muestra la ventana principal (MainWindow).
*/
void LoginSystem::on_adminButton_2_clicked()
{
    ptrMainWindow->show(); /**< Viajar a Main */
}

/**
 * @brief Manejador del evento del botón "Add User".
 * Agrega un nuevo usuario administrador al sistema.
 */
void LoginSystem::on_pushButton_clicked()
{
    QString usernameBase = "admi";
    QString emailBase = "administra@root.org";
    QString username = usernameBase;
    QString email = emailBase;
    int counter = 1;

    QSqlQuery selectQuery(db.db);
    selectQuery.prepare("SELECT COUNT(*) FROM sys_users WHERE username = :un OR email = :em");
    selectQuery.bindValue(":un", username);
    selectQuery.bindValue(":em", email);

    if (selectQuery.exec() && selectQuery.next())
    {
        int count = selectQuery.value(0).toInt();
        while (count > 0)
        {
            username = usernameBase + QString::number(counter);
            email = emailBase + QString::number(counter);
            selectQuery.bindValue(":un", username);
            selectQuery.bindValue(":em", email);
            if (selectQuery.exec() && selectQuery.next()) {
                count = selectQuery.value(0).toInt();
            } else {
                qDebug() << "Error al ejecutar la consulta de selección:" << selectQuery.lastError().text();
                return;
            }
            counter++;
        }
    }
    else
    {
        qDebug() << "Error al ejecutar la consulta de selección" << selectQuery.lastError().text();
        return;
    }

    QSqlQuery query(db.db);
    query.prepare("INSERT INTO sys_users (username, passwd, fname, mname, lname, rank, email) "
                  "VALUES (:un, 'pass', 'Root', NULL, 'Administrator', -1, :em)");
    query.bindValue(":un", username);
    query.bindValue(":em", email);

    if (query.exec())
    {
        ui->adminLabel->setText("¡Nuevo administrador añadido con éxito!");
        QTimer::singleShot(3000, [this]() {
            ui->adminLabel->setText("Recuerde Asegurarse de  cualquier cambio");});

    }
    else
    {
        qDebug() << "Error al ejecutar la consulta:" << query.lastError().text();
    }
}

/**
* @brief Manejador del evento del botón "Add Client".
* Agrega un nuevo usuario cliente al sistema.
*/
void LoginSystem::on_pushButton_2_clicked()
{
    QString usernameBase = "Cliente";
    QString emailBase = "cliente@root.org";
    QString username = usernameBase;
    QString email = emailBase;
    int counter = 1;

    QSqlQuery selectQuery(db.db);
    selectQuery.prepare("SELECT COUNT(*) FROM sys_users WHERE username = :un OR email = :em");
    selectQuery.bindValue(":un", username);
    selectQuery.bindValue(":em", email);

    if (selectQuery.exec() && selectQuery.next())
    {
        int count = selectQuery.value(0).toInt();
        while (count > 0)
        {
            username = usernameBase + QString::number(counter);
            email = emailBase + QString::number(counter);
            selectQuery.bindValue(":un", username);
            selectQuery.bindValue(":em", email);
            if (selectQuery.exec() && selectQuery.next()) {
                count = selectQuery.value(0).toInt();
            } else {
                qDebug() << "Error al ejecutar la consulta de selección:" << selectQuery.lastError().text();
                return;
            }
            counter++;
        }
    }
    else
    {
        qDebug() << "Error al ejecutar la consulta de selección:" << selectQuery.lastError().text();
        return;
    }

    QSqlQuery query(db.db);
    query.prepare("INSERT INTO sys_users (username, passwd, fname, mname, lname, rank, email) "
                  "VALUES (:un, 'pass', 'Root', NULL, 'Administrator', 1, :em)");
    query.bindValue(":un", username);
    query.bindValue(":em", email);

    if (query.exec())
    {
        ui->adminLabel->setText("¡Nuevo usuario - cliente añadido con éxito!");
        QTimer::singleShot(3000, [this]() {
        ui->adminLabel->setText("Recuerde Asegurarse de  cualquier cambio");});
    }
    else
    {
        qDebug() << "Error al ejecutar la consulta:" << query.lastError().text();
    }
}

void LoginSystem::on_pushButton_3_clicked()
{
  QCoreApplication::quit();
}


void LoginSystem::on_adminButton_3_clicked()
{
    ptrMainWindow->show(); /**< Viajar a Main */
}

