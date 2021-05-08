#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
//#include<QFileInfo>
#include <QMessageBox>
#include "signup.h"
#include "operator.h"
#include "user_main.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_signIn_clicked();

    void on_pushButton_signUp_clicked();

private:
    Ui::login *ui;
    QSqlDatabase mydb;
    SignUp *sign_up;
    User_main *userMain;
    Operator *operatr;
};
#endif // LOGIN_H
