/**
 * @file findtourist.cpp
 * @brief Archivo de implementación de la clase FindTourist.
*/
#include "findtourist.h"
#include "ui_findtourist.h"

/**
 * @brief Constructor de la clase FindTourist.
 * @param parent Puntero al widget padre (opcional).
 * Este constructor crea una nueva instancia de la clase FindTourist y configura la interfaz de usuario.
 * Inicializa el puntero model a NULL.
*/
FindTourist::FindTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTourist)
{
    ui->setupUi(this);
    model = NULL;
}
/**
 * @brief Destructor de la clase FindTourist.
*/
FindTourist::~FindTourist()
{
    qDebug() << "In ~FindTourist()";
    delete ui;
    delete model;
}
/**
* @brief Método que se ejecuta cuando se hace clic en el botón "Find".
* Realiza una búsqueda en la base de datos de turistas utilizando el nombre proporcionado.
*/
void FindTourist::on_btnFind_clicked()
{
    QString packageName = ui->txtTourstfName->text();
    qDebug() << "Package Name : "<< packageName;
    QSqlDatabase database = QSqlDatabase::database("DB1");

    if(model == NULL)
        model = new QSqlQueryModel();

    model->setQuery("select * from Tourist where FirstName like '%" + packageName + "%'", database);
    ui->tableView->setModel(model);
    qDebug() << " after btnFind_clicked";
}

