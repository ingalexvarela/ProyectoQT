/**
 * @file mainwindow.cpp
 * @brief implementación de la clase MainWindow.
*/

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

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

