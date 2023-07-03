/**
 * @file mainwindow.h
 * @brief Declaración de la clase MainWindow.
 * @license
 * Creative Commons Legal Code CC0 1.0 Universal
 * Consulta la licencia para más detalles: https://creativecommons.org/publicdomain/zero/1.0/
 *
 * @author Alex Varela
 * @date 25 de junio de 2023
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addpackage.h"
#include "registertourist.h"
#include "findpackage.h"
#include "findtourist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @class MainWindow
 * @brief Representa la ventana principal de la aplicación.
*/

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
/**
 * @brief Constructor de la clase MainWindow.
 * @param parent El widget padre.
*/
    MainWindow(QWidget *parent = nullptr);
    /**
     * @brief Destructor de la clase MainWindow.
    */
    ~MainWindow();

/**
 * @brief
 * Declaración de los slots privados de la clase MainWindow.
 * Estos slots se activan cuando se hace clic en los botones correspondientes.
*/
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

/**
 * @brief
 * Método protegido que actúa como filtro de eventos para un objeto.
 * @param obj El objeto al que se le aplica el filtro de eventos.
 * @param event El evento que se está filtrando.
 * @return true si el evento ha sido filtrado y no debe propagarse, false en caso contrario.
*/
protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

/**
 * @brief
 * Declaración de los miembros privados de la clase MainWindow.
 * Estos miembros incluyen el objeto de interfaz de usuario, los punteros a los objetos AddPackage, RegisterTourist,
 * FindPackage y FindTourist, el objeto de base de datos y el método updateButtonVisibility para definir la
 * visibilidad de los botones para cliente y administrador.
*/
private:
    Ui::MainWindow *ui;  /**< The user interface object. */
    AddPackage *ptrAddPackge;  /**< Pointer to the AddPackage object. */
    RegisterTourist *ptrRegisterTourist;  /**< Pointer to the RegisterTourist object. */
    FindPackage *ptrFindPackage;     /**< Pointer to the FindPackage object. */
    FindTourist *ptrFindTourist;  /**< Pointer to the FindTourist object. */
    QSqlDatabase database; /**< The database object. */
    void updateButtonVisibility(); /**< metodo para definir la visibilidad de los botones para cliente y administrador*/
};
#endif // MAINWINDOW_H
