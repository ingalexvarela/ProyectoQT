/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *txtPackageName;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image:url(:/images/background_image.jpg) ;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 120, 161, 65));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(80, 290, 151, 65));
        pushButton_2->setFont(font);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_2->setIconSize(QSize(16, 16));
        pushButton_2->setAutoRepeat(false);
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(80, 200, 141, 65));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::StrongFocus);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 370, 241, 65));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_4->setCheckable(false);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(310, 170, 151, 141));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image:url(:/images/logo.jpg) ;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(510, 110, 241, 65));
        pushButton_5->setFont(font);
        pushButton_5->setFocusPolicy(Qt::StrongFocus);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(510, 200, 231, 65));
        pushButton_6->setFont(font);
        pushButton_6->setFocusPolicy(Qt::StrongFocus);
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(750, 500, 141, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background: #FFA500;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(510, 300, 241, 65));
        pushButton_8->setFont(font);
        pushButton_8->setFocusPolicy(Qt::StrongFocus);
        pushButton_8->setAutoFillBackground(false);
        pushButton_8->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(560, 500, 151, 31));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_9->setCheckable(false);
        txtPackageName = new QLineEdit(centralwidget);
        txtPackageName->setObjectName("txtPackageName");
        txtPackageName->setGeometry(QRect(340, 500, 201, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 475, 201, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 10, 391, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setPointSize(36);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background:  transparent;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Panel de Control", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Agregar Paquetes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Agregar Turistas", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Buscar Paquete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Buscar Turistas y  reservaci\303\263n", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Detalles del Paquete Tur\303\255stico", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Reservar Paquete", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Volver", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Mis Reservas", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Eliminar Paquete", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_9->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Panel de Control", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
