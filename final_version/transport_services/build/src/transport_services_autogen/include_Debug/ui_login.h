/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_7;
    QLabel *label_passwd;
    QLabel *label_login;
    QLabel *label_4;
    QComboBox *comboBox_role;
    QLineEdit *lineEdit_passwd;
    QLineEdit *lineEdit_login;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_signIn;
    QPushButton *pushButton_signUp;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setEnabled(true);
        Login->resize(540, 416);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/stan_/Downloads/123.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setAnimated(true);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_10 = new QGridLayout(centralwidget);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalSpacer = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 0, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_passwd = new QLabel(groupBox);
        label_passwd->setObjectName(QString::fromUtf8("label_passwd"));
        label_passwd->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_passwd->sizePolicy().hasHeightForWidth());
        label_passwd->setSizePolicy(sizePolicy);
        label_passwd->setBaseSize(QSize(0, 0));
        label_passwd->setFocusPolicy(Qt::StrongFocus);
        label_passwd->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_passwd, 2, 0, 1, 1);

        label_login = new QLabel(groupBox);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setEnabled(true);
        sizePolicy.setHeightForWidth(label_login->sizePolicy().hasHeightForWidth());
        label_login->setSizePolicy(sizePolicy);
        label_login->setBaseSize(QSize(0, 0));
        label_login->setFocusPolicy(Qt::StrongFocus);
        label_login->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_login, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setBaseSize(QSize(0, 0));
        label_4->setFocusPolicy(Qt::StrongFocus);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        comboBox_role = new QComboBox(groupBox);
        comboBox_role->addItem(QString());
        comboBox_role->addItem(QString());
        comboBox_role->setObjectName(QString::fromUtf8("comboBox_role"));
        comboBox_role->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_role->sizePolicy().hasHeightForWidth());
        comboBox_role->setSizePolicy(sizePolicy1);
        comboBox_role->setBaseSize(QSize(0, 0));
        comboBox_role->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(comboBox_role, 0, 1, 1, 1);

        lineEdit_passwd = new QLineEdit(groupBox);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_passwd->sizePolicy().hasHeightForWidth());
        lineEdit_passwd->setSizePolicy(sizePolicy1);
        lineEdit_passwd->setBaseSize(QSize(0, 0));
        lineEdit_passwd->setFocusPolicy(Qt::StrongFocus);
        lineEdit_passwd->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lineEdit_passwd, 2, 1, 1, 1);

        lineEdit_login = new QLineEdit(groupBox);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_login->sizePolicy().hasHeightForWidth());
        lineEdit_login->setSizePolicy(sizePolicy1);
        lineEdit_login->setBaseSize(QSize(0, 0));
        lineEdit_login->setFocusPolicy(Qt::StrongFocus);
        lineEdit_login->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lineEdit_login, 1, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_7, 1, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        pushButton_signIn = new QPushButton(groupBox);
        pushButton_signIn->setObjectName(QString::fromUtf8("pushButton_signIn"));

        gridLayout_8->addWidget(pushButton_signIn, 1, 0, 1, 1);

        pushButton_signUp = new QPushButton(groupBox);
        pushButton_signUp->setObjectName(QString::fromUtf8("pushButton_signUp"));

        gridLayout_8->addWidget(pushButton_signUp, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_10->addWidget(groupBox, 0, 0, 1, 1);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 540, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "\320\222\321\205\320\276\320\264", nullptr));
        groupBox->setTitle(QString());
        label_passwd->setText(QCoreApplication::translate("Login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_login->setText(QCoreApplication::translate("Login", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "\320\232\321\202\320\276 \320\262\321\213?", nullptr));
        comboBox_role->setItemText(0, QCoreApplication::translate("Login", "\320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        comboBox_role->setItemText(1, QCoreApplication::translate("Login", "\320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));

        pushButton_signIn->setText(QCoreApplication::translate("Login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_signUp->setText(QCoreApplication::translate("Login", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H