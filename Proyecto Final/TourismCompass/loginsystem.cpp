/**
* @file loginsystem.cpp
* @brief Implementación de la clase LoginSystem
*/

/**
 * @brief Inclusiones de archivos y declaraciones de variables globales.
 * Este archivo contiene las inclusiones de archivos de encabezado necesarios para el funcionamiento del programa,
 * así como la declaración de variables globales utilizadas en el sistema de inicio de sesión. Las inclusiones de
 * archivos incluyen "loginsystem.h", "./ui_loginsystem.h", "qdb.h" y otros, que proporcionan las definiciones y
 * declaraciones necesarias para el código que sigue. Las variables globales declaradas aquí son globalEmail y
 * globalInteger, que se utilizan para almacenar información global en el programa. Además, se declara un objeto
 * QDBLite::DB llamado db, que representa una conexión a una base de datos utilizada en el sistema.
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
 * @param parent Puntero al widget padre.
 * Este constructor inicializa la interfaz de usuario y realiza algunas configuraciones iniciales. Establece el
 * modo de visualización del campo de contraseña, establece las indicaciones de entrada del método de entrada y
 * crea una instancia del objeto MainWindow.
 * La interfaz de usuario se configura utilizando el método setupUi() de la clase Ui::LoginSystem, que realiza
 * la inicialización de los elementos de la interfaz definidos en el archivo de interfaz generado.
 * La conexión a la base de datos se establece utilizando el objeto db de la clase QDBLite::DB, que se inicializa
 * llamando al método Connect() y pasando la ruta de la base de datos como parámetro. El estado de la conexión
 * se guarda en la propiedad dbstate. Después de la configuración inicial, se establecen índices en los widgets
 * winStack y stackedWidget para mostrar la página de inicio de sesión y ocultar algunas otras páginas.
 * Finalmente, se crea una instancia del objeto MainWindow y se asigna a la variable ptrMainWindow.
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
 * @brief Slot para el evento de clic del botón de inicio de sesión.
 * Este slot se activa cuando se hace clic en el botón de inicio de sesión. Realiza el proceso de inicio de sesión
 * verificando las credenciales proporcionadas en los campos de nombre de usuario y contraseña.
 * Llama al método Login() para verificar las credenciales y guarda el resultado en la variable loggedIn.
 * Si el inicio de sesión es exitoso (loggedIn es verdadero), guarda el nombre de usuario, contraseña y correo
 * electrónico en las variables correspondientes, actualiza la variable global globalEmail, establece el texto de
 * la etiqueta de inicio de sesión en blanco y cambia el índice de winStack para mostrar la página principal.
 * Si el inicio de sesión falla (loggedIn es falso), establece el texto de la etiqueta de inicio de sesión en
 * "Error al iniciar sesión: ¡Credenciales no válidas!".
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
 * @brief Realiza el proceso de inicio de sesión.
 * Verifica las credenciales proporcionadas (nombre de usuario, contraseña y correo electrónico) en la base de
 * datos. Si las credenciales son válidas, oculta ciertos elementos de la interfaz de usuario, actualiza las
 * propiedades de visibilidad de algunos botones y campos de texto, y devuelve verdadero.
 * @param u El nombre de usuario proporcionado.
 * @param p La contraseña proporcionada.
 * @param e El correo electrónico proporcionado.
 * @return Verdadero si las credenciales son válidas, falso de lo contrario.
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
 * @brief Maneja el evento de clic en el botón de registro.
 * Actualiza los campos de texto de nombre de usuario y contraseña en la interfaz de usuario con los
 * valores ingresados en los campos correspondientes. Luego, cambia el índice de la pila de ventanas
 * para mostrar la página de registro.
*/
void LoginSystem::on_regButton_clicked()
{
    ui->uBox->setText(ui->usernameBox->text());
    ui->pBox->setText(ui->passwordBox->text());
    ui->winStack->setCurrentIndex(1);
}

/**
 * @brief Maneja el evento de clic en el botón de cerrar sesión.
 * Muestra un cuadro de diálogo de confirmación para verificar si el usuario desea cerrar sesión.
 * Si se selecciona "Sí", se establece la variable de inicio de sesión en falso, se borra el texto del
 * campo de contraseña y se muestra un mensaje de confirmación en la etiqueta de inicio de sesión.
 * Luego, cambia el índice de la pila de ventanas para mostrar la página de inicio de sesión.
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
 * @brief Maneja el evento de clic en el botón de completar registro.
 * Verifica si los campos obligatorios (nombre de usuario, contraseña, correo electrónico y apellido) están llenos.
 * Si alguno de ellos está vacío, muestra un mensaje de advertencia en los campos correspondientes. Comprueba si el
 * nombre de usuario y el correo electrónico ya existen en la base de datos. Si alguno de ellos ya existe, muestra
 * un mensaje de advertencia y solicita al usuario que elija un nombre de usuario o correo electrónico diferente.
 * Si no hay errores, copia la imagen de perfil seleccionada (si existe) a una ubicación específica. Luego, realiza
 * el registro en la base de datos, borra los campos de texto y muestra un mensaje de confirmación en la etiqueta de
 * inicio de sesión. Cambia el índice de la pila de ventanas para mostrar la página de inicio de sesión.
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
 * @brief Maneja el evento de clic en el botón de retroceso.
 * Borra cualquier mensaje mostrado en la etiqueta de inicio de sesión y cambia el índice de la pila de ventanas
 * para mostrar la página de inicio de sesión.
*/
void LoginSystem::on_backButton_clicked()
{
    ui->loginLabel->setText("");
    ui->winStack->setCurrentIndex(0);
}

/**
 * @brief Maneja el evento de clic en el botón de retroceso.
 * Cambia el índice de la pila de ventanas para mostrar la página principal después de iniciar sesión.
*/
void LoginSystem::on_backButton_2_clicked()
{
    ui->winStack->setCurrentIndex(2);
}

/**
 * @brief Maneja el evento de clic en el botón de edición de perfil.
 * Recupera los datos del usuario de la base de datos y los muestra en los campos correspondientes del
 *  formulario de edición de perfil. Cambia el índice de la pila de ventanas para mostrar la página de
 *  edición de perfil.
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
 * @brief Maneja el evento de clic en el botón de eliminación de cuenta.
 * Muestra un cuadro de diálogo de confirmación para verificar si el usuario realmente desea eliminar su cuenta.
 * Si el usuario confirma la eliminación, se borra la cuenta de la base de datos, incluyendo la imagen de perfil
 * asociada. Luego, se borran los datos de los campos de nombre de usuario y contraseña, se muestra un mensaje de
 * cuenta borrada y se cambia el índice de la pila de ventanas para mostrar la página de inicio de sesión.
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
 * @brief Maneja el evento de clic en el botón de edición de perfil.
 * Verifica que los campos obligatorios (nombre de usuario, contraseña, correo electrónico, primer nombre y apellido)
 * no estén vacíos. Si alguno de los campos está vacío, se muestra un mensaje de advertencia en los campos correspondientes.
 * Luego, se verifica si el nombre de usuario y el correo electrónico ingresados ya existen en la base de datos.
 * Si alguno de ellos ya existe (excepto si pertenecen al usuario actual), se muestra un mensaje de advertencia en los
 * campos correspondientes. Si no hay errores, se actualiza el perfil del usuario en la base de datos, incluyendo la
 * imagen de perfil si se seleccionó una nueva. Se borra el nombre de archivo de imagen temporal.
 * Finalmente, se cambia el índice de la pila de ventanas para mostrar la página de perfil.
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
 * @brief Maneja el cambio de índice en la pila de ventanas.
 * Cuando se cambia a la página de edición de perfil (índice 3) o a la página de perfil (índice 2),
 * se comprueba si el usuario ha iniciado sesión. Si ha iniciado sesión, se carga la imagen de perfil correspondiente
 * si existe. En la página de perfil (índice 2), se obtienen y muestran los detalles del usuario, como el nombre
 * completo, correo electrónico y rango. Si el usuario tiene un rango de "-1", se muestra el botón de administrador
 * y el campo de correo electrónico editable. Si el usuario tiene un rango de "1", se muestra el botón para acceder
 * a las funciones de administrador. Cuando se cambia a la página de eliminación de cuenta (índice 4), se establece
 * el índice de la pila de ventanas de la página de perfil (índice 0).
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
 * @brief Slot para manejar el cambio de página en el widget apilado (stacked widget).
 * @param arg1 El índice de la página actual en el stacked widget.
 * Realiza diferentes acciones dependiendo de la página que se esté mostrando.
 * Si arg1 es igual a 0 y el usuario ha iniciado sesión:
 *    - Establece el texto de la etiqueta "headLabel" como "CLIENTES".
 *    - Crea un nuevo QSqlTableModel llamado "tblMdl".
 *    - Establece la tabla del modelo como "sys_users".
 *    - Aplica un filtro en el modelo para mostrar solo los registros con un rango diferente de -1 y 0.
 *    - Selecciona los datos en el modelo.
 *    - Asigna el modelo a la vista "tableView".
 *    - Inicia una transacción en la base de datos asociada al modelo.
 *
 * Si arg1 es igual a 1 y el usuario ha iniciado sesión:
 *    - Establece el texto de la etiqueta "headLabel" como "ADMINISTRADORES".
 *    - Crea un nuevo QSqlTableModel llamado "tblMdl".
 *    - Establece la tabla del modelo como "sys_users".
 *    - Aplica un filtro en el modelo para mostrar solo los registros con un rango igual a -1 o 0.
 *    - Selecciona los datos en el modelo.
 *    - Asigna el modelo a la vista "tableView_2".
 *    - Inicia una transacción en la base de datos asociada al modelo.
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
            on_stackedWidget_currentChanged(1);
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
 * @brief Slot para manejar el evento de clic en el botón "pushButton".
 *
 * Genera un nuevo administrador agregando un registro a la tabla "sys_users" en la base de datos.
 *
 * Comienza generando un nombre de usuario y correo electrónico base predefinidos.
 * Luego realiza una consulta de selección para verificar si el nombre de usuario y el correo electrónico ya existen
 * en la base de datos. Si existen, se genera un nuevo nombre de usuario y correo electrónico agregando un contador al
 * nombre base y se repite el proceso hasta encontrar uno único. Una vez que se encuentra un nombre de usuario y
 * correo electrónico únicos, se ejecuta una consulta de inserción para agregar el nuevo administrador a la base
 * de datos. Se muestra un mensaje de éxito en la etiqueta "adminLabel" y se establece un temporizador para mostrar
 * un mensaje adicional después de 3 segundos. Si ocurre algún error durante el proceso de consulta, se muestra un
 * mensaje de error en la salida de depuración. Finalmente, se llama a la función "on_stackedWidget_currentChanged"
 * con el argumento 1 para actualizar la vista de administradores en el stacked widget.
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
    on_stackedWidget_currentChanged(1); //OJO
}

/**
 * @brief Slot para manejar el evento de clic en el botón "pushButton_2".
 * Genera un nuevo usuario cliente agregando un registro a la tabla "sys_users" en la base de datos.
 * Comienza generando un nombre de usuario y correo electrónico base predefinidos.
 * Luego realiza una consulta de selección para verificar si el nombre de usuario y el correo electrónico ya existen
 * en la base de datos. Si existen, se genera un nuevo nombre de usuario y correo electrónico agregando un contador
 * al nombre base y se repite el proceso hasta encontrar uno único. Una vez que se encuentra un nombre de usuario y
 * correo electrónico únicos, se ejecuta una consulta de inserción para agregar el nuevo usuario cliente a la base de
 * datos. Se muestra un mensaje de éxito en la etiqueta "adminLabel" y se establece un temporizador para mostrar un
 * mensaje adicional después de 3 segundos. Si ocurre algún error durante el proceso de consulta, se muestra un
 * mensaje de error en la salida de depuración. Finalmente, se llama a la función "on_stackedWidget_currentChanged"
 * con el argumento 0 para actualizar la vista de clientes en el stacked widget.
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
    on_stackedWidget_currentChanged(0); //OJO
}

/**
 * @brief Slot para manejar el evento de clic en el botón "pushButton_3".
 * Cierra la aplicación al llamar a la función `quit()` de QCoreApplication.
*/
void LoginSystem::on_pushButton_3_clicked()
{
  QCoreApplication::quit();
}

/**
 * @brief Slot para manejar el evento de clic en el botón "adminButton_3".
 * Muestra la ventana principal (MainWindow) al llamar a la función `show()` en el puntero `ptrMainWindow`.
 * Este botón permite al usuario navegar de regreso a la ventana principal desde la vista de administrador.
*/
void LoginSystem::on_adminButton_3_clicked()
{
    ptrMainWindow->show(); /**< Viajar a Main */
}

/**
 * @brief Slot para manejar el evento de clic en el botón "delAButton_2".
 * Muestra un cuadro de diálogo de confirmación para confirmar la eliminación de todos los usuarios, excepto los
 * administradores y el usuario actual. Si el usuario confirma, se ejecuta una consulta para eliminar los usuarios
 * de rango 1 (clientes) que no sean el usuario actual. Actualiza el texto del QLabel "adminLabel" con un mensaje
 * de éxito y llama a la función "on_stackedWidget_currentChanged(0)" para cambiar a la vista de "CLIENTES".
*/
void LoginSystem::on_delAButton_2_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                        "", "¿Está seguro de que desea borrar todos los usuarios?"\
                                        "\n(Esto no borrará a los administradores ni a ti)",
                                            QMessageBox::Yes|QMessageBox::No).exec())
    {
        QSqlQuery dQuery(db.db);
        dQuery.prepare("DELETE FROM sys_users WHERE rank == 1 AND username != \"" + this->username + "\"");

        if(dQuery.exec())
        {
            ui->adminLabel->setText("¡Consulta ejecutada!");
            on_stackedWidget_currentChanged(0);
        }
    }
}

