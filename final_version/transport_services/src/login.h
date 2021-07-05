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

///@brief Окно входа
class Login : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Конструктор
     * @param parent Указатель на экземпляр родительского класса
     */
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    ///@brief Открытие окна регистрации
    void on_pushButton_signUp_clicked();
    ///@brief Войти
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
