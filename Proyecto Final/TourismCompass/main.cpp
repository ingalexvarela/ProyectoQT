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
