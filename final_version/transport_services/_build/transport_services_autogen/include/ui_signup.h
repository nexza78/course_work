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

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QPushButton *pB_confirm_register;
    QLabel *label;
    QPushButton *pB_cancel;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineE_login;
    QLabel *lbl_login;
    QLineEdit *lineEdit_phone_nmb;
    QLineEdit *lineE_surname;
    QLabel *lbl_passwd;
    QLineEdit *lineEdit_email;
    QLineEdit *lineE_passwd;
    QLineEdit *line_passwd_confirm;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_middle_name;
    QLabel *label_4;
    QLineEdit *lineEdit_name;
    QLabel *label_2;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(642, 590);
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pB_confirm_register = new QPushButton(centralwidget);
        pB_confirm_register->setObjectName(QString::fromUtf8("pB_confirm_register"));

        gridLayout_4->addWidget(pB_confirm_register, 0, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        pB_cancel = new QPushButton(centralwidget);
        pB_cancel->setObjectName(QString::fromUtf8("pB_cancel"));

        gridLayout_4->addWidget(pB_cancel, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineE_login = new QLineEdit(centralwidget);
        lineE_login->setObjectName(QString::fromUtf8("lineE_login"));
        sizePolicy.setHeightForWidth(lineE_login->sizePolicy().hasHeightForWidth());
        lineE_login->setSizePolicy(sizePolicy);
        lineE_login->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineE_login, 3, 1, 1, 1);

        lbl_login = new QLabel(centralwidget);
        lbl_login->setObjectName(QString::fromUtf8("lbl_login"));
        lbl_login->setEnabled(true);
        sizePolicy.setHeightForWidth(lbl_login->sizePolicy().hasHeightForWidth());
        lbl_login->setSizePolicy(sizePolicy);
        lbl_login->setBaseSize(QSize(0, 0));
        lbl_login->setFocusPolicy(Qt::NoFocus);
        lbl_login->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lbl_login, 3, 0, 1, 1);

        lineEdit_phone_nmb = new QLineEdit(centralwidget);
        lineEdit_phone_nmb->setObjectName(QString::fromUtf8("lineEdit_phone_nmb"));
        sizePolicy.setHeightForWidth(lineEdit_phone_nmb->sizePolicy().hasHeightForWidth());
        lineEdit_phone_nmb->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_phone_nmb, 6, 1, 1, 1);

        lineE_surname = new QLineEdit(centralwidget);
        lineE_surname->setObjectName(QString::fromUtf8("lineE_surname"));
        sizePolicy.setHeightForWidth(lineE_surname->sizePolicy().hasHeightForWidth());
        lineE_surname->setSizePolicy(sizePolicy);
        lineE_surname->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineE_surname, 0, 1, 1, 1);

        lbl_passwd = new QLabel(centralwidget);
        lbl_passwd->setObjectName(QString::fromUtf8("lbl_passwd"));
        lbl_passwd->setEnabled(true);
        sizePolicy.setHeightForWidth(lbl_passwd->sizePolicy().hasHeightForWidth());
        lbl_passwd->setSizePolicy(sizePolicy);
        lbl_passwd->setBaseSize(QSize(0, 0));
        lbl_passwd->setFocusPolicy(Qt::NoFocus);
        lbl_passwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lbl_passwd, 4, 0, 1, 1);

        lineEdit_email = new QLineEdit(centralwidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        sizePolicy.setHeightForWidth(lineEdit_email->sizePolicy().hasHeightForWidth());
        lineEdit_email->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_email, 7, 1, 1, 1);

        lineE_passwd = new QLineEdit(centralwidget);
        lineE_passwd->setObjectName(QString::fromUtf8("lineE_passwd"));
        lineE_passwd->setEnabled(true);
        sizePolicy.setHeightForWidth(lineE_passwd->sizePolicy().hasHeightForWidth());
        lineE_passwd->setSizePolicy(sizePolicy);
        lineE_passwd->setBaseSize(QSize(0, 0));
        lineE_passwd->setFocusPolicy(Qt::StrongFocus);
        lineE_passwd->setStyleSheet(QString::fromUtf8(""));
        lineE_passwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lineE_passwd, 4, 1, 1, 1);

        line_passwd_confirm = new QLineEdit(centralwidget);
        line_passwd_confirm->setObjectName(QString::fromUtf8("line_passwd_confirm"));
        sizePolicy.setHeightForWidth(line_passwd_confirm->sizePolicy().hasHeightForWidth());
        line_passwd_confirm->setSizePolicy(sizePolicy);
        line_passwd_confirm->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(line_passwd_confirm, 5, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setMargin(0);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_middle_name = new QLineEdit(centralwidget);
        lineEdit_middle_name->setObjectName(QString::fromUtf8("lineEdit_middle_name"));
        sizePolicy.setHeightForWidth(lineEdit_middle_name->sizePolicy().hasHeightForWidth());
        lineEdit_middle_name->setSizePolicy(sizePolicy);
        lineEdit_middle_name->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_middle_name, 2, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);
        lineEdit_name->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 2, 1, 1, 1);

        SignUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignUp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 642, 21));
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
        pB_confirm_register->setText(QCoreApplication::translate("SignUp", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "\320\230\320\264\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205...", nullptr));
        pB_cancel->setText(QCoreApplication::translate("SignUp", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        lineE_login->setText(QString());
        lbl_login->setText(QCoreApplication::translate("SignUp", "\320\233\320\276\320\263\320\270\320\275*", nullptr));
        lbl_passwd->setText(QCoreApplication::translate("SignUp", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\277\320\276\321\207\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", "* \320\222\321\213 \320\275\320\265 \321\201\320\274\320\276\320\266\320\265\321\202\320\265 \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \320\273\320\276\320\263\320\270\320\275 \320\262 \320\264\320\260\320\273\321\214\320\275\320\265\320\271\321\210\320\265\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
