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
 * @brief Represents the main window of the application.
*/

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
/**
* @brief Constructs a MainWindow object.
* @param parent The parent widget.
*/
    MainWindow(QWidget *parent = nullptr);
    /**
    * @brief Destroys the MainWindow object.
    */
    ~MainWindow();

private slots:
/**
* @brief Slot for the click event of pushButton.
*/
    void on_pushButton_clicked();
 /**
 * @brief Slot for the click event of pushButton_2.
 */
    void on_pushButton_2_clicked();
 /**
 * @brief Slot for the click event of pushButton_3.
 */
    void on_pushButton_3_clicked();
 /**
 * @brief Slot for the click event of pushButton_4.
 */
    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;  /**< The user interface object. */
    AddPackage *ptrAddPackge;  /**< Pointer to the AddPackage object. */
    RegisterTourist *ptrRegisterTourist;  /**< Pointer to the RegisterTourist object. */
    FindPackage *ptrFindPackage;     /**< Pointer to the FindPackage object. */
    FindTourist *ptrFindTourist;  /**< Pointer to the FindTourist object. */

    QSqlDatabase database; /**< The database object. */
    QString currentPath;   /**< The current path of the application. */

};
#endif // MAINWINDOW_H
