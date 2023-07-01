/**
* @file addpackage.cpp
* @brief implementación de la clase AddPackage.
*/
#include "addpackage.h"
#include "ui_addpackage.h"

/**
 * @brief Constructor de la clase AddPackage.
 * @param parent El widget padre.
*/
AddPackage::AddPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

/**
 * @brief Destructor de la clase AddPackage.
*/
AddPackage::~AddPackage()
{
    qDebug() << "~ AddPackage()";
    delete ui;

}
/**
 * @brief Slot para el evento de clic del botón btnSave.
*/
void AddPackage::on_btnSave_clicked()
{
    QString packageName = ui->txtPackageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString amount = ui->txtAmount->text();
    qDebug() << "Package Name : "<< packageName <<" Package Description : "<<packageDescription << "Amount : "<<amount;
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);
    query.prepare("insert into Package (PackageName, PackageDescription, Amount) values('" + packageName + "','" + packageDescription + "','" + amount + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();
    on_btnReset_clicked();
}

/**
 * @brief Slot para el evento de clic del botón btnReset que limpia los cajones.
*/
void AddPackage::on_btnReset_clicked()
{
    ui->txtPackageName->clear();
    ui->txtDescription->clear();
    ui->txtAmount->clear();
}

