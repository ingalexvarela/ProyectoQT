/**
@file addpackage.h
@brief Definición de la clase AddPackage.
*/
#ifndef ADDPACKAGE_H
#define ADDPACKAGE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class AddPackage;
}

/**
* @class AddPackage
* @brief Representa la ventana de agregado de paquetes.
*/
class AddPackage : public QDialog
{
    Q_OBJECT

public:
public:
    /**
    * @brief Constructor de la clase AddPackage.
    * @param parent El widget padre.
    */
    explicit AddPackage(QWidget *parent = nullptr);
    /**
    * @brief Destructor de la clase AddPackage.
    */
    ~AddPackage();

private slots:
    /**
    * @brief Slot para el evento de clic del botón btnSave.
    */
    void on_btnSave_clicked();
    /**
    * @brief Slot para el evento de clic del botón btnReset.
    */
    void on_btnReset_clicked();

private:
    Ui::AddPackage *ui;  /**< El objeto de interfaz de usuario. */
    QSqlDatabase database; /**< El objeto de la base de datos. */
};

#endif // ADDPACKAGE_H
