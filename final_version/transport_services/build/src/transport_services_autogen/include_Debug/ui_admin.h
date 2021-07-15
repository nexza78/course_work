/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_5;
    QPushButton *pB_save_info;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_middle_name;
    QLabel *lbl_passwd;
    QLineEdit *lineEdit_name;
    QLineEdit *lineE_passwd_confirm;
    QLineEdit *lineE_surname;
    QLabel *label_5;
    QLineEdit *lineE_passwd;
    QLabel *lbl_login;
    QLabel *label_login;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_change_acc;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QTableView *tableView_cur_orders;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_set_status;
    QLabel *label_2;
    QPushButton *pushButton_set_date;
    QLabel *label_20;
    QDateEdit *dateEdit;
    QPushButton *pushButton_set_price;
    QSpinBox *spinBox_price;
    QLabel *label_7;
    QComboBox *comboBox_set_status;
    QComboBox *comboBox_ID;
    QLabel *label_11;
    QPushButton *pushButton_save_orders;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_6;
    QComboBox *comboBox_transport_type;
    QLabel *label_10;
    QSpinBox *spinBox_height;
    QPushButton *pushButton_add_size;
    QLabel *label_13;
    QLabel *label_cur_size;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_18;
    QSpinBox *spinBox_thickness;
    QComboBox *comboBox_product_type;
    QSpinBox *spinBox_width;
    QLabel *label_8;
    QPushButton *pushButton_del_size;
    QComboBox *comboBox_route_number;
    QLabel *label_12;
    QLabel *label_9;
    QPushButton *pushButton_change_size;
    QLabel *label_19;
    QLineEdit *lineEdit_new_route;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_12;
    QTableView *tableView_archive;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(705, 494);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Admin->setWindowIcon(icon);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_9 = new QGridLayout(page);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pB_save_info = new QPushButton(tab);
        pB_save_info->setObjectName(QString::fromUtf8("pB_save_info"));

        gridLayout_5->addWidget(pB_save_info, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 5, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 122, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 1, 1, 1);

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

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_middle_name = new QLineEdit(tab);
        lineEdit_middle_name->setObjectName(QString::fromUtf8("lineEdit_middle_name"));
        sizePolicy.setHeightForWidth(lineEdit_middle_name->sizePolicy().hasHeightForWidth());
        lineEdit_middle_name->setSizePolicy(sizePolicy);
        lineEdit_middle_name->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_middle_name, 2, 1, 1, 1);

        lbl_passwd = new QLabel(tab);
        lbl_passwd->setObjectName(QString::fromUtf8("lbl_passwd"));
        lbl_passwd->setEnabled(true);
        sizePolicy.setHeightForWidth(lbl_passwd->sizePolicy().hasHeightForWidth());
        lbl_passwd->setSizePolicy(sizePolicy);
        lbl_passwd->setBaseSize(QSize(0, 0));
        lbl_passwd->setFocusPolicy(Qt::NoFocus);
        lbl_passwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lbl_passwd, 4, 0, 1, 1);

        lineEdit_name = new QLineEdit(tab);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);
        lineEdit_name->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        lineE_passwd_confirm = new QLineEdit(tab);
        lineE_passwd_confirm->setObjectName(QString::fromUtf8("lineE_passwd_confirm"));
        sizePolicy.setHeightForWidth(lineE_passwd_confirm->sizePolicy().hasHeightForWidth());
        lineE_passwd_confirm->setSizePolicy(sizePolicy);
        lineE_passwd_confirm->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineE_passwd_confirm, 5, 1, 1, 1);

        lineE_surname = new QLineEdit(tab);
        lineE_surname->setObjectName(QString::fromUtf8("lineE_surname"));
        sizePolicy.setHeightForWidth(lineE_surname->sizePolicy().hasHeightForWidth());
        lineE_surname->setSizePolicy(sizePolicy);
        lineE_surname->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineE_surname, 0, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

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

        label_login = new QLabel(tab);
        label_login->setObjectName(QString::fromUtf8("label_login"));

        gridLayout->addWidget(label_login, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(248, 115, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        pushButton_change_acc = new QPushButton(tab);
        pushButton_change_acc->setObjectName(QString::fromUtf8("pushButton_change_acc"));

        gridLayout_3->addWidget(pushButton_change_acc, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableView_cur_orders = new QTableView(tab_2);
        tableView_cur_orders->setObjectName(QString::fromUtf8("tableView_cur_orders"));

        gridLayout_4->addWidget(tableView_cur_orders, 0, 0, 6, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        pushButton_set_status = new QPushButton(tab_2);
        pushButton_set_status->setObjectName(QString::fromUtf8("pushButton_set_status"));

        gridLayout_10->addWidget(pushButton_set_status, 2, 2, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_2, 1, 0, 1, 1);

        pushButton_set_date = new QPushButton(tab_2);
        pushButton_set_date->setObjectName(QString::fromUtf8("pushButton_set_date"));

        gridLayout_10->addWidget(pushButton_set_date, 3, 2, 1, 1);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_10->addWidget(label_20, 3, 0, 1, 1);

        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumDate(QDate(2020, 9, 1));

        gridLayout_10->addWidget(dateEdit, 3, 1, 1, 1);

        pushButton_set_price = new QPushButton(tab_2);
        pushButton_set_price->setObjectName(QString::fromUtf8("pushButton_set_price"));

        gridLayout_10->addWidget(pushButton_set_price, 1, 2, 1, 1);

        spinBox_price = new QSpinBox(tab_2);
        spinBox_price->setObjectName(QString::fromUtf8("spinBox_price"));
        spinBox_price->setMaximum(300000);

        gridLayout_10->addWidget(spinBox_price, 1, 1, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_7, 2, 0, 1, 1);

        comboBox_set_status = new QComboBox(tab_2);
        comboBox_set_status->setObjectName(QString::fromUtf8("comboBox_set_status"));

        gridLayout_10->addWidget(comboBox_set_status, 2, 1, 1, 1);

        comboBox_ID = new QComboBox(tab_2);
        comboBox_ID->setObjectName(QString::fromUtf8("comboBox_ID"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_ID->sizePolicy().hasHeightForWidth());
        comboBox_ID->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(comboBox_ID, 0, 1, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_11, 0, 0, 1, 1);

        pushButton_save_orders = new QPushButton(tab_2);
        pushButton_save_orders->setObjectName(QString::fromUtf8("pushButton_save_orders"));

        gridLayout_10->addWidget(pushButton_save_orders, 4, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_10, 0, 2, 6, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_7->addWidget(label_21, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 4, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 0, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        comboBox_transport_type = new QComboBox(tab_4);
        comboBox_transport_type->setObjectName(QString::fromUtf8("comboBox_transport_type"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_transport_type->sizePolicy().hasHeightForWidth());
        comboBox_transport_type->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(comboBox_transport_type, 1, 1, 1, 1);

        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 9, 0, 1, 1);

        spinBox_height = new QSpinBox(tab_4);
        spinBox_height->setObjectName(QString::fromUtf8("spinBox_height"));
        spinBox_height->setMaximum(3000);

        gridLayout_6->addWidget(spinBox_height, 8, 1, 1, 1);

        pushButton_add_size = new QPushButton(tab_4);
        pushButton_add_size->setObjectName(QString::fromUtf8("pushButton_add_size"));

        gridLayout_6->addWidget(pushButton_add_size, 10, 1, 1, 1);

        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 2, 0, 1, 1);

        label_cur_size = new QLabel(tab_4);
        label_cur_size->setObjectName(QString::fromUtf8("label_cur_size"));

        gridLayout_6->addWidget(label_cur_size, 4, 1, 1, 1);

        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_6->addWidget(label_17, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 5, 1, 1, 1);

        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_6->addWidget(label_18, 4, 0, 1, 1);

        spinBox_thickness = new QSpinBox(tab_4);
        spinBox_thickness->setObjectName(QString::fromUtf8("spinBox_thickness"));
        spinBox_thickness->setMaximum(100);

        gridLayout_6->addWidget(spinBox_thickness, 9, 1, 1, 1);

        comboBox_product_type = new QComboBox(tab_4);
        comboBox_product_type->setObjectName(QString::fromUtf8("comboBox_product_type"));
        sizePolicy2.setHeightForWidth(comboBox_product_type->sizePolicy().hasHeightForWidth());
        comboBox_product_type->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(comboBox_product_type, 0, 1, 1, 1);

        spinBox_width = new QSpinBox(tab_4);
        spinBox_width->setObjectName(QString::fromUtf8("spinBox_width"));
        spinBox_width->setMaximum(3000);

        gridLayout_6->addWidget(spinBox_width, 7, 1, 1, 1);

        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        pushButton_del_size = new QPushButton(tab_4);
        pushButton_del_size->setObjectName(QString::fromUtf8("pushButton_del_size"));

        gridLayout_6->addWidget(pushButton_del_size, 4, 2, 1, 1);

        comboBox_route_number = new QComboBox(tab_4);
        comboBox_route_number->setObjectName(QString::fromUtf8("comboBox_route_number"));
        sizePolicy2.setHeightForWidth(comboBox_route_number->sizePolicy().hasHeightForWidth());
        comboBox_route_number->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(comboBox_route_number, 2, 1, 1, 1);

        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 1, 0, 1, 1);

        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 8, 0, 1, 1);

        pushButton_change_size = new QPushButton(tab_4);
        pushButton_change_size->setObjectName(QString::fromUtf8("pushButton_change_size"));

        gridLayout_6->addWidget(pushButton_change_size, 11, 1, 1, 1);

        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_6->addWidget(label_19, 6, 0, 1, 1);

        lineEdit_new_route = new QLineEdit(tab_4);
        lineEdit_new_route->setObjectName(QString::fromUtf8("lineEdit_new_route"));
        sizePolicy1.setHeightForWidth(lineEdit_new_route->sizePolicy().hasHeightForWidth());
        lineEdit_new_route->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(lineEdit_new_route, 6, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 2, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_12 = new QGridLayout(tab_3);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tableView_archive = new QTableView(tab_3);
        tableView_archive->setObjectName(QString::fromUtf8("tableView_archive"));

        gridLayout_12->addWidget(tableView_archive, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_9->addWidget(tabWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 705, 21));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Admin->setStatusBar(statusbar);
        QWidget::setTabOrder(tabWidget, lineE_surname);
        QWidget::setTabOrder(lineE_surname, lineEdit_name);
        QWidget::setTabOrder(lineEdit_name, lineEdit_middle_name);
        QWidget::setTabOrder(lineEdit_middle_name, lineE_passwd);
        QWidget::setTabOrder(lineE_passwd, lineE_passwd_confirm);
        QWidget::setTabOrder(lineE_passwd_confirm, pushButton_change_acc);
        QWidget::setTabOrder(pushButton_change_acc, pB_save_info);
        QWidget::setTabOrder(pB_save_info, tableView_cur_orders);
        QWidget::setTabOrder(tableView_cur_orders, comboBox_ID);
        QWidget::setTabOrder(comboBox_ID, spinBox_price);
        QWidget::setTabOrder(spinBox_price, pushButton_set_price);
        QWidget::setTabOrder(pushButton_set_price, comboBox_set_status);
        QWidget::setTabOrder(comboBox_set_status, pushButton_set_status);
        QWidget::setTabOrder(pushButton_set_status, dateEdit);
        QWidget::setTabOrder(dateEdit, pushButton_set_date);
        QWidget::setTabOrder(pushButton_set_date, pushButton_save_orders);
        QWidget::setTabOrder(pushButton_save_orders, comboBox_product_type);
        QWidget::setTabOrder(comboBox_product_type, comboBox_transport_type);
        QWidget::setTabOrder(comboBox_transport_type, comboBox_route_number);
        QWidget::setTabOrder(comboBox_route_number, pushButton_del_size);
        QWidget::setTabOrder(pushButton_del_size, lineEdit_new_route);
        QWidget::setTabOrder(lineEdit_new_route, spinBox_width);
        QWidget::setTabOrder(spinBox_width, spinBox_height);
        QWidget::setTabOrder(spinBox_height, spinBox_thickness);
        QWidget::setTabOrder(spinBox_thickness, pushButton_add_size);
        QWidget::setTabOrder(pushButton_add_size, pushButton_change_size);
        QWidget::setTabOrder(pushButton_change_size, tableView_archive);

        retranslateUi(Admin);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));
        pB_save_info->setText(QCoreApplication::translate("Admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Admin", "* \320\237\320\276\320\273\321\217, \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\272 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216", nullptr));
        label_6->setText(QCoreApplication::translate("Admin", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217*", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "\320\230\320\274\321\217*", nullptr));
        lbl_passwd->setText(QCoreApplication::translate("Admin", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276*", nullptr));
        lbl_login->setText(QCoreApplication::translate("Admin", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_login->setText(QCoreApplication::translate("Admin", "...", nullptr));
        pushButton_change_acc->setText(QCoreApplication::translate("Admin", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Admin", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        pushButton_set_status->setText(QCoreApplication::translate("Admin", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "\320\246\320\265\320\275\320\260", nullptr));
        pushButton_set_date->setText(QCoreApplication::translate("Admin", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", nullptr));
        label_20->setText(QCoreApplication::translate("Admin", "\320\224\320\260\321\202\320\260 \321\201\320\264\320\260\321\207\320\270", nullptr));
        pushButton_set_price->setText(QCoreApplication::translate("Admin", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\206\320\265\320\275\321\203", nullptr));
        label_7->setText(QCoreApplication::translate("Admin", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        label_11->setText(QCoreApplication::translate("Admin", "ID \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        pushButton_save_orders->setText(QCoreApplication::translate("Admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Admin", "\320\242\320\265\320\272\321\203\321\211\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\321\213", nullptr));
        label_21->setText(QCoreApplication::translate("Admin", "* \321\200\320\260\320\267\320\274\320\265\321\200 \320\264\320\260\320\275 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265  \320\250 \321\205 \320\222 \321\205 \320\242", nullptr));
        label_10->setText(QCoreApplication::translate("Admin", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260", nullptr));
        pushButton_add_size->setText(QCoreApplication::translate("Admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271  \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        label_13->setText(QCoreApplication::translate("Admin", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        label_cur_size->setText(QCoreApplication::translate("Admin", "...", nullptr));
        label_17->setText(QCoreApplication::translate("Admin", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
        label_18->setText(QCoreApplication::translate("Admin", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\200\320\260\320\267\320\274\320\265\321\200*", nullptr));
        label_8->setText(QCoreApplication::translate("Admin", "\320\242\320\270\320\277 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        pushButton_del_size->setText(QCoreApplication::translate("Admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        label_12->setText(QCoreApplication::translate("Admin", "\320\242\320\270\320\277 \321\202\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("Admin", "\320\222\321\213\321\201\320\276\321\202\320\260", nullptr));
        pushButton_change_size->setText(QCoreApplication::translate("Admin", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        label_19->setText(QCoreApplication::translate("Admin", "\320\235\320\276\320\262\321\213\320\271 \320\274\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Admin", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Admin", "\320\220\321\200\321\205\320\270\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
