Proyecto Final
=============
*Sistema de gestión de paquetes turísticos*
-------------

### **Visión general del proyecto**
#### Tabla de Contenidos

- [Visión general de la propuesta](#visión-general-de-la-propuesta)
- [Explicación del proyecto](#explicación-del-proyecto)
- [Guía de acciones esperadas al crear el sistema](#guía-de-acciones-esperadas-al-crear-el-sistema)
- [Propuestas de las pantallas, funcionalidad y widgets para implementar las acciones esperadas](#propuestas-de-las-pantallas-funcionalidad-y-widgets-para-implementar-las-acciones-esperadas)
- [Diagrama de flujo de la interfaz gráfica](#diagrama-de-flujo-de-la-interfaz-gráfica)
- [Entregas del proyecto](#entregas-del-proyecto)
- [Uso](#uso)
- [Contacto](#contacto)

### Explicación del proyecto
<div style="text-align: justify">

Funcionalidades para el Administrador: el administrador tiene acceso a un conjunto de herramientas y funciones específicas que le
permiten gestionar eficientemente los paquetes turísticos y las reservas.
- 1. Gestion de registros, puede gestionar las cuentas de los clientes y los administradores, agregar, eliminar o modificar las cuentas
- 2. Gestion de información turística, puede agregar paquete, buscar paquete, agregar turista, gestionar turista y reserva, eliminar
- la información de un paquete.

Funcionalidades para el Cliente: el cliente, a través de su propia interfaz de usuario, puede acceder a una serie de características
diseñadas para facilitar la búsqueda, selección y reserva de paquetes turísticos.
- 1. Modificar información del perfil de la cuenta o eliminarla
- 2. Ir al panel de control: detalles del paquete turístico, reservar paquete, observar las reservas del cliente

</div>

Se agregan 9 Ventanas para el administrador y 8 ventanas para el cliente.

- Se hizo uso de rutas relativa para las bases de datos para hacerlo portable
- Se compone el programa de dos sistemas: sistema de logueo y sitema de información turística.
- Se agrego un makefile para la compilación del programa, creación de la página de documentación Doxygen y ejecución del programa.

### Entregas del proyecto

- [x] Propuesta
    - [x] Explicación de lo que se desea realizar, sección wiki (README.md) de su repositorio.
    - [x] Incluir propuestas de pantallas, funciones y widgets a implementar. 
- [x] Avance 1:
    - [ ] Incluir Makefile que realice compilación y despliegue de la aplicación.
    - [x] No es necesario la funcionalidad completa a este punto
- [x] Avance final:
    - [x] Entregable final con funcionalidad completa.

### Uso
El proyecto contiene los siguientes directorios:
1. Directorio TourismCompass: Contiene los archivos fuente de Qt Design (Qt6) y bases de datos
2. Directorio Instalador: Contiene un instalador asegurese indicarle la ruta de instalación
 a la carpeta donde se encuentre el directorio (TourismCompass).
3. Directorio Proyecto_TourismCompass: Es el proyecto construido desde Qt6, es el directorio (build)
4. Directorio Portable_TourismCompass: es el resultado de la instalación del programa ejecutado desde el Directorio Instalador. 
    recuerde este directorio funciona ligado al Directorio TourismCompass.
5. archivo Doxyfile: contiene la configuración para la generación de página de la documentanción Doxygen. 
6. archivo Enunciado Proyecto.pdf: contiene lo solicitado del proyecto 
7. archivo Makefile: se ejecuta desde  Windows, crea la documentación, compila el proyecto del Directorio Proyecto_TourismCompass 
    con windeployqt (herramienta de Qt6, debe tenerla instalada y agregada al Path), ejecuta el programa y abre la página de la documentación. 
8. Directorio Compilado: es la compilación tras la ejecución del make con "mingw32-make -s"  (compilador MinGW debe estar instalado).
9. Directorio docs: carpeta de la documentación Doxygen.
10.archivo README.md: Archivo de reporte de este proyecto.

### Contacto
***Autor:* Alex Varela Quirós
*correo:* alex.varela@ucr.ac.cr 
*tel:* +50685525005**

[![iconopeque.jpg](https://i.postimg.cc/hvtdRL0p/iconopeque.jpg)](https://postimg.cc/k6L4xtzb)

