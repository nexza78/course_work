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

private:
    Ui::Admin *ui;
    QString cur_login = "";
    QString selected_prod_type = "";
    QString selected_tr_type = "";
    QString selected_route = "";
    void add_items_combobox_route_number();
    int count_sizes();
};

#endif // ADMIN_H
