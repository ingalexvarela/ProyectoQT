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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
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
    QLineEdit *lineEdit;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(768, 467);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image:url(:/images/background_image.jpg) ;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 150, 181, 65));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(80, 250, 191, 65));
        pushButton_2->setFont(font);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_2->setIconSize(QSize(16, 16));
        pushButton_2->setAutoRepeat(false);
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(490, 120, 171, 65));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::StrongFocus);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(80, 340, 191, 65));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_4->setCheckable(false);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 20, 321, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Script MT Bold")});
        font1.setPointSize(36);
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("color: #000080;\n"
"\n"
"background-color: transparent;\n"
"\n"
"border: none;\n"
""));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(310, 170, 151, 141));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image:url(:/images/logo.jpg) ;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(490, 230, 241, 65));
        pushButton_5->setFont(font);
        pushButton_5->setFocusPolicy(Qt::StrongFocus);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: #000000;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(490, 330, 211, 65));
        pushButton_6->setFont(font);
        pushButton_6->setFocusPolicy(Qt::StrongFocus);
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("color: #000000;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 768, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MyTouristManager 1.0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Gesti\303\263n de Paquetes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Gesti\303\263n de Reservas", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Buscar Paquete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Buscar Turista", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Panel de Control", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Detalles del Paquete Tur\303\255stico", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Reservar Paquete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
