/**
 * @file findpackage.h
 * @brief Definición de la clase FindPackage.
*/
#ifndef FINDPACKAGE_H
#define FINDPACKAGE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class FindPackage;
}
/**
 * @class FindPackage
 * @brief Representa la ventana de búsqueda de paquetes.
*/

class FindPackage : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Constructor de la clase FindPackage.
     * @param parent El widget padre.
    */
    explicit FindPackage(QWidget *parent = nullptr);
    /**
    * @brief Destructor de la clase FindPackage.
    */
    ~FindPackage();

private slots:
    /**
    * @brief Slot para el evento de clic del botón btnFindPackage.
    */
    void on_btnFindPackage_clicked();

private:
    Ui::FindPackage *ui; /**< El objeto de interfaz de usuario. */
    QSqlQueryModel *model;   /**< El modelo de consulta de la base de datos. */
};

#endif // FINDPACKAGE_H
