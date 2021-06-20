#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QMessageBox>

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    Admin(QString login, QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButton_change_acc_clicked();
    void on_pB_save_info_clicked();
    void on_pushButton_add_size_clicked();
    void update_cur_size();
    void on_pushButton_del_size_clicked();
    void on_pushButton_change_size_clicked();

    void on_pushButton_save_orders_clicked();

    void on_pushButton_set_price_clicked();

    void on_pushButton_set_status_clicked();

    void on_pushButton_set_date_clicked();

private:
    Ui::Admin *ui;
    QString cur_login = "";
    QString selected_prod_type = "";
    QString selected_tr_type = "";
    QString selected_route = "";
    QSqlQueryModel *cur_orders_model = nullptr;
    QSqlQueryModel *archive_model = nullptr;
    void add_items_combobox_route_number();
    void add_ID_orders();
    int count_sizes();
    void show_orders(QSqlQueryModel *orders_tables, QString table_type);
    void insert_update_sizes(char chosen);
};

#endif // ADMIN_H
