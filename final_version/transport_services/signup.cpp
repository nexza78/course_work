#include "signup.h"
#include "ui_signup.h"


SignUp::SignUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);

}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pB_confirm_register_clicked()
{
    bool bool_login = 0;
    bool bool_passwd = 0;
    bool bool_name = 0;
    bool bool_surname = 0;
    bool bool_middle_name = 0;
    bool bool_phone_nmb   = 0;
    bool bool_email       = 0;

    bool_login = ui->lineE_login->text().isEmpty();
    bool_passwd = ui->lineE_passwd->text().isEmpty();
    bool_name = ui->lineEdit_name->text().isEmpty();
    bool_surname = ui->lineE_surname->text().isEmpty();
    bool_middle_name = ui->lineEdit_middle_name->text().isEmpty();
    bool_phone_nmb = ui->lineEdit_phone_nmb->text().isEmpty();
    bool_email = ui->lineEdit_email->text().isEmpty();

    if(bool_login || bool_passwd || bool_name  || bool_surname  || bool_middle_name || bool_phone_nmb  || bool_email){
        QMessageBox::warning(this, "Ошибка!", "Заполните все поля!");
        return;
    }

    QString login = "";
    QString passwd = "";
    QString confirm_passwd = "";
    QString name = "";
    QString surname = "";
    QString middle_name = "";
    QString phone_nmb   = "";
    QString email       = "";

    login = ui->lineE_login->text();
    passwd = ui->lineE_passwd->text();
    confirm_passwd = ui->line_passwd_confirm->text();
    name = ui->lineEdit_name->text();
    surname = ui->lineE_surname->text();
    middle_name = ui->lineEdit_middle_name->text();
    phone_nmb = ui->lineEdit_phone_nmb->text();
    email = ui->lineEdit_email->text();

    QSqlQuery query_login;
    query_login.prepare("select login from Users");
    if(query_login.exec()){
        while(query_login.next()){
            QString cur_login = query_login.value(0).toString();
            if(cur_login == login){
                QMessageBox::warning(this, "Ошибка!", "Логин занят!");
                ui->lineE_login->clear();
                return;
                break;
            }
        }
    }

    if(confirm_passwd != passwd){
        QMessageBox::warning(this, "Ошибка!", "Пароли не совпадают!");
        return;
    }

    QSqlQuery query;
    query.prepare("insert into Users (login, password, First_name, Last_name, Middle_name, Phone_number, Email)" "values (?, ?, ?, ?, ?, ?, ?)");

    query.addBindValue(login);
    query.addBindValue(passwd);
    query.addBindValue(name);
    query.addBindValue(surname);
    query.addBindValue(middle_name);
    query.addBindValue(phone_nmb);
    query.addBindValue(email);

    if(query.exec()){
            QMessageBox::information(this, "Регистрация", "Вы успешно зарегистрированы!");
            this->close();
    }

}

void SignUp::on_pB_cancel_clicked()
{
    this->close();
}
