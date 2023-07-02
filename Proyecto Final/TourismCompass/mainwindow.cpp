/**
 * @file mainwindow.cpp
 * @brief implementación de la clase MainWindow.
*/

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include "global.h"
#include <QTimer>
#include <QMessageBox>

/**
 * @brief Constructor de la clase MainWindow.
 * @param parent El widget padre.
*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddPackge = new AddPackage();
    ptrRegisterTourist = new RegisterTourist();
    ptrFindPackage = new FindPackage();
    ptrFindTourist = new FindTourist();

    database = QSqlDatabase::addDatabase("QSQLITE", "DB1");
    database.setDatabaseName(QCoreApplication::applicationDirPath()+"/../TourismCompass/Datos_turisticos.db");
    qDebug() << "Directorio de la aplicación:" << QCoreApplication::applicationDirPath();

    if(!database.open()){
        qDebug() << "Error: Unable to open database..";
    }
    else{
        qDebug() << "Database open successfully..";
    }
    // Instalar el filtro de eventos en la ventana principal
    this->installEventFilter(this);
}
/**
* @brief Destructor de la clase MainWindow.
*/
MainWindow::~MainWindow()
{
    delete ui;
    delete ptrAddPackge;
    delete ptrRegisterTourist;
    delete ptrFindTourist;
    delete ptrFindPackage;
    database.close();
    QSqlDatabase::removeDatabase(database.connectionName());
    qDebug() << " ~MainWindow()";
}

void MainWindow::updateButtonVisibility()
{   // si es cliente, no ver la gestion entera
    if (globalInteger == "1") {
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setVisible(false);
        ui->pushButton_9->setVisible(false);

        ui->label->setVisible(false);
        ui->txtPackageName->setVisible(false);

        ui->pushButton_5->setVisible(true);
        ui->pushButton_6->setVisible(true);
        ui->pushButton_8->setVisible(true);
    } else { // si es administrador, no ver la gestion individual
        ui->pushButton_5->setVisible(false);
        ui->pushButton_6->setVisible(false);
        ui->pushButton_8->setVisible(false);
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->pushButton_9->setVisible(true);
        ui->label->setVisible(true);
        ui->txtPackageName->setVisible(true);
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == this && event->type() == QEvent::Show) {
        updateButtonVisibility();
    }
    return QMainWindow::eventFilter(obj, event);
}

/**
* @brief Slot para el evento de clic del botón pushButton
*/
void MainWindow::on_pushButton_clicked()
{
    ptrAddPackge->show(); /**< Viajar a agregar paquete */
}

/**
* @brief Slot para el evento de clic del botón pushButton_2.
*/
void MainWindow::on_pushButton_2_clicked()
{
    ptrRegisterTourist->show(); /**< Viajar a registrar turista */
}

/**
* @brief Slot para el evento de clic del botón pushButton_3.
*/
void MainWindow::on_pushButton_3_clicked()
{
    ptrFindPackage->show(); /**< Viajar a encontrar paquete */
}
/**
* @brief Slot para el evento de clic del botón pushButton_4.
*/
void MainWindow::on_pushButton_4_clicked()
{
    ptrFindTourist->show();   /**< Viajar a encontrar turista*/
}


void MainWindow::on_pushButton_6_clicked()
{
    ptrRegisterTourist->show(); /**< Viajar a registrar turista */
}


void MainWindow::on_pushButton_7_clicked()
{
    close(); // Cerrar la ventana actual
}

void MainWindow::on_pushButton_9_clicked()
{
    QString packageName = ui->txtPackageName->text();

    // Mostrar cuadro de diálogo de confirmación
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Question, "", "¿Está seguro de que desea borrar el paquete: " + packageName + "?",
                                        QMessageBox::Yes | QMessageBox::No).exec()) {

        QSqlQuery query(database);  // Crear una consulta SQL en la base de datos "DB1"

        // Preparar la consulta DELETE para eliminar las filas que coincidan con el nombre del paquete en la tabla "Package"
        query.prepare("DELETE FROM Package WHERE packageName = :packageName");

        // Enlazar el valor del nombre del paquete a la consulta
        query.bindValue(":packageName", packageName);

        // Ejecutar la consulta
        if (query.exec()) {
            // Si la consulta se ejecuta correctamente, mostrar un mensaje de éxito en la etiqueta label
            ui->label->setText("Paquete eliminado con éxito.");

                // Crear un temporizador para limpiar la etiqueta después de 5 segundos
                QTimer::singleShot(5000, this, [this]() {
                    ui->label->clear();  // Limpiar la etiqueta label
                });

            // Limpiar el campo de texto txtPackageName
            ui->txtPackageName->clear();

            // Eliminar las filas en la tabla "Tourist" que coincidan con el nombre del paquete en la columna "PackageName"
            QSqlQuery deleteQuery(database);
            deleteQuery.prepare("DELETE FROM Tourist WHERE PackageName = :packageName");
            deleteQuery.bindValue(":packageName", packageName);
            deleteQuery.exec();
        } else {
            // Si hay un error en la ejecución de la consulta, mostrar un mensaje de error en la consola
            qDebug() << "Error al eliminar la fila:" << query.lastError().text();
        }
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    ptrFindPackage->show(); /**< Viajar a encontrar paquete */
}


void MainWindow::on_pushButton_8_clicked()
{
    ptrFindTourist->show();   /**< Viajar a encontrar turista*/
}

