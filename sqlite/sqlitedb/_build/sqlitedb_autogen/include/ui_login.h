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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_login;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_passwd;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_passwd;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_signUp;
    QPushButton *pushButton_signIn;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(348, 610);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_3->addLayout(verticalLayout, 1, 0, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_login = new QLabel(centralwidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_login->sizePolicy().hasHeightForWidth());
        label_login->setSizePolicy(sizePolicy1);
        label_login->setBaseSize(QSize(0, 0));
        label_login->setFocusPolicy(Qt::StrongFocus);
        label_login->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_login, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setBaseSize(QSize(0, 0));
        label_2->setFocusPolicy(Qt::StrongFocus);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setBaseSize(QSize(0, 0));
        comboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_passwd = new QLabel(centralwidget);
        label_passwd->setObjectName(QString::fromUtf8("label_passwd"));
        label_passwd->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_passwd->sizePolicy().hasHeightForWidth());
        label_passwd->setSizePolicy(sizePolicy1);
        label_passwd->setBaseSize(QSize(0, 0));
        label_passwd->setFocusPolicy(Qt::StrongFocus);
        label_passwd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_passwd, 2, 0, 1, 1);

        lineEdit_login = new QLineEdit(centralwidget);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setEnabled(true);
        sizePolicy2.setHeightForWidth(lineEdit_login->sizePolicy().hasHeightForWidth());
        lineEdit_login->setSizePolicy(sizePolicy2);
        lineEdit_login->setBaseSize(QSize(0, 0));
        lineEdit_login->setFocusPolicy(Qt::StrongFocus);
        lineEdit_login->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_login, 1, 1, 1, 1);

        lineEdit_passwd = new QLineEdit(centralwidget);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setEnabled(true);
        sizePolicy2.setHeightForWidth(lineEdit_passwd->sizePolicy().hasHeightForWidth());
        lineEdit_passwd->setSizePolicy(sizePolicy2);
        lineEdit_passwd->setBaseSize(QSize(0, 0));
        lineEdit_passwd->setFocusPolicy(Qt::StrongFocus);
        lineEdit_passwd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_passwd, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_signUp = new QPushButton(centralwidget);
        pushButton_signUp->setObjectName(QString::fromUtf8("pushButton_signUp"));

        gridLayout_2->addWidget(pushButton_signUp, 2, 0, 1, 1);

        pushButton_signIn = new QPushButton(centralwidget);
        pushButton_signIn->setObjectName(QString::fromUtf8("pushButton_signIn"));

        gridLayout_2->addWidget(pushButton_signIn, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        gridLayout_3->addLayout(verticalLayout_2, 1, 4, 2, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_3->addWidget(label, 3, 0, 1, 5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 5);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 348, 21));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        label_login->setText(QCoreApplication::translate("login", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\320\232\321\202\320\276 \320\262\321\213?", nullptr));
        label_passwd->setText(QCoreApplication::translate("login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_signUp->setText(QCoreApplication::translate("login", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_signIn->setText(QCoreApplication::translate("login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("login", "\320\230\320\264\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
