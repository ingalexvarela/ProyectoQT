/********************************************************************************
** Form generated from reading UI file 'loginsystem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSYSTEM_H
#define UI_LOGINSYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginSystem
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QStackedWidget *winStack;
    QWidget *Login;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *regButton;
    QLabel *loginLabel;
    QLabel *label_7;
    QLineEdit *passwordBox_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QFrame *frame_3;
    QLabel *label_2;
    QLineEdit *uBox;
    QLineEdit *pBox;
    QPushButton *completeRegButton;
    QLineEdit *eBox;
    QLineEdit *fBox;
    QLineEdit *mBox;
    QLineEdit *lBox;
    QPushButton *backButton;
    QLabel *regLabel;
    QLabel *rpLabel;
    QTextEdit *textEdit;
    QWidget *page;
    QFrame *frame_4;
    QLabel *loggedUserHeader;
    QPushButton *logoutButton;
    QLabel *label_3;
    QLabel *nameLabel;
    QPushButton *editButton;
    QPushButton *delButton;
    QLabel *label_6;
    QLabel *emailLabel;
    QFrame *frame_6;
    QLabel *loggedPic;
    QPushButton *adminButton;
    QPushButton *adminButton_2;
    QPushButton *adminButton_3;
    QWidget *page_3;
    QFrame *frame_5;
    QLabel *label_5;
    QLineEdit *uBox_2;
    QLineEdit *pBox_2;
    QPushButton *editedButton;
    QLineEdit *eBox_2;
    QLineEdit *fBox_2;
    QLineEdit *mBox_2;
    QLineEdit *lBox_2;
    QPushButton *backButton_2;
    QLabel *regLabel_2;
    QLabel *rpLabel_2;
    QWidget *page_4;
    QFrame *frame_7;
    QLabel *label_8;
    QPushButton *editedButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QFrame *frame_8;
    QTableView *tableView;
    QWidget *page_6;
    QFrame *frame_9;
    QTableView *tableView_2;
    QPushButton *backButton_5;
    QPushButton *pageButton;
    QPushButton *delAButton;
    QLabel *adminLabel;
    QLabel *headLabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *userBrowse;
    QPushButton *adminBrowse;

    void setupUi(QMainWindow *LoginSystem)
    {
        if (LoginSystem->objectName().isEmpty())
            LoginSystem->setObjectName("LoginSystem");
        LoginSystem->resize(894, 550);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        LoginSystem->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoginSystem->setWindowIcon(icon);
        centralWidget = new QWidget(LoginSystem);
        centralWidget->setObjectName("centralWidget");
        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 901, 550));
        frame->setMinimumSize(QSize(750, 450));
        frame->setBaseSize(QSize(750, 450));
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        winStack = new QStackedWidget(frame);
        winStack->setObjectName("winStack");
        winStack->setGeometry(QRect(0, 0, 920, 550));
        Login = new QWidget();
        Login->setObjectName("Login");
        frame_2 = new QFrame(Login);
        frame_2->setObjectName("frame_2");
        frame_2->setEnabled(true);
        frame_2->setGeometry(QRect(0, 0, 901, 550));
        frame_2->setStyleSheet(QString::fromUtf8("background: #101010;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 10, 431, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Droid Sans")});
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName("usernameBox");
        usernameBox->setGeometry(QRect(370, 290, 201, 41));
        QPalette palette1;
        QBrush brush3(QColor(254, 254, 254, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(254, 254, 254, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        usernameBox->setPalette(palette1);
        QFont font1;
        font1.setPointSize(12);
        font1.setKerning(true);
        usernameBox->setFont(font1);
        usernameBox->setLayoutDirection(Qt::LeftToRight);
        usernameBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        usernameBox->setFrame(false);
        usernameBox->setCursorPosition(0);
        usernameBox->setCursorMoveStyle(Qt::LogicalMoveStyle);
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName("passwordBox");
        passwordBox->setGeometry(QRect(370, 350, 201, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        passwordBox->setPalette(palette2);
        QFont font2;
        font2.setPointSize(12);
        passwordBox->setFont(font2);
        passwordBox->setLayoutDirection(Qt::LeftToRight);
        passwordBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        passwordBox->setInputMethodHints(Qt::ImhNone);
        passwordBox->setFrame(false);
        passwordBox->setCursorPosition(0);
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(540, 470, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Narrow")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(true);
        loginButton->setFont(font3);
        loginButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #00FF00;\n"
"Color: #000000;"));
        regButton = new QPushButton(frame_2);
        regButton->setObjectName("regButton");
        regButton->setGeometry(QRect(410, 490, 101, 41));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        regButton->setFont(font4);
        regButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"background-color: #33CCFF;\n"
"Color: #000000;"));
        loginLabel = new QLabel(frame_2);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(380, 260, 331, 16));
        QFont font5;
        font5.setPointSize(11);
        loginLabel->setFont(font5);
        loginLabel->setStyleSheet(QString::fromUtf8("color: #0000FF;"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, 60, 131, 131));
        label_7->setStyleSheet(QString::fromUtf8("border-radius: 110px;\n"
"background-image: url(:/logo2.jpg);"));
        passwordBox_2 = new QLineEdit(frame_2);
        passwordBox_2->setObjectName("passwordBox_2");
        passwordBox_2->setGeometry(QRect(370, 410, 201, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        passwordBox_2->setPalette(palette3);
        passwordBox_2->setFont(font2);
        passwordBox_2->setLayoutDirection(Qt::LeftToRight);
        passwordBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        passwordBox_2->setInputMethodHints(Qt::ImhNone);
        passwordBox_2->setFrame(false);
        passwordBox_2->setCursorPosition(0);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 470, 101, 41));
        QFont font6;
        font6.setPointSize(14);
        font6.setBold(false);
        font6.setItalic(false);
        pushButton_3->setFont(font6);
        pushButton_3->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"background-color: #FFEFD5;\n"
"color: red;"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 200, 251, 51));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe Script")});
        font7.setPointSize(20);
        lineEdit->setFont(font7);
        lineEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;"));
        winStack->addWidget(Login);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 891, 561));
        frame_3->setStyleSheet(QString::fromUtf8("background: #101010;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(258, 24, 301, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox = new QLineEdit(frame_3);
        uBox->setObjectName("uBox");
        uBox->setGeometry(QRect(50, 140, 221, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        uBox->setPalette(palette4);
        QFont font8;
        font8.setKerning(true);
        uBox->setFont(font8);
        uBox->setLayoutDirection(Qt::LeftToRight);
        uBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox->setFrame(false);
        uBox->setCursorPosition(0);
        pBox = new QLineEdit(frame_3);
        pBox->setObjectName("pBox");
        pBox->setGeometry(QRect(50, 210, 221, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pBox->setPalette(palette5);
        pBox->setFont(font8);
        pBox->setLayoutDirection(Qt::LeftToRight);
        pBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox->setInputMethodHints(Qt::ImhNone);
        pBox->setFrame(false);
        pBox->setCursorPosition(0);
        completeRegButton = new QPushButton(frame_3);
        completeRegButton->setObjectName("completeRegButton");
        completeRegButton->setGeometry(QRect(570, 420, 191, 41));
        QFont font9;
        font9.setBold(true);
        completeRegButton->setFont(font9);
        completeRegButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        eBox = new QLineEdit(frame_3);
        eBox->setObjectName("eBox");
        eBox->setGeometry(QRect(50, 280, 221, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        eBox->setPalette(palette6);
        eBox->setFont(font8);
        eBox->setLayoutDirection(Qt::LeftToRight);
        eBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox->setInputMethodHints(Qt::ImhNone);
        eBox->setFrame(false);
        eBox->setCursorPosition(0);
        fBox = new QLineEdit(frame_3);
        fBox->setObjectName("fBox");
        fBox->setGeometry(QRect(500, 130, 251, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        fBox->setPalette(palette7);
        fBox->setFont(font8);
        fBox->setLayoutDirection(Qt::LeftToRight);
        fBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        fBox->setInputMethodHints(Qt::ImhNone);
        fBox->setFrame(false);
        fBox->setCursorPosition(0);
        mBox = new QLineEdit(frame_3);
        mBox->setObjectName("mBox");
        mBox->setGeometry(QRect(500, 210, 251, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        mBox->setPalette(palette8);
        mBox->setFont(font8);
        mBox->setLayoutDirection(Qt::LeftToRight);
        mBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        mBox->setInputMethodHints(Qt::ImhNone);
        mBox->setFrame(false);
        mBox->setCursorPosition(0);
        lBox = new QLineEdit(frame_3);
        lBox->setObjectName("lBox");
        lBox->setGeometry(QRect(500, 290, 251, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        lBox->setPalette(palette9);
        lBox->setFont(font8);
        lBox->setLayoutDirection(Qt::LeftToRight);
        lBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        lBox->setInputMethodHints(Qt::ImhNone);
        lBox->setFrame(false);
        lBox->setCursorPosition(0);
        backButton = new QPushButton(frame_3);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(570, 480, 191, 41));
        backButton->setFont(font4);
        backButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel = new QLabel(frame_3);
        regLabel->setObjectName("regLabel");
        regLabel->setGeometry(QRect(80, 90, 601, 16));
        regLabel->setFont(font2);
        regLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        rpLabel = new QLabel(frame_3);
        rpLabel->setObjectName("rpLabel");
        rpLabel->setGeometry(QRect(320, 150, 131, 141));
        rpLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        textEdit = new QTextEdit(frame_3);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(320, 300, 141, 91));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        textEdit->setFrameShape(QFrame::Panel);
        winStack->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        frame_4 = new QFrame(page);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 901, 551));
        frame_4->setStyleSheet(QString::fromUtf8("background: #101010;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        loggedUserHeader = new QLabel(frame_4);
        loggedUserHeader->setObjectName("loggedUserHeader");
        loggedUserHeader->setGeometry(QRect(30, 50, 771, 41));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Droid Sans")});
        font10.setBold(true);
        loggedUserHeader->setFont(font10);
        loggedUserHeader->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        logoutButton = new QPushButton(frame_4);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(550, 430, 201, 31));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setItalic(false);
        logoutButton->setFont(font11);
        logoutButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"background-color: #9933FF;\n"
"Color: #fefefe;"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 290, 47, 13));
        QFont font12;
        font12.setPointSize(10);
        font12.setBold(true);
        label_3->setFont(font12);
        label_3->setStyleSheet(QString::fromUtf8("color: #fefefe;\n"
"font-weight: bold;"));
        nameLabel = new QLabel(frame_4);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(110, 290, 241, 16));
        nameLabel->setStyleSheet(QString::fromUtf8("color:  #0000FF;"));
        editButton = new QPushButton(frame_4);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(40, 430, 171, 41));
        editButton->setFont(font4);
        editButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        delButton = new QPushButton(frame_4);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(40, 490, 171, 41));
        delButton->setFont(font4);
        delButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;\n"
""));
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 310, 47, 13));
        label_6->setFont(font12);
        label_6->setStyleSheet(QString::fromUtf8("color: #fefefe;\n"
"font-weight: bold;"));
        emailLabel = new QLabel(frame_4);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(100, 310, 201, 16));
        emailLabel->setStyleSheet(QString::fromUtf8("color:  #0000FF;"));
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(110, 140, 128, 128));
        frame_6->setStyleSheet(QString::fromUtf8(""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        loggedPic = new QLabel(frame_6);
        loggedPic->setObjectName("loggedPic");
        loggedPic->setGeometry(QRect(0, 0, 128, 128));
        loggedPic->setStyleSheet(QString::fromUtf8(""));
        adminButton = new QPushButton(frame_4);
        adminButton->setObjectName("adminButton");
        adminButton->setGeometry(QRect(540, 240, 221, 41));
        QFont font13;
        font13.setPointSize(14);
        font13.setBold(true);
        font13.setItalic(true);
        adminButton->setFont(font13);
        adminButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        adminButton_2 = new QPushButton(frame_4);
        adminButton_2->setObjectName("adminButton_2");
        adminButton_2->setGeometry(QRect(510, 320, 291, 51));
        adminButton_2->setFont(font13);
        adminButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #00FF00;\n"
"Color: #000000;"));
        adminButton_3 = new QPushButton(frame_4);
        adminButton_3->setObjectName("adminButton_3");
        adminButton_3->setGeometry(QRect(540, 150, 211, 51));
        adminButton_3->setFont(font4);
        adminButton_3->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"background-color: #33CCFF;\n"
"Color: #000000;"));
        frame_6->raise();
        loggedUserHeader->raise();
        logoutButton->raise();
        label_3->raise();
        nameLabel->raise();
        editButton->raise();
        delButton->raise();
        label_6->raise();
        emailLabel->raise();
        adminButton->raise();
        adminButton_2->raise();
        adminButton_3->raise();
        winStack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 0, 901, 551));
        frame_5->setStyleSheet(QString::fromUtf8("background: #101010;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 20, 351, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_2 = new QLineEdit(frame_5);
        uBox_2->setObjectName("uBox_2");
        uBox_2->setGeometry(QRect(50, 170, 221, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        uBox_2->setPalette(palette10);
        uBox_2->setFont(font8);
        uBox_2->setLayoutDirection(Qt::LeftToRight);
        uBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox_2->setFrame(false);
        uBox_2->setCursorPosition(0);
        pBox_2 = new QLineEdit(frame_5);
        pBox_2->setObjectName("pBox_2");
        pBox_2->setGeometry(QRect(50, 240, 221, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pBox_2->setPalette(palette11);
        pBox_2->setFont(font8);
        pBox_2->setLayoutDirection(Qt::LeftToRight);
        pBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox_2->setInputMethodHints(Qt::ImhNone);
        pBox_2->setFrame(false);
        pBox_2->setCursorPosition(0);
        editedButton = new QPushButton(frame_5);
        editedButton->setObjectName("editedButton");
        editedButton->setGeometry(QRect(540, 390, 181, 31));
        QFont font14;
        font14.setPointSize(12);
        font14.setBold(true);
        editedButton->setFont(font14);
        editedButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        eBox_2 = new QLineEdit(frame_5);
        eBox_2->setObjectName("eBox_2");
        eBox_2->setGeometry(QRect(50, 330, 221, 41));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        eBox_2->setPalette(palette12);
        eBox_2->setFont(font8);
        eBox_2->setLayoutDirection(Qt::LeftToRight);
        eBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox_2->setInputMethodHints(Qt::ImhNone);
        eBox_2->setFrame(false);
        eBox_2->setCursorPosition(0);
        fBox_2 = new QLineEdit(frame_5);
        fBox_2->setObjectName("fBox_2");
        fBox_2->setGeometry(QRect(500, 150, 261, 41));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        fBox_2->setPalette(palette13);
        fBox_2->setFont(font8);
        fBox_2->setLayoutDirection(Qt::LeftToRight);
        fBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        fBox_2->setInputMethodHints(Qt::ImhNone);
        fBox_2->setFrame(false);
        fBox_2->setCursorPosition(0);
        mBox_2 = new QLineEdit(frame_5);
        mBox_2->setObjectName("mBox_2");
        mBox_2->setGeometry(QRect(500, 220, 261, 41));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        mBox_2->setPalette(palette14);
        mBox_2->setFont(font8);
        mBox_2->setLayoutDirection(Qt::LeftToRight);
        mBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        mBox_2->setInputMethodHints(Qt::ImhNone);
        mBox_2->setFrame(false);
        mBox_2->setCursorPosition(0);
        lBox_2 = new QLineEdit(frame_5);
        lBox_2->setObjectName("lBox_2");
        lBox_2->setGeometry(QRect(500, 290, 261, 41));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        lBox_2->setPalette(palette15);
        lBox_2->setFont(font8);
        lBox_2->setLayoutDirection(Qt::LeftToRight);
        lBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        lBox_2->setInputMethodHints(Qt::ImhNone);
        lBox_2->setFrame(false);
        lBox_2->setCursorPosition(0);
        backButton_2 = new QPushButton(frame_5);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(540, 440, 181, 31));
        backButton_2->setFont(font4);
        backButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel_2 = new QLabel(frame_5);
        regLabel_2->setObjectName("regLabel_2");
        regLabel_2->setGeometry(QRect(60, 110, 601, 16));
        regLabel_2->setFont(font14);
        regLabel_2->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        rpLabel_2 = new QLabel(frame_5);
        rpLabel_2->setObjectName("rpLabel_2");
        rpLabel_2->setGeometry(QRect(330, 170, 128, 128));
        rpLabel_2->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        label_5->raise();
        uBox_2->raise();
        pBox_2->raise();
        eBox_2->raise();
        fBox_2->raise();
        mBox_2->raise();
        lBox_2->raise();
        backButton_2->raise();
        regLabel_2->raise();
        editedButton->raise();
        rpLabel_2->raise();
        winStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        frame_7 = new QFrame(page_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 0, 921, 551));
        frame_7->setStyleSheet(QString::fromUtf8("background: #101010;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_7);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 20, 691, 31));
        QFont font15;
        font15.setFamilies({QString::fromUtf8("Droid Sans")});
        font15.setBold(true);
        font15.setItalic(true);
        label_8->setFont(font15);
        label_8->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        editedButton_2 = new QPushButton(frame_7);
        editedButton_2->setObjectName("editedButton_2");
        editedButton_2->setGeometry(QRect(700, 420, 141, 31));
        editedButton_2->setFont(font9);
        editedButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        stackedWidget = new QStackedWidget(frame_7);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 90, 851, 281));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        frame_8 = new QFrame(page_5);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 0, 851, 281));
        frame_8->setStyleSheet(QString::fromUtf8("background: #fefefe;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_8);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 851, 281));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        frame_9 = new QFrame(page_6);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(0, 0, 851, 281));
        frame_9->setStyleSheet(QString::fromUtf8("background: #fefefe;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame_9);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(0, 0, 851, 281));
        stackedWidget->addWidget(page_6);
        backButton_5 = new QPushButton(frame_7);
        backButton_5->setObjectName("backButton_5");
        backButton_5->setGeometry(QRect(700, 380, 141, 31));
        backButton_5->setFont(font12);
        backButton_5->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        pageButton = new QPushButton(frame_7);
        pageButton->setObjectName("pageButton");
        pageButton->setGeometry(QRect(700, 510, 155, 27));
        pageButton->setFont(font14);
        pageButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #800080;\n"
"Color: #fefefefe;"));
        delAButton = new QPushButton(frame_7);
        delAButton->setObjectName("delAButton");
        delAButton->setGeometry(QRect(440, 490, 181, 31));
        delAButton->setFont(font9);
        delAButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));
        adminLabel = new QLabel(frame_7);
        adminLabel->setObjectName("adminLabel");
        adminLabel->setGeometry(QRect(420, 380, 241, 16));
        adminLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        headLabel = new QLabel(frame_7);
        headLabel->setObjectName("headLabel");
        headLabel->setGeometry(QRect(20, 70, 479, 16));
        QFont font16;
        font16.setPointSize(12);
        font16.setBold(true);
        font16.setItalic(true);
        headLabel->setFont(font16);
        headLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        pushButton = new QPushButton(frame_7);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 410, 171, 31));
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #00FFFF;\n"
"color: #0000FF;\n"
""));
        pushButton_2 = new QPushButton(frame_7);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(440, 450, 131, 31));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #FFFF00;\n"
"color: #0000FF;\n"
""));
        userBrowse = new QPushButton(frame_7);
        userBrowse->setObjectName("userBrowse");
        userBrowse->setGeometry(QRect(20, 380, 155, 27));
        QFont font17;
        font17.setPointSize(10);
        font17.setBold(true);
        font17.setItalic(true);
        userBrowse->setFont(font17);
        userBrowse->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        adminBrowse = new QPushButton(frame_7);
        adminBrowse->setObjectName("adminBrowse");
        adminBrowse->setGeometry(QRect(200, 380, 181, 27));
        adminBrowse->setFont(font17);
        adminBrowse->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        winStack->addWidget(page_4);
        LoginSystem->setCentralWidget(centralWidget);

        retranslateUi(LoginSystem);

        winStack->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginSystem);
    } // setupUi

    void retranslateUi(QMainWindow *LoginSystem)
    {
        LoginSystem->setWindowTitle(QCoreApplication::translate("LoginSystem", "Login System 1.0", nullptr));
        label->setText(QCoreApplication::translate("LoginSystem", "Br\303\272jula del turismo", nullptr));
        usernameBox->setText(QString());
        usernameBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Usuario", nullptr));
        passwordBox->setInputMask(QString());
        passwordBox->setText(QString());
        passwordBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Contrase\303\261a", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginSystem", "Ingresar", nullptr));
        regButton->setText(QCoreApplication::translate("LoginSystem", "Registrarse", nullptr));
        loginLabel->setText(QString());
        label_7->setText(QString());
        passwordBox_2->setInputMask(QString());
        passwordBox_2->setText(QString());
        passwordBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Correo", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginSystem", "Salir", nullptr));
        lineEdit->setText(QCoreApplication::translate("LoginSystem", "Inicio de Sesi\303\263n", nullptr));
        label_2->setText(QCoreApplication::translate("LoginSystem", "REGISTRO", nullptr));
        uBox->setText(QString());
        uBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Nombre de Usuario", nullptr));
        pBox->setInputMask(QString());
        pBox->setText(QString());
        pBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Contrase\303\261a", nullptr));
        completeRegButton->setText(QCoreApplication::translate("LoginSystem", "GUARDAR REGISTRO", nullptr));
        eBox->setInputMask(QString());
        eBox->setText(QString());
        eBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "e-mail", nullptr));
        fBox->setInputMask(QString());
        fBox->setText(QString());
        fBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Nombre", nullptr));
        mBox->setInputMask(QString());
        mBox->setText(QString());
        mBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Primer Apellido", nullptr));
        lBox->setInputMask(QString());
        lBox->setText(QString());
        lBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Segundo Apellido", nullptr));
        backButton->setText(QCoreApplication::translate("LoginSystem", "Acceder al sistema", nullptr));
        regLabel->setText(QCoreApplication::translate("LoginSystem", "Ingrese los datos correctos", nullptr));
        rpLabel->setText(QCoreApplication::translate("LoginSystem", "<img src=\":user.png\" />", nullptr));
        textEdit->setHtml(QCoreApplication::translate("LoginSystem", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#c1a630;\">En cada aventura hay una historia que espera ser escrita y vivida</span></p></body></html>", nullptr));
        loggedUserHeader->setText(QCoreApplication::translate("LoginSystem", "Conectado a la Br\303\272jula del turismo", nullptr));
        logoutButton->setText(QCoreApplication::translate("LoginSystem", "Desconectarse", nullptr));
        label_3->setText(QCoreApplication::translate("LoginSystem", "Name:", nullptr));
        nameLabel->setText(QString());
        editButton->setText(QCoreApplication::translate("LoginSystem", "Modificar Perfil", nullptr));
        delButton->setText(QCoreApplication::translate("LoginSystem", "Borrar Cuenta", nullptr));
        label_6->setText(QCoreApplication::translate("LoginSystem", "E-mail:", nullptr));
        emailLabel->setText(QString());
        loggedPic->setText(QCoreApplication::translate("LoginSystem", "<img src=\":user.png\" />", nullptr));
        adminButton->setText(QCoreApplication::translate("LoginSystem", "Gestionar de Registros", nullptr));
        adminButton_2->setText(QCoreApplication::translate("LoginSystem", "Gestionar Informaci\303\263n Tur\303\255stica", nullptr));
        adminButton_3->setText(QCoreApplication::translate("LoginSystem", "IR AL PANEL DE CONTROL", nullptr));
        label_5->setText(QCoreApplication::translate("LoginSystem", "EDITAR PERFIL", nullptr));
        uBox_2->setText(QString());
        uBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Nombre de Usuario", nullptr));
        pBox_2->setInputMask(QString());
        pBox_2->setText(QString());
        pBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Contrase\303\261a", nullptr));
        editedButton->setText(QCoreApplication::translate("LoginSystem", "Aplicar Cambios", nullptr));
        eBox_2->setInputMask(QString());
        eBox_2->setText(QString());
        eBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "e-mail", nullptr));
        fBox_2->setInputMask(QString());
        fBox_2->setText(QString());
        fBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Nombre", nullptr));
        mBox_2->setInputMask(QString());
        mBox_2->setText(QString());
        mBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Primer Apellido", nullptr));
        lBox_2->setInputMask(QString());
        lBox_2->setText(QString());
        lBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Segundo Apellido", nullptr));
        backButton_2->setText(QCoreApplication::translate("LoginSystem", "Volver", nullptr));
        regLabel_2->setText(QCoreApplication::translate("LoginSystem", "Edite su perfil con su informaci\303\263n", nullptr));
        rpLabel_2->setText(QCoreApplication::translate("LoginSystem", "<img src=\":user.png\" />", nullptr));
        label_8->setText(QCoreApplication::translate("LoginSystem", "USUARIOS REGISTRADOS", nullptr));
        editedButton_2->setText(QCoreApplication::translate("LoginSystem", "GUARDAR CAMBIOS", nullptr));
        backButton_5->setText(QCoreApplication::translate("LoginSystem", "DESHACER CAMBIOS", nullptr));
        pageButton->setText(QCoreApplication::translate("LoginSystem", "VOLVER AL PANEL", nullptr));
        delAButton->setText(QCoreApplication::translate("LoginSystem", "BORRAR ADMINISTRADORES", nullptr));
        adminLabel->setText(QCoreApplication::translate("LoginSystem", "Aseg\303\272rese de cualquier alteraci\303\263n que haga.", nullptr));
        headLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("LoginSystem", "Agregar Administrador", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginSystem", "Agregar Cliente", nullptr));
        userBrowse->setText(QCoreApplication::translate("LoginSystem", "Panel USUARIOS", nullptr));
        adminBrowse->setText(QCoreApplication::translate("LoginSystem", "Panel ADMINISTRADORES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginSystem: public Ui_LoginSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSYSTEM_H
