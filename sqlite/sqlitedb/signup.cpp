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
    QString login = "", passwd = "";
    QString name = "";
    QString surname = "";
    QString middle_name = "";
    QString phone_nmb   = "";
    QString email       = "";

    login = ui->lineE_login->text();
    passwd = ui->lineE_passwd->text();
    name = ui->lineEdit_name->text();
    surname = ui->lineE_surname->text();
    middle_name = ui->lineEdit_middle_name->text();
    phone_nmb = ui->lineEdit_phone_nmb->text();
    email = ui->lineEdit_email->text();

    //здесь - добавить проверку на пустоту и корректность данных

    QSqlQuery query_login;
    query_login.prepare("select login from Users");
    if(query_login.exec()){
        while(query_login.next()){
            QString cur_login = query_login.value(0).toString();
            if(cur_login == login){
                qDebug() << "Login is busy!";
                QMessageBox::warning(this, "Ошибка!", "Логин занят!");
                ui->lineE_login->clear();
                return;
                break;
            }
        }
    }
    else{
        qDebug("signup.cpp query_login: invalid query");
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

    }

}

void SignUp::on_pB_cancel_clicked()
{
    this->close();
}
