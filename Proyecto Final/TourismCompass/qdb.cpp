/**
 * @file qdb.cpp
 * @brief implementación de la clase QDB.
*/

#include "qdb.h"

/**
 * @brief Constructor por defecto de la clase QDB.
 */
QDB::QDB()
{

}

/**
 * @brief Destructor de la clase QDB.
 *        Desconecta de la base de datos antes de ser destruido.
 */
QDB::~QDB()
{
    Disconnect();
}

/**
 * @brief Conecta con la base de datos especificada.
 * @param dbname El nombre de la base de datos a la que se desea conectar.
 * @return Verdadero si la conexión fue exitosa, falso en caso contrario.
 */
bool QDB::Connect(const QString dbname)
{

    if (!this->db.isOpen())
    {
        this->db = QSqlDatabase::addDatabase("QSQLITE");
        this->db.setDatabaseName(dbname);

        if (!this->db.open())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

/**
 * @brief Desconecta de la base de datos actualmente conectada.
 * @return Verdadero si la desconexión fue exitosa, falso en caso contrario.
 */
bool QDB::Disconnect()
{
    if (this->db.isOpen())
    {
        this->db.close();
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Ejecuta una consulta SQL.
 * @param q La consulta SQL a ejecutar.
 * @return El objeto QSqlQuery que contiene los resultados de la consulta.
 */
QSqlQuery QDB::Query(QString q)
{
    QSqlQuery query(q);
    return query;
}
