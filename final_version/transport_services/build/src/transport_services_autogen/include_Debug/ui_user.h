/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_5;
    QPushButton *pB_save_info;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QPushButton *pushButton_change_acc;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *lineE_passwd;
    QLabel *lbl_login;
    QLineEdit *lineEdit_middle_name;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QLabel *label_7;
    QLineEdit *lineE_passwd_confirm;
    QLabel *lbl_passwd;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineE_surname;
    QLabel *label_3;
    QLineEdit *lineEdit_email;
    QLabel *label_5;
    QLabel *label_login;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QTableView *tableView_cur_orders;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QComboBox *comboBox_route_number;
    QComboBox *comboBox_type_product;
    QLabel *label_17;
    QSpinBox *spinBox_count;
    QComboBox *comboBox_type_transport;
    QLabel *label_13;
    QLabel *label_12;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pB_save_new_order;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_12;
    QTableView *tableView_archive;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(613, 554);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        User->setWindowIcon(icon);
        centralwidget = new QWidget(User);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pB_save_info = new QPushButton(tab);
        pB_save_info->setObjectName(QString::fromUtf8("pB_save_info"));

        gridLayout_5->addWidget(pB_save_info, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 8, 0, 1, 3);

        pushButton_change_acc = new QPushButton(tab);
        pushButton_change_acc->setObjectName(QString::fromUtf8("pushButton_change_acc"));

        gridLayout_3->addWidget(pushButton_change_acc, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(248, 115, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setMargin(0);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineE_passwd = new QLineEdit(tab);
        lineE_passwd->setObjectName(QString::fromUtf8("lineE_passwd"));
        lineE_passwd->setEnabled(true);
        sizePolicy.setHeightForWidth(lineE_passwd->sizePolicy().hasHeightForWidth());
        lineE_passwd->setSizePolicy(sizePolicy);
        lineE_passwd->setBaseSize(QSize(0, 0));
        lineE_passwd->setFocusPolicy(Qt::StrongFocus);
        lineE_passwd->setStyleSheet(QString::fromUtf8(""));
        lineE_passwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lineE_passwd, 4, 1, 1, 1);

        lbl_login = new QLabel(tab);
        lbl_login->setObjectName(QString::fromUtf8("lbl_login"));
        lbl_login->setEnabled(true);
        sizePolicy.setHeightForWidth(lbl_login->sizePolicy().hasHeightForWidth());
        lbl_login->setSizePolicy(sizePolicy);
        lbl_login->setBaseSize(QSize(0, 0));
        lbl_login->setFocusPolicy(Qt::NoFocus);
        lbl_login->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lbl_login, 3, 0, 1, 1);

        lineEdit_middle_name = new QLineEdit(tab);
        lineEdit_middle_name->setObjectName(QString::fromUtf8("lineEdit_middle_name"));
        sizePolicy.setHeightForWidth(lineEdit_middle_name->sizePolicy().hasHeightForWidth());
        lineEdit_middle_name->setSizePolicy(sizePolicy);
        lineEdit_middle_name->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_middle_name, 2, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        lineEdit_name = new QLineEdit(tab);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);
        lineEdit_name->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        lineE_passwd_confirm = new QLineEdit(tab);
        lineE_passwd_confirm->setObjectName(QString::fromUtf8("lineE_passwd_confirm"));
        sizePolicy.setHeightForWidth(lineE_passwd_confirm->sizePolicy().hasHeightForWidth());
        lineE_passwd_confirm->setSizePolicy(sizePolicy);
        lineE_passwd_confirm->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineE_passwd_confirm, 5, 1, 1, 1);

        lbl_passwd = new QLabel(tab);
        lbl_passwd->setObjectName(QString::fromUtf8("lbl_passwd"));
        lbl_passwd->setEnabled(true);
        sizePolicy.setHeightForWidth(lbl_passwd->sizePolicy().hasHeightForWidth());
        lbl_passwd->setSizePolicy(sizePolicy);
        lbl_passwd->setBaseSize(QSize(0, 0));
        lbl_passwd->setFocusPolicy(Qt::NoFocus);
        lbl_passwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lbl_passwd, 4, 0, 1, 1);

        lineEdit_phone = new QLineEdit(tab);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        sizePolicy.setHeightForWidth(lineEdit_phone->sizePolicy().hasHeightForWidth());
        lineEdit_phone->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_phone, 6, 1, 1, 1);

        lineE_surname = new QLineEdit(tab);
        lineE_surname->setObjectName(QString::fromUtf8("lineE_surname"));
        sizePolicy.setHeightForWidth(lineE_surname->sizePolicy().hasHeightForWidth());
        lineE_surname->setSizePolicy(sizePolicy);
        lineE_surname->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineE_surname, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_email = new QLineEdit(tab);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        sizePolicy.setHeightForWidth(lineEdit_email->sizePolicy().hasHeightForWidth());
        lineEdit_email->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_email, 7, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_login = new QLabel(tab);
        label_login->setObjectName(QString::fromUtf8("label_login"));

        gridLayout->addWidget(label_login, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 122, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        tableView_cur_orders = new QTableView(tab_2);
        tableView_cur_orders->setObjectName(QString::fromUtf8("tableView_cur_orders"));

        gridLayout_10->addWidget(tableView_cur_orders, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 2, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        comboBox_route_number = new QComboBox(tab_4);
        comboBox_route_number->setObjectName(QString::fromUtf8("comboBox_route_number"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_route_number->sizePolicy().hasHeightForWidth());
        comboBox_route_number->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(comboBox_route_number, 2, 1, 1, 1);

        comboBox_type_product = new QComboBox(tab_4);
        comboBox_type_product->setObjectName(QString::fromUtf8("comboBox_type_product"));

        gridLayout_6->addWidget(comboBox_type_product, 0, 1, 1, 1);

        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_6->addWidget(label_17, 5, 0, 1, 1);

        spinBox_count = new QSpinBox(tab_4);
        spinBox_count->setObjectName(QString::fromUtf8("spinBox_count"));
        spinBox_count->setMinimum(1);
        spinBox_count->setMaximum(100);

        gridLayout_6->addWidget(spinBox_count, 5, 1, 1, 1);

        comboBox_type_transport = new QComboBox(tab_4);
        comboBox_type_transport->setObjectName(QString::fromUtf8("comboBox_type_transport"));

        gridLayout_6->addWidget(comboBox_type_transport, 1, 1, 1, 1);

        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 2, 0, 1, 1);

        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 1, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        pB_save_new_order = new QPushButton(tab_4);
        pB_save_new_order->setObjectName(QString::fromUtf8("pB_save_new_order"));

        gridLayout_7->addWidget(pB_save_new_order, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 3, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_12 = new QGridLayout(tab_3);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tableView_archive = new QTableView(tab_3);
        tableView_archive->setObjectName(QString::fromUtf8("tableView_archive"));

        gridLayout_12->addWidget(tableView_archive, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 613, 21));
        User->setMenuBar(menubar);
        statusbar = new QStatusBar(User);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        User->setStatusBar(statusbar);
        QWidget::setTabOrder(tabWidget, lineE_surname);
        QWidget::setTabOrder(lineE_surname, lineEdit_name);
        QWidget::setTabOrder(lineEdit_name, lineEdit_middle_name);
        QWidget::setTabOrder(lineEdit_middle_name, lineE_passwd);
        QWidget::setTabOrder(lineE_passwd, lineE_passwd_confirm);
        QWidget::setTabOrder(lineE_passwd_confirm, lineEdit_phone);
        QWidget::setTabOrder(lineEdit_phone, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, pushButton_change_acc);
        QWidget::setTabOrder(pushButton_change_acc, pB_save_info);
        QWidget::setTabOrder(pB_save_info, tableView_cur_orders);
        QWidget::setTabOrder(tableView_cur_orders, comboBox_type_product);
        QWidget::setTabOrder(comboBox_type_product, comboBox_type_transport);
        QWidget::setTabOrder(comboBox_type_transport, comboBox_route_number);
        QWidget::setTabOrder(comboBox_route_number, spinBox_count);
        QWidget::setTabOrder(spinBox_count, pB_save_new_order);
        QWidget::setTabOrder(pB_save_new_order, tableView_archive);

        retranslateUi(User);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "\320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        pB_save_info->setText(QCoreApplication::translate("User", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("User", "* \320\237\320\276\320\273\321\217, \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\272 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216", nullptr));
        pushButton_change_acc->setText(QCoreApplication::translate("User", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("User", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("User", "\320\230\320\274\321\217*", nullptr));
        lbl_login->setText(QCoreApplication::translate("User", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("User", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275*", nullptr));
        label_7->setText(QCoreApplication::translate("User", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\277\320\276\321\207\321\202\320\260*", nullptr));
        lbl_passwd->setText(QCoreApplication::translate("User", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("User", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217*", nullptr));
        label_5->setText(QCoreApplication::translate("User", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276*", nullptr));
        label_login->setText(QCoreApplication::translate("User", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("User", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("User", "\320\242\320\265\320\272\321\203\321\211\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\321\213", nullptr));
        label_8->setText(QCoreApplication::translate("User", "\320\242\320\270\320\277 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_17->setText(QCoreApplication::translate("User", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_13->setText(QCoreApplication::translate("User", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("User", "\320\242\320\270\320\277 \321\202\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        pB_save_new_order->setText(QCoreApplication::translate("User", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("User", "\320\235\320\276\320\262\321\213\320\271 \320\267\320\260\320\272\320\260\320\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("User", "\320\220\321\200\321\205\320\270\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
