/**
 * @file qdb.h
 * @brief Declaración de la clase QDB.
 * @license
 * Creative Commons Legal Code CC0 1.0 Universal
 * Consulta la licencia para más detalles: https://creativecommons.org/publicdomain/zero/1.0/
 *
 * @author Alex Varela
 * @date 28 de junio de 2023
*/

#ifndef QDB_H
#define QDB_H

#include <QSqlDatabase>
#include <QSqlQuery>

/**
 * @brief La clase QDB proporciona una interfaz para bases de datos.
 */
class QDB
{
public:
    /**
     * @brief Constructor por defecto para QDB.
     */
    QDB();

    /**
     * @brief Destructor para QDB.
     */
    ~QDB();

    /**
     * @brief Conecta con la base de datos especificada.
     * @param dbname El nombre de la base de datos a la que se desea conectar.
     * @return Verdadero si la conexión fue exitosa, falso en caso contrario.
     */
    bool Connect(const QString dbname);

    /**
     * @brief Desconecta de la base de datos actualmente conectada.
     * @return Verdadero si la desconexión fue exitosa, falso en caso contrario.
     */
    bool Disconnect();

    /**
     * @brief Ejecuta una consulta SQL.
     * @param q La consulta SQL a ejecutar.
     * @return El objeto QSqlQuery que contiene los resultados de la consulta.
     */
    QSqlQuery Query(QString q);

    /**
     * @brief La base de datos conectada.
     */
    QSqlDatabase db;

    /**
     * @brief El estado actual de la conexión a la base de datos.
     */
    bool dbstate;

private:
};

/**
 * @brief El espacio de nombres QDBLite proporciona una versión ligera de QDB.
 */
namespace QDBLite {
/**
     * @brief La clase DB proporciona una versión ligera de QDB.
     */
class DB : public QDB {};
}

#endif // QDB_H
