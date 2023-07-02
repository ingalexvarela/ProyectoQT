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

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QLabel *label;
    QLineEdit *txtTourstfName;
    QPushButton *btnFind;
    QTableView *tableView;
    QPushButton *pushButton;
    QLabel *label_11;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName("FindTourist");
        FindTourist->resize(1000, 500);
        FindTourist->setStyleSheet(QString::fromUtf8("background-image:url(:/images/d.jpg) ;"));
        label = new QLabel(FindTourist);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 45, 181, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background: #000000;\n"
"color:  #FFA500;"));
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
        btnFind->setStyleSheet(QString::fromUtf8("background: #000000;\n"
"color:  #FFA500;"));
        tableView = new QTableView(FindTourist);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 110, 981, 291));
        tableView->setStyleSheet(QString::fromUtf8("background-image:url(:/images/b.jpg) ;"));
        pushButton = new QPushButton(FindTourist);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(830, 410, 121, 71));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background: #FFA500;"));
        label_11 = new QLabel(FindTourist);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(260, 10, 291, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift")});
        font3.setPointSize(20);
        font3.setBold(true);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color:  #00FF00;\n"
"background:  transparent;"));
        QWidget::setTabOrder(txtTourstfName, btnFind);

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "Find Tourist", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Nombre del Turista", nullptr));
        btnFind->setText(QCoreApplication::translate("FindTourist", "Buscar", nullptr));
        pushButton->setText(QCoreApplication::translate("FindTourist", "Volver", nullptr));
        label_11->setText(QCoreApplication::translate("FindTourist", "Gesti\303\263n de Reservas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H
