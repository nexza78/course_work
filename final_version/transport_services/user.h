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

private:
    Ui::User *ui;
    QString cur_login = "";
    void show_orders(QSqlQueryModel *model, QString table_type);
};

#endif // USER_H
