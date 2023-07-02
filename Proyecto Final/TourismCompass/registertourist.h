/**
 * @file registertourist.h
 * @brief Archivo de encabezado de la clase RegisterTourist.
*/
#ifndef REGISTERTOURIST_H
#define REGISTERTOURIST_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class RegisterTourist;
}
/**
 * @brief La clase RegisterTourist proporciona la funcionalidad para registrar un turista en el sistema.
*/
class RegisterTourist : public QDialog
{
    Q_OBJECT

public:
    /**
    * @brief Constructor de la clase RegisterTourist.
    * @param parent Puntero al widget padre (opcional).
    */
    explicit RegisterTourist(QWidget *parent = nullptr);
    /**
    * @brief Destructor de la clase RegisterTourist.
    */
    ~RegisterTourist();

private slots:
    /**
    * @brief Método que se ejecuta cuando se hace clic en el botón "Save".
    */
    void on_btnSave_clicked();
    /**
    * @brief Método que se ejecuta cuando se hace clic en el botón "loadPackage".
    */
    void on_loadPakcage_clicked();
    /**
    * @brief Método que se ejecuta cuando se selecciona un índice en el combo box "cmbChoosePackage".
    * @param index Índice seleccionado.
    */
    void on_cmbChoosePackage_currentIndexChanged(int index);
    /**
     * @brief Método que se ejecuta cuando se hace clic en el botón "Reset".
    */
    void on_btnReset_clicked();

    void on_pushButton_clicked();

private:
    Ui::RegisterTourist *ui; /**< Puntero a la interfaz de usuario de RegisterTourist. */
    QSqlDatabase database; /**< Base de datos utilizada para almacenar la información de los turistas. */

    int getPackageNumber(const QString& packageName);
};

#endif // REGISTERTOURIST_H
