/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLineEdit *txtMiddleName;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtPassportNo;
    QLabel *label_5;
    QLineEdit *txtContactNo;
    QLabel *label_6;
    QLineEdit *txtPermanentAddress;
    QTextEdit *txtPackageDescription;
    QLabel *label_8;
    QComboBox *cmbChoosePackage;
    QLabel *label_7;
    QPushButton *loadPakcage;
    QPushButton *btnSave;
    QPushButton *btnReset;
    QTextEdit *textEdit;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName("RegisterTourist");
        RegisterTourist->resize(700, 413);
        RegisterTourist->setStyleSheet(QString::fromUtf8("background-image:url(:/images/d.jpg) ;"));
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 40, 601, 327));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");
        txtFirstName->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtMiddleName = new QLineEdit(formLayoutWidget);
        txtMiddleName->setObjectName("txtMiddleName");
        txtMiddleName->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtMiddleName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");
        txtLastName->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtPassportNo = new QLineEdit(formLayoutWidget);
        txtPassportNo->setObjectName("txtPassportNo");
        txtPassportNo->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPassportNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txtContactNo = new QLineEdit(formLayoutWidget);
        txtContactNo->setObjectName("txtContactNo");
        txtContactNo->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtContactNo);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        txtPermanentAddress = new QLineEdit(formLayoutWidget);
        txtPermanentAddress->setObjectName("txtPermanentAddress");
        txtPermanentAddress->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txtPermanentAddress);

        txtPackageDescription = new QTextEdit(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");
        txtPackageDescription->setEnabled(false);
        txtPackageDescription->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));

        formLayout->setWidget(11, QFormLayout::FieldRole, txtPackageDescription);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
""));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_8);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");
        cmbChoosePackage->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(6, QFormLayout::FieldRole, cmbChoosePackage);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        loadPakcage = new QPushButton(formLayoutWidget);
        loadPakcage->setObjectName("loadPakcage");
        loadPakcage->setMaximumSize(QSize(100, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tw Cen MT Condensed Extra Bold")});
        font1.setPointSize(12);
        loadPakcage->setFont(font1);
        loadPakcage->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"background-color: #000000;\n"
"background-color: #0000FF;\n"
"\n"
"\n"
"\n"
""));

        formLayout->setWidget(8, QFormLayout::FieldRole, loadPakcage);

        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(380, 380, 80, 25));
        btnSave->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
""));
        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(270, 380, 80, 25));
        btnReset->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"\n"
""));
        textEdit = new QTextEdit(RegisterTourist);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(230, 0, 251, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        textEdit->setFont(font2);
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("color: #8A2BE2;\n"
"background-color: transparent;\n"
"\n"
"border: none;\n"
""));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "Register Tourist", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "Primer Nombre", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterTourist", "Segundo nombre", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTourist", "Apellido", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Pasaporte ID", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTourist", "Contacto", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTourist", "Direcci\303\263n Permanente", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterTourist", "Este paquete contiene:", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterTourist", "Elija el paquete", nullptr));
        loadPakcage->setText(QCoreApplication::translate("RegisterTourist", "Cargar Paquete", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Agregar", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Limpiar", nullptr));
        textEdit->setHtml(QCoreApplication::translate("RegisterTourist", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:700; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-style:normal; color:#ffffff;\">Gesti\303\263n de Reservas</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
