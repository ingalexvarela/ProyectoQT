/**
 * @file loginsystem.h
 * @brief Declaración de la clase LoginSystem.
 * @license
 * Creative Commons Legal Code CC0 1.0 Universal
 * Consulta la licencia para más detalles: https://creativecommons.org/publicdomain/zero/1.0/
 *
 * @author Alex Varela
 * @date 25 de junio de 2023
*/

#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

/**
 * @brief Incluye los archivos de encabezado necesarios para utilizar la clase MainWindow, QMainWindow, QCoreApplication y QSqlTableModel.
*/
#include "mainwindow.h"
#include <QMainWindow>
#include <QCoreApplication>
#include <QSqlTableModel>

namespace Ui {
class LoginSystem;
}

/**
 * @brief La clase LoginSystem representa el sistema de inicio de sesión.
 */
class LoginSystem : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructor de la clase LoginSystem.
     * @param parent El widget padre (opcional).
     */
    explicit LoginSystem(QWidget *parent = 0);

    /**
     * @brief Destructor de la clase LoginSystem.
     */
    ~LoginSystem();

    /**
     * @brief Intenta realizar el inicio de sesión con las credenciales proporcionadas.
     * @param u El nombre de usuario.
     * @param p La contraseña.
     * @return Verdadero si el inicio de sesión fue exitoso, falso en caso contrario.
     */
    bool Login(QString u, QString p, QString e);

    bool loggedIn; /**< Indica si el usuario ha iniciado sesión. */
    QString picName; /**< El nombre de la imagen asociada al usuario. */
    QString picDir = QCoreApplication::applicationDirPath() + "/../users/"; /**< La ruta del directorio de imágenes de usuario. */
    QSqlTableModel* tblMdl; /**< El modelo de tabla para la base de datos. */

 /**
 * @brief Definición de los slots que se encargan de manejar los eventos de los botones y otros elementos de la interfaz de usuario (UI).
 *
 * Estos slots son responsables de gestionar las acciones que se ejecutan cuando se produce un evento de clic o cambio en los elementos de la UI.
 * Cada slot está asociado a un evento específico y ejecuta la lógica correspondiente para manejar ese evento en particular.
 * Los slots se encargan de realizar acciones como iniciar o cerrar sesión, completar un registro, editar o eliminar información, cambiar entre páginas, etc.
 * Al recibir el evento, el slot correspondiente realiza las operaciones necesarias para responder a la acción del usuario.
 */
private slots:
    // Slots para los eventos de los botones y otros elementos del UI
    void on_loginButton_clicked();

    void on_logoutButton_clicked();

    void on_completeRegButton_clicked();

    void on_backButton_clicked();

    void on_regButton_clicked();

    void on_backButton_2_clicked();

    void on_editButton_clicked();

    void on_delButton_clicked();

    void on_editedButton_clicked();

    void on_winStack_currentChanged(int arg1);

    void on_adminButton_clicked();

    void on_pageButton_clicked();

    void on_editedButton_2_clicked();

    void on_backButton_5_clicked();

    void on_userBrowse_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_adminBrowse_clicked();

    void on_delAButton_clicked();

    void on_adminButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_adminButton_3_clicked();

    void on_delAButton_2_clicked();

/**
 * @brief Variables privadas de la clase LoginSystem.
 * Esta sección contiene las variables privadas utilizadas en la clase LoginSystem.
 * Estas variables incluyen el objeto de interfaz de usuario (ui), el nombre de usuario (username),
 * la contraseña (password), el correo electrónico (email) y un puntero al objeto MainWindow (ptrMainWindow).
*/
private:
    Ui::LoginSystem *ui; /**<interfaz de usuario. */
    QString username; /**< El nombre de usuario. */
    QString password; /**< La contraseña. */
    QString email; /**< email */
    MainWindow *ptrMainWindow; /**< Puntero al objeto MainWindow. */
};

#endif // LOGINSYSTEM_H
