/**
 * @mainpage **Proyecto - Sistema de gestión de paquetes turísticos**
 *
 * El Sistema de Gestión de Paquetes Turísticos es una solución diseñada para facilitar y optimizar la gestión de paquetes turísticos
 * tanto para el administrador como para los clientes. El sistema ofrece una interfaz de usuario intuitiva y atractiva, desarrollada
 * utilizando el software Qt Design y el lenguaje de programación C++. Se espera proporcione una experiencia fluida y agradable al
 * interactuar con las diferentes funcionalidades. Es importante reconocer que existen funcionalidades únicas para el Administrador y
 * para el Cliente.
 *
 * Funcionalidades para el Administrador: el administrador tiene acceso a un conjunto de herramientas y funciones específicas que le
 *  permiten gestionar eficientemente los paquetes turísticos y las reservas.
 *  1. Gestion de registros, puede gestionar las cuentas de los clientes y los administradores, agregar, eliminar o modificar las cuentas
 *  2. Gestion de información turística, puede agregar paquete, buscar paquete, agregar turista, gestionar turista y reserva, eliminar
 *  la información de un paquete.
 *
 * Funcionalidades para el Cliente: el cliente, a través de su propia interfaz de usuario, puede acceder a una serie de características
 * diseñadas para facilitar la búsqueda, selección y reserva de paquetes turísticos.
 * 1. Modificar información del perfil de la cuenta o eliminarla
 * 2. Ir al panel de control: detalles del paquete turístico, reservar paquete, observar las reservas del cliente
 *
 * Además el programa es modular lo que permite reutilizar ventanas ocultando botones según el usuario logueado como cliente o
 * administrador; además las clases desarrolladas son usadas para el cliente y para el usuario que accede a los mismos metodos
 * pero con un uso diferente si se ingreso como usuario o como cliente, tambien el programa es escalable porque trabaja con dos
 * bases de datos sqlite3, "Datos_turisticos" y "db", con consultas hacia ellas en toda la funcionalidad del tratamiento de la
 * información turística, mismas consultas que en paginas web en linea son trabajadas hacia servidores web que contienen bases
 * de datos sqlite3, lo que en un paso final se puede escalar el programa al uso del internet. Además se puede crear mayor
 * funcionalidad modificando modulos del programa sin afectar el flujo general, lo que permite el mantenimiento y actualización
 * fácil del programa.
 *
 * ### ¡Bienvenido al Proyecto - Sistema de gestión de paquetes turísticos!
 *
 * ### Creado por: Alex Varela el 03/07/2023
 */

/**
 * @file main.cpp
 * @brief Archivo principal del programa.
 * Este archivo contiene la función principal main() que es el punto de entrada del programa.
 * Crea una instancia de la aplicación QApplication y muestra la ventana LoginSystem.
 * Después, ejecuta el ciclo de eventos de la aplicación.
 */
#include "loginsystem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginSystem w;
    w.show();
    return a.exec();
}
