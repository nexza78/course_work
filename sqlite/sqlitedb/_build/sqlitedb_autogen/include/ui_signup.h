/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_login;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_passwd;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_passwd;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_signUp;
    QPushButton *pushButton_signIn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(412, 458);
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(97, 115, 182, 92));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        layoutWidget->setBaseSize(QSize(0, 0));
        layoutWidget->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(layoutWidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setEnabled(true);
        sizePolicy.setHeightForWidth(label_login->sizePolicy().hasHeightForWidth());
        label_login->setSizePolicy(sizePolicy);
        label_login->setBaseSize(QSize(0, 0));
        label_login->setFocusPolicy(Qt::StrongFocus);
        label_login->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_login, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setBaseSize(QSize(0, 0));
        label_2->setFocusPolicy(Qt::StrongFocus);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setBaseSize(QSize(0, 0));
        comboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_passwd = new QLabel(layoutWidget);
        label_passwd->setObjectName(QString::fromUtf8("label_passwd"));
        label_passwd->setEnabled(true);
        sizePolicy.setHeightForWidth(label_passwd->sizePolicy().hasHeightForWidth());
        label_passwd->setSizePolicy(sizePolicy);
        label_passwd->setBaseSize(QSize(0, 0));
        label_passwd->setFocusPolicy(Qt::StrongFocus);
        label_passwd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_passwd, 2, 0, 1, 1);

        lineEdit_login = new QLineEdit(layoutWidget);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_login->sizePolicy().hasHeightForWidth());
        lineEdit_login->setSizePolicy(sizePolicy1);
        lineEdit_login->setBaseSize(QSize(0, 0));
        lineEdit_login->setFocusPolicy(Qt::StrongFocus);
        lineEdit_login->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_login, 1, 1, 1, 1);

        lineEdit_passwd = new QLineEdit(layoutWidget);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_passwd->sizePolicy().hasHeightForWidth());
        lineEdit_passwd->setSizePolicy(sizePolicy1);
        lineEdit_passwd->setBaseSize(QSize(0, 0));
        lineEdit_passwd->setFocusPolicy(Qt::StrongFocus);
        lineEdit_passwd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_passwd, 2, 1, 1, 1);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(323, 115, 32, 189));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 18, 335, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(97, 213, 182, 91));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_signUp = new QPushButton(layoutWidget_2);
        pushButton_signUp->setObjectName(QString::fromUtf8("pushButton_signUp"));

        gridLayout_2->addWidget(pushButton_signUp, 2, 0, 1, 1);

        pushButton_signIn = new QPushButton(layoutWidget_2);
        pushButton_signIn->setObjectName(QString::fromUtf8("pushButton_signIn"));

        gridLayout_2->addWidget(pushButton_signIn, 1, 0, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 115, 32, 189));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 310, 335, 91));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        SignUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignUp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 412, 21));
        SignUp->setMenuBar(menubar);
        statusbar = new QStatusBar(SignUp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SignUp->setStatusBar(statusbar);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        label_login->setText(QCoreApplication::translate("SignUp", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "\320\232\321\202\320\276 \320\262\321\213?", nullptr));
        label_passwd->setText(QCoreApplication::translate("SignUp", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_signUp->setText(QCoreApplication::translate("SignUp", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_signIn->setText(QCoreApplication::translate("SignUp", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "\320\230\320\264\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
