/********************************************************************************
** Form generated from reading UI file 'findpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPACKAGE_H
#define UI_FINDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindPackage
{
public:
    QLabel *label;
    QLineEdit *txtPackageName;
    QPushButton *btnFindPackage;
    QTableView *tableView;
    QLineEdit *lineEdit;

    void setupUi(QDialog *FindPackage)
    {
        if (FindPackage->objectName().isEmpty())
            FindPackage->setObjectName("FindPackage");
        FindPackage->resize(700, 540);
        FindPackage->setStyleSheet(QString::fromUtf8("background-image:url(:/images/background_image.jpg) ;\n"
"\n"
""));
        label = new QLabel(FindPackage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 141, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT Bold")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: #000000;\n"
""));
        txtPackageName = new QLineEdit(FindPackage);
        txtPackageName->setObjectName("txtPackageName");
        txtPackageName->setGeometry(QRect(150, 40, 281, 20));
        btnFindPackage = new QPushButton(FindPackage);
        btnFindPackage->setObjectName("btnFindPackage");
        btnFindPackage->setGeometry(QRect(470, 40, 80, 18));
        btnFindPackage->setStyleSheet(QString::fromUtf8("color: #000000;\n"
""));
        tableView = new QTableView(FindPackage);
        tableView->setObjectName("tableView");
        tableView->setEnabled(false);
        tableView->setGeometry(QRect(30, 80, 441, 361));
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));
        lineEdit = new QLineEdit(FindPackage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 0, 321, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(14);
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("color: #8A2BE2;\n"
"background-color: transparent;\n"
"\n"
"border: none;\n"
""));
        label->raise();
        txtPackageName->raise();
        btnFindPackage->raise();
        lineEdit->raise();
        tableView->raise();

        retranslateUi(FindPackage);

        QMetaObject::connectSlotsByName(FindPackage);
    } // setupUi

    void retranslateUi(QDialog *FindPackage)
    {
        FindPackage->setWindowTitle(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
        label->setText(QCoreApplication::translate("FindPackage", "Nombre del Paquete", nullptr));
        btnFindPackage->setText(QCoreApplication::translate("FindPackage", "Buscar", nullptr));
        lineEdit->setText(QCoreApplication::translate("FindPackage", "B\303\272squeda de Paquetes  Tur\303\255sticos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPackage: public Ui_FindPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPACKAGE_H
