/********************************************************************************
** Form generated from reading UI file 'findtourist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURIST_H
#define UI_FINDTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QLabel *label;
    QLineEdit *txtTourstfName;
    QPushButton *btnFind;
    QTableView *tableView;
    QTextEdit *textEdit;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName("FindTourist");
        FindTourist->resize(700, 500);
        FindTourist->setStyleSheet(QString::fromUtf8("background-image:url(:/images/d.jpg) ;"));
        label = new QLabel(FindTourist);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 181, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        txtTourstfName = new QLineEdit(FindTourist);
        txtTourstfName->setObjectName("txtTourstfName");
        txtTourstfName->setGeometry(QRect(10, 70, 271, 20));
        btnFind = new QPushButton(FindTourist);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(300, 70, 81, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        btnFind->setFont(font1);
        tableView = new QTableView(FindTourist);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 110, 671, 231));
        tableView->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));
        textEdit = new QTextEdit(FindTourist);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(240, 10, 241, 41));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("color: #8A2BE2;\n"
"background-color: transparent;\n"
"\n"
"border: none;\n"
""));
        QWidget::setTabOrder(txtTourstfName, btnFind);

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "Find Tourist", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Nombre del Turista", nullptr));
        btnFind->setText(QCoreApplication::translate("FindTourist", "Buscar", nullptr));
        textEdit->setHtml(QCoreApplication::translate("FindTourist", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; font-style:italic; color:#888a14;\">Gesti\303\263n de Reservas</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H
