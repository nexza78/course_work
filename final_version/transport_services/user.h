#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include<QMessageBox>
#include<QDebug>
#include<QtSql>

namespace Ui {
class User;
}

class User : public QMainWindow
{
    Q_OBJECT

public:
    User(QString login, QWidget *parent = nullptr);
    ~User();

private slots:
    void on_pushButton_change_acc_clicked();

    void on_pB_save_info_clicked();

    void on_pB_save_new_order_clicked();
    void update_order_tables();

private:
    Ui::User *ui;
    QString cur_login = "";
    void show_orders(QSqlQueryModel *orders_tables, QString table_type);
    QSqlQueryModel *cur_orders_model = nullptr;
};

#endif // USER_H
