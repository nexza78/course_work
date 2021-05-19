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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_signUp;
    QPushButton *pushButton_signIn;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_passwd;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_passwd;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(494, 575);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_signUp = new QPushButton(centralwidget);
        pushButton_signUp->setObjectName(QString::fromUtf8("pushButton_signUp"));

        gridLayout_2->addWidget(pushButton_signUp, 2, 0, 1, 1);

        pushButton_signIn = new QPushButton(centralwidget);
        pushButton_signIn->setObjectName(QString::fromUtf8("pushButton_signIn"));

        gridLayout_2->addWidget(pushButton_signIn, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 4, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_passwd = new QLabel(centralwidget);
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

        gridLayout->addWidget(label_passwd, 2, 0, 1, 1);

        label_login = new QLabel(centralwidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setEnabled(true);
        sizePolicy.setHeightForWidth(label_login->sizePolicy().hasHeightForWidth());
        label_login->setSizePolicy(sizePolicy);
        label_login->setBaseSize(QSize(0, 0));
        label_login->setFocusPolicy(Qt::StrongFocus);
        label_login->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_login, 1, 0, 1, 1);

        lineEdit_login = new QLineEdit(centralwidget);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_login->sizePolicy().hasHeightForWidth());
        lineEdit_login->setSizePolicy(sizePolicy1);
        lineEdit_login->setBaseSize(QSize(0, 0));
        lineEdit_login->setFocusPolicy(Qt::StrongFocus);
        lineEdit_login->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_login, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setBaseSize(QSize(0, 0));
        label_2->setFocusPolicy(Qt::StrongFocus);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setBaseSize(QSize(0, 0));
        comboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        lineEdit_passwd = new QLineEdit(centralwidget);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_passwd->sizePolicy().hasHeightForWidth());
        lineEdit_passwd->setSizePolicy(sizePolicy1);
        lineEdit_passwd->setBaseSize(QSize(0, 0));
        lineEdit_passwd->setFocusPolicy(Qt::StrongFocus);
        lineEdit_passwd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_passwd, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(135, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 494, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_signUp->setText(QCoreApplication::translate("Login", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_signIn->setText(QCoreApplication::translate("Login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("Login", "\320\230\320\264\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205...", nullptr));
        label_passwd->setText(QCoreApplication::translate("Login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_login->setText(QCoreApplication::translate("Login", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\320\232\321\202\320\276 \320\262\321\213?", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Login", "\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Login", "\320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
