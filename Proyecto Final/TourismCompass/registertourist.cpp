/**
 * @file registertourist.cpp
 * @brief Archivo de implementación de la clase RegisterTourist.
*/
#include "registertourist.h"
#include "ui_registertourist.h"
#include "global.h"
/**
 * @brief Constructor de la clase RegisterTourist.
 * @param parent Puntero al widget padre (opcional).
 * Este constructor crea una nueva instancia de la clase RegisterTourist y configura la interfaz de usuario.
*/
RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}
/**
 * @brief Destructor de la clase RegisterTourist.
 * Este destructor se encarga de liberar la memoria asignada para la interfaz de usuario.
*/
RegisterTourist::~RegisterTourist()
{
    qDebug() << "in ~RegisterTourist()";
    delete ui;
}

/**
* @brief Método que se ejecuta cuando se hace clic en el botón "Save".
* Guarda la información del turista en la base de datos.
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

    query.prepare("insert into Tourist (FirstName, MiddleName, LastName, PassportNo, ContactNo, PermanentAddress, PackageName,  email) "
                  "values('" + firstName + "','" + middleName + "','" + lastName + "', '" + passportNo + "','" + contactNo + "','" + permanentAddress + "','" + packageName +"','" + email1 +"')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastQuery();
    qDebug() << "Last error : "<< query.lastError().text();
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

       query.prepare("insert into Tourist (FirstName, MiddleName, LastName, PassportNo, ContactNo, PermanentAddress, PackageName,  email) "
                     "values('" + firstName + "','" + middleName + "','" + lastName + "', '" + passportNo + "','" + contactNo + "','" + permanentAddress + "','" + packageName +"','" + email1 +"')");
       query.exec();
       query.finish();query.clear();
       qDebug() << "Last error : "<< query.lastQuery();
       qDebug() << "Last error : "<< query.lastError().text();
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
* @brief Método que se ejecuta cuando se hace clic en el botón "loadPackage".
* Carga las opciones de paquete desde la base de datos en el combo box "cmbChoosePackage".
*/
void RegisterTourist::on_loadPakcage_clicked()
{
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);

     query.prepare("select PackageName from Package");
     query.exec();
     while(query.next())
      {
             ui->cmbChoosePackage->addItem(query.value(0).toString());
             qDebug() << "Filling Combobox " << query.value(0).toString();
      }

     qDebug() << "Last error : "<< query.lastQuery();
     qDebug() << "Last error : "<< query.lastError().text();
}

/**
* @brief Método que se ejecuta cuando se selecciona un índice en el combo box "cmbChoosePackage".
* Obtiene la descripción del paquete seleccionado desde la base de datos y la muestra en el campo de texto "txtPackageDescription".
* @param index Índice seleccionado.
*/
void RegisterTourist::on_cmbChoosePackage_currentIndexChanged(int index)
{
    QString packageName = ui->cmbChoosePackage->currentText();
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);

     query.prepare("select PackageDescription from Package where PackageName ='" + packageName + "'");
     query.exec(); query.next();
     ui->txtPackageDescription->setText(query.value(0).toString());
     query.finish();query.clear();
     qDebug() << "Last error : "<< query.lastQuery();
     qDebug() << "Last error : "<< query.lastError().text();
}

/**
* @brief Método que se ejecuta cuando se hace clic en el botón "Reset".
* Restablece los campos de entrada y el campo de descripción del paquete a su estado inicial.
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

