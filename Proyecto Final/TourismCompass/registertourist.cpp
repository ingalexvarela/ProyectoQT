/**
* @file registertourist.cpp
* @brief Implementación de la clase RegisterTourist
*/

/**
 * @brief Este archivo contiene la implementación de la clase RegisterTourist, que es un diálogo para registrar
 *  turistas. Incluye los archivos de encabezado "registertourist.h", "ui_registertourist.h" y "global.h".
*/
#include "registertourist.h"
#include "ui_registertourist.h"
#include "global.h"

/**
 * @brief
 * Constructor de la clase RegisterTourist.
 * @param parent Puntero al objeto padre (QWidget) del diálogo.
*/
RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

/**
 * @brief
 * Destructor de la clase RegisterTourist.
*/
RegisterTourist::~RegisterTourist()
{
    qDebug() << "in ~RegisterTourist()";
    delete ui;
}

/**
 * @brief Esta función obtiene el número de paquete asociado con un nombre de paquete dado.
 * @param packageName El nombre del paquete del cual se quiere obtener el número.
 * @return El número del paquete como un entero.
*/
int RegisterTourist::getPackageNumber(const QString& packageName)
{
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);

    query.prepare("SELECT Number FROM Package WHERE PackageName = :packageName");
    query.bindValue(":packageName", packageName);
    query.exec();

    if (query.next()) {
        return query.value(0).toInt();
    }

    return 0; // Valor predeterminado en caso de que no se encuentre el paquete
}

/**
 * @brief Esta función se llama cuando se hace clic en el botón "Guardar" (btnSave).
 * Realiza las siguientes acciones:
 * Recupera los valores ingresados en varios campos de entrada (txtFirstName, txtMiddleName, etc.).
 * Verifica si el valor de globalInteger coincide con un valor específico (-1).
 * Si la condición es verdadera:
 * Establece una conexión de base de datos utilizando el identificador "DB1".
 * Ejecuta una consulta para verificar si el paquete está lleno, contando el número de filas en la tabla "Tourist"
 * donde el PackageName coincide con el paquete seleccionado.
 * Si el resultado de la consulta indica que el paquete está lleno, muestra un mensaje de error y sale de la función.
 * De lo contrario, inserta la información del turista en la tabla "Tourist". Si la condición es falsa:
 * Verifica si el valor de globalEmail coincide con el correo electrónico ingresado (email1). Si los correos
 * electrónicos coinciden:
 * - Establece una conexión de base de datos utilizando el identificador "DB1".
 * - Inserta la información del turista en la tabla "Tourist".
 * Si los correos electrónicos no coinciden, muestra un mensaje de error y sale de la función.
 * Ejecuta operaciones adicionales de consulta, limpia la consulta y muestra mensajes de estado correspondientes.
 * Llama a la función on_btnReset_clicked() para restablecer el formulario.
 * Actualiza el texto de label_10 para indicar el éxito o el fracaso del proceso de registro.
*/
void RegisterTourist::on_btnSave_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString middleName = ui->txtMiddleName->text();
    QString lastName = ui->txtLastName->text();
    QString passportNo = ui->txtPassportNo->text();
    QString contactNo = ui->txtContactNo->text();
    QString permanentAddress = ui->txtPermanentAddress->text();
    QString packageName = ui->cmbChoosePackage->currentText();
    QString email1 = ui->textemail->text();
    QString rango = "-1";

    if (globalInteger == rango) {
        QSqlDatabase database = QSqlDatabase::database("DB1");
        QSqlQuery query(database);

        // Verificar si el paquete está lleno
        query.prepare("SELECT COUNT(*) FROM Tourist WHERE PackageName = :packageName");
        query.bindValue(":packageName", packageName);
        query.exec();

        if (query.next()) {
            int rowCount = query.value(0).toInt();
            int number = getPackageNumber(packageName); // Obtener el número de paquete desde la tabla "Package"

            if (rowCount >= number) {
                ui->label_10->setText("¡Paquete lleno, seleccione otro paquete!");
                return; // Salir de la función si el paquete está lleno
            }
        }

        query.prepare("INSERT INTO Tourist (FirstName, MiddleName, LastName, PassportNo, ContactNo, PermanentAddress, PackageName, email) "
                      "VALUES ('" + firstName + "','" + middleName + "','" + lastName + "', '" + passportNo + "','" + contactNo + "','" + permanentAddress + "','" + packageName + "','" + email1 + "')");
        query.exec();
        query.finish();
        query.clear();
        qDebug() << "Last query: " << query.lastQuery();
        qDebug() << "Last error: " << query.lastError().text();
        on_btnReset_clicked();
        ui->label_10->setText("¡Turista registrado con éxito por administrador!");
    }
    else {
        if (globalEmail == email1) {
            qDebug() << "El email coincide";
            qDebug() << "Valor de globalEmail:" << globalEmail;
            qDebug() << "Valor de globalInteger:" << globalInteger;
            qDebug() << "Valor de email:" << email1;
            QSqlDatabase database = QSqlDatabase::database("DB1");
            QSqlQuery query(database);

            query.prepare("INSERT INTO Tourist (FirstName, MiddleName, LastName, PassportNo, ContactNo, PermanentAddress, PackageName, email) "
                          "VALUES ('" + firstName + "','" + middleName + "','" + lastName + "', '" + passportNo + "','" + contactNo + "','" + permanentAddress + "','" + packageName + "','" + email1 + "')");
            query.exec();
            query.finish();
            query.clear();
            qDebug() << "Last query: " << query.lastQuery();
            qDebug() << "Last error: " << query.lastError().text();
            on_btnReset_clicked();
            ui->label_10->setText("¡Turista registrado con éxito bajo su usuario!");
        } else {
            qDebug() << "El email no coincide";
            qDebug() << "Valor de globalEmail:" << globalEmail;
            qDebug() << "Valor de email:" << email1;
            qDebug() << "Valor de globalInteger:" << globalInteger;
            ui->label_10->setText("¡Turista no fue registrado, utilice el correo de su usuario!");
            on_btnReset_clicked();
        }
    }
}

/**
 * @brief
 * Esta función se llama cuando se hace clic en el botón "loadPackage".
 * Realiza las siguientes acciones:
 * Establece una conexión de base de datos utilizando el identificador "DB1".
 * Ejecuta una consulta para seleccionar los nombres de los paquetes desde la tabla "Package".
 * Agrega los nombres de los paquetes al combobox cmbChoosePackage.
 * Muestra información de depuración para cada nombre de paquete agregado.
 * Muestra la última consulta ejecutada y cualquier error asociado.
*/
void RegisterTourist::on_loadPakcage_clicked()
{
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);

    query.prepare("SELECT PackageName FROM Package");
    query.exec();

    while (query.next()) {
        ui->cmbChoosePackage->addItem(query.value(0).toString());
        qDebug() << "Filling Combobox: " << query.value(0).toString();
    }

    qDebug() << "Last query: " << query.lastQuery();
    qDebug() << "Last error: " << query.lastError().text();
}

/**
 * @brief
 * Esta función se llama cuando se produce un cambio en la selección actual del combobox cmbChoosePackage.
 * Realiza las siguientes acciones:
 * Recupera el nombre del paquete seleccionado actualmente en el combobox.
 * Establece una conexión de base de datos utilizando el identificador "DB1".
 * Ejecuta una consulta para seleccionar la descripción del paquete desde la tabla "Package" donde el nombre del paquete coincide con el seleccionado.
 * Recupera el valor de la descripción de la consulta y lo establece en el campo de texto txtPackageDescription.
 * Finaliza y borra la consulta.
 * Muestra la última consulta ejecutada y cualquier error asociado.
*/
void RegisterTourist::on_cmbChoosePackage_currentIndexChanged(int index)
{
    QString packageName = ui->cmbChoosePackage->currentText();
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);

    query.prepare("SELECT PackageDescription FROM Package WHERE PackageName = '" + packageName + "'");
    query.exec();
    query.next();
    ui->txtPackageDescription->setText(query.value(0).toString());
    query.finish();
    query.clear();
    qDebug() << "Last query: " << query.lastQuery();
    qDebug() << "Last error: " << query.lastError().text();
}

/**
 * @brief
 * Esta función se llama cuando se hace clic en el botón "Reset" (btnReset).
 * Realiza las siguientes acciones:
 * Limpia el contenido de los campos de texto txtFirstName, txtLastName, txtMiddleName,
 * txtContactNo, txtPassportNo, txtPermanentAddress y txtPackageDescription.
*/
void RegisterTourist::on_btnReset_clicked()
{
    ui->txtFirstName->clear();
    ui->txtLastName->clear();
    ui->txtMiddleName->clear();
    ui->txtContactNo->clear();
    ui->txtPassportNo->clear();
    ui->txtPermanentAddress->clear();
    ui->txtPackageDescription->clear();
}

/**
 * @brief
 * Esta función se llama cuando se hace clic en el botón "pushButton".
 * Realiza la siguiente acción:
 * Cierra la ventana actual.
*/
void RegisterTourist::on_pushButton_clicked()
{
    close(); // Cerrar la ventana actual
}
