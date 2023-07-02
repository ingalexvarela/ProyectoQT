/**
 * @file findpackage.cpp
 * @brief Implementación de la clase FindPackage.
*/
#include "findpackage.h"
#include "ui_findpackage.h"

/**
 * @brief Constructor de la clase FindPackage.
 * @param parent El widget padre.
*/
FindPackage::FindPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(); // Inicializar el modelo de consulta
}

/**
 * @brief Destructor de la clase FindPackage.
*/
FindPackage::~FindPackage()
{
    qDebug() << "~ Findpackage()";
    delete ui;
    delete model;
}

/**
 * @brief Slot para el evento de clic del botón btnFindPackage.
*/
void FindPackage::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text(); /**< Obtiene el nombre del paquete ingresado en el campo de texto. */
    qDebug() << "Package Name : "<< packageName; /**< Imprime en la consola el nombre del paquete. */
    QSqlDatabase database = QSqlDatabase::database("DB1"); /**< Obtiene la base de datos de nombre "DB1". */

    /**< Ejecuta la consulta en la base de datos para buscar los paquetes que contienen el nombre proporcionado. */
    model->setQuery("select * from Package where PackageName like '%" + packageName + "%'", database);
    /**< Establece el modelo como el modelo de datos para la vista de la tabla. */
    ui->tableView->setModel(model);
}

/**
 * @brief Slot para el evento de clic del botón pushButton.
*/
void FindPackage::on_pushButton_clicked()
{
    close(); // Cerrar la ventana actual
}
