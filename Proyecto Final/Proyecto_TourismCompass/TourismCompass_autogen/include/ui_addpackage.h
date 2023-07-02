/********************************************************************************
** Form generated from reading UI file 'addpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGE_H
#define UI_ADDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackage
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QLineEdit *txtAmount_3;
    QLabel *label_4;
    QLineEdit *txtAmount_2;
    QLabel *label_3;
    QLineEdit *txtAmount;
    QLabel *label_5;
    QLineEdit *txtAmount_4;
    QLabel *label_6;
    QPushButton *btnSave;
    QPushButton *btnReset;
    QTextEdit *textEdit;
    QPushButton *btnSave_2;

    void setupUi(QDialog *AddPackage)
    {
        if (AddPackage->objectName().isEmpty())
            AddPackage->setObjectName("AddPackage");
        AddPackage->setWindowModality(Qt::WindowModal);
        AddPackage->resize(700, 500);
        AddPackage->setStyleSheet(QString::fromUtf8("background-image:url(:/images/c.jpg) ;"));
        formLayoutWidget = new QWidget(AddPackage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 60, 621, 381));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT Bold")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName("txtPackageName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        txtAmount_3 = new QLineEdit(formLayoutWidget);
        txtAmount_3->setObjectName("txtAmount_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtAmount_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"\n"
""));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtAmount_2 = new QLineEdit(formLayoutWidget);
        txtAmount_2->setObjectName("txtAmount_2");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtAmount_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"\n"
""));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        txtAmount = new QLineEdit(formLayoutWidget);
        txtAmount->setObjectName("txtAmount");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtAmount);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        txtAmount_4 = new QLineEdit(formLayoutWidget);
        txtAmount_4->setObjectName("txtAmount_4");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtAmount_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"\n"
""));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        btnSave = new QPushButton(AddPackage);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(470, 450, 81, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(11);
        btnSave->setFont(font2);
        btnSave->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background: #00FF00;\n"
""));
        btnReset = new QPushButton(AddPackage);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(340, 450, 80, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font3.setPointSize(14);
        btnReset->setFont(font3);
        btnReset->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background: #87CEEB;\n"
""));
        textEdit = new QTextEdit(AddPackage);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(160, 10, 351, 41));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("color: #8A2BE2;\n"
"background-color: transparent;\n"
"\n"
"border: none;\n"
""));
        btnSave_2 = new QPushButton(AddPackage);
        btnSave_2->setObjectName("btnSave_2");
        btnSave_2->setGeometry(QRect(590, 450, 81, 21));
        btnSave_2->setFont(font2);
        btnSave_2->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background: #FFA500;"));

        retranslateUi(AddPackage);

        QMetaObject::connectSlotsByName(AddPackage);
    } // setupUi

    void retranslateUi(QDialog *AddPackage)
    {
        AddPackage->setWindowTitle(QCoreApplication::translate("AddPackage", "Add Package", nullptr));
        label->setText(QCoreApplication::translate("AddPackage", "Nombre del Paquete", nullptr));
        label_2->setText(QCoreApplication::translate("AddPackage", "Descripci\303\263n", nullptr));
        label_4->setText(QCoreApplication::translate("AddPackage", "Fecha de fin", nullptr));
        label_3->setText(QCoreApplication::translate("AddPackage", "Precio", nullptr));
        label_5->setText(QCoreApplication::translate("AddPackage", "Fecha de inicio", nullptr));
        label_6->setText(QCoreApplication::translate("AddPackage", "Cantidad", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPackage", "Agregar", nullptr));
        btnReset->setText(QCoreApplication::translate("AddPackage", "Limpiar", nullptr));
        textEdit->setHtml(QCoreApplication::translate("AddPackage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Gesti\303\263n de Paquetes Tur\303\255sticos</span></p></body></html>", nullptr));
        btnSave_2->setText(QCoreApplication::translate("AddPackage", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackage: public Ui_AddPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGE_H
