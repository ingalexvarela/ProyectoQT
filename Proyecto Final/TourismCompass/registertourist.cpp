#include "registertourist.h"
#include "ui_registertourist.h"
#include "global.h"

RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

RegisterTourist::~RegisterTourist()
{
    qDebug() << "in ~RegisterTourist()";
    delete ui;
}

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

void RegisterTourist::on_pushButton_clicked()
{
    close(); // Cerrar la ventana actual
}
