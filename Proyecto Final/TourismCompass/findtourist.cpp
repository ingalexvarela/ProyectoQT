/**
 * @file findtourist.cpp
 * @brief Archivo de implementación de la clase FindTourist.
*/
#include "findtourist.h"
#include "ui_findtourist.h"
#include "global.h"

/**
 * @brief Constructor de la clase FindTourist.
 * @param parent Puntero al widget padre (opcional).
 * Este constructor crea una nueva instancia de la clase FindTourist y configura la interfaz de usuario.
 * Inicializa el puntero model a NULL.
 * Instala el filtro de eventos.
*/
FindTourist::FindTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTourist)
{
    ui->setupUi(this);
    model = NULL;
    // Instalar el filtro de eventos en la ventana principal
    this->installEventFilter(this);

    // Ocultar el botón de cierre (botón "X")
    Qt::WindowFlags flags = windowFlags();
    flags &= ~Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
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
 * @brief Método que se ejecuta cuando la ventana se muestra.
 * Realiza la verificación de la condición y oculta los objetos según sea necesario.
 */
void FindTourist::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);

    if (globalInteger == "1") {
        ui->label->hide();
        ui->txtTourstfName->hide();
    }
}

/**
* @brief Método que se ejecuta cuando se hace clic en el botón "Find".
* Realiza una búsqueda en la base de datos de turistas utilizando el nombre proporcionado si es administrador
* Realiza una búsqueda en la base de datos de turistas utilizando el correo del usuario cliente.
*/
void FindTourist::on_btnFind_clicked()
{
    if (globalInteger == "-1") {
        QString packageName = ui->txtTourstfName->text();
        qDebug() << "Package Name : " << packageName;
        QSqlDatabase database = QSqlDatabase::database("DB1");

        if (model == nullptr)
            model = new QSqlQueryModel();

        QSqlQuery query(database);
        query.prepare("SELECT * FROM Tourist WHERE FirstName LIKE :packageName");
        query.bindValue(":packageName", "%" + packageName + "%");
        query.exec();

        model->setQuery(std::move(query)); // Utilizar el movimiento (move) del objeto QSqlQuery
        ui->tableView->setModel(model);
        ui->tableView->resizeColumnsToContents(); // Ajustar tamaño de columnas al contenido
        qDebug() << " after btnFind_clicked";
    } else {
        qDebug() << "globalEmail : " << globalEmail;
        QSqlDatabase database = QSqlDatabase::database("DB1");
        QSqlQuery query(database);
        query.prepare("SELECT * FROM Tourist WHERE email = :email");
        query.bindValue(":email", globalEmail);
        query.exec();

        if (query.next()) {
            model = new QSqlQueryModel();
            model->setQuery(std::move(query)); // Utilizar el movimiento (move) del objeto QSqlQuery
            ui->tableView->setModel(model);
            ui->tableView->resizeColumnsToContents(); // Ajustar tamaño de columnas al contenido
        } else {
            qDebug() << "No se encontró el turista";
        }
    }
}

/**
 *  @brief  Esta función se llama cuando se hace clic en el pushButton "volver".
 *  Realiza las siguientes acciones:
 *  Establece un modelo nulo para borrar QTableView (tableView).
 *  Elimina el modelo existente para liberar memoria.
 *  Cierra la ventana actual.
*/
void FindTourist::on_pushButton_clicked()
{
    ui->tableView->setModel(nullptr); // Establecer un modelo nulo para limpiar el tableView
    delete ui->tableView->model(); // Eliminar el modelo existente para liberar memoria
    close(); // Cerrar la ventana actual
}
