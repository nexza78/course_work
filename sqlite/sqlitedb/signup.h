#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QMessageBox>


namespace Ui {
class SignUp;
}

class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pB_confirm_register_clicked();

    void on_pB_cancel_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
