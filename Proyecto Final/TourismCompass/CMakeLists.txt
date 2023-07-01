cmake_minimum_required(VERSION 3.5)

project(TourismCompass VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
        # login
        main.cpp
        loginsystem.h
        loginsystem.cpp
        loginsystem.ui
        elements.qrc
        qdb.h
        qdb.cpp
        # panel de control
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        global.h

        addpackage.h
        addpackage.cpp
        addpackage.ui
        registertourist.h
        registertourist.cpp
        registertourist.ui
        findtourist.h
        findtourist.cpp
        findtourist.ui
        findpackage.h
        findpackage.cpp
        findpackage.ui
        databaseheader.h
        resource.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(TourismCompass
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET TourismCompass APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(TourismCompass SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(TourismCompass
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(TourismCompass PRIVATE Qt${QT_VERSION_MAJOR}::Widgets  Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(TourismCompass PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS TourismCompass
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(TourismCompass)
endif()
