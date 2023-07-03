/**
 * @file
 * Este archivo contiene la declaración de variables globales para globalEmail y globalInteger.
 * Estas variables son de tipo QString y se utilizan en múltiples partes del código.
 * La directiva #ifndef se utiliza para evitar la inclusión duplicada de este archivo en otros archivos.
 * La directiva #define se utiliza para definir GLOBAL_H, que sirve como identificador único para este archivo.
 * La directiva #endif se utiliza para marcar el final del bloque condicional y evitar errores de compilación.
*/
#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>

extern QString globalEmail;
extern QString globalInteger;
#endif // GLOBAL_H

