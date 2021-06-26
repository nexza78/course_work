#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include <QMessageBox>
#include<QStackedWidget>
#include "signup.h"
#include "admin.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:

    void on_pushButton_signUp_clicked();

    void on_pushButton_signIn_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase mydb;
    SignUp *sign_up;
    User *user;
    Admin *admin;
    QStackedWidget *stackedWidget;
};
#endif // LOGIN_H
