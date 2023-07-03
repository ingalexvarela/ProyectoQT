/**
 * @file findtourist.h
 * @brief Archivo de encabezado de la clase FindTourist.
*/
#ifndef FINDTOURIST_H
#define FINDTOURIST_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class FindTourist;
}

/**
 * @class FindTourist
 * @brief Clase que representa una ventana de búsqueda de turistas.
 * Esta clase hereda de QDialog y proporciona una interfaz de usuario para buscar turistas en la base de datos.
*/
class FindTourist : public QDialog
{
    Q_OBJECT

public:
    /**
    * @brief Constructor de FindTourist.
    * @param parent Puntero al objeto QWidget padre.
    */
    explicit FindTourist(QWidget *parent = nullptr);
    /**
    * @brief Destructor de FindTourist.
    */
    ~FindTourist();

protected:
    /**
    * @brief Método que se ejecuta cuando la ventana se muestra.
    * Realiza la verificación de la condición y oculta los objetos según sea necesario.
    */
    void showEvent(QShowEvent *event) override;

private slots:
    /**
    * @brief Slot para el evento de clic del botón de búsqueda.
    */
    void on_btnFind_clicked();
    /**
    * @brief Slot para el evento de clic del pushButton de "volver".
    */
    void on_pushButton_clicked();


private:
    Ui::FindTourist *ui;  /**< El objeto de interfaz de usuario. */
    QSqlQueryModel *model; /**< El modelo para los resultados de la búsqueda. */

};

#endif // FINDTOURIST_H
