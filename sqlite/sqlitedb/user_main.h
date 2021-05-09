#ifndef USER_MAIN_H
#define USER_MAIN_H

#include <QMainWindow>
#include<QMessageBox>
#include<QDebug>
#include<QtSql>

namespace Ui {
class User_main;
}

class User_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_main(QString login, QWidget *parent = nullptr);
    ~User_main();

private slots:
    void on_pB_confirm_register_clicked();

    void on_pB_save_info_clicked();

    void on_pushButton_change_acc_clicked();

private:
    Ui::User_main *ui;
    QString cur_login;
};

#endif // USER_MAIN_H
