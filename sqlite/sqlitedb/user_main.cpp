#include "user_main.h"
#include "ui_user_main.h"


User_main::User_main(QString login, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_main),
    cur_login(login)
{
    ui->setupUi(this);

    QSqlQueryModel *cur_orders = new QSqlQueryModel();
    QSqlQuery query_orders;
    query_orders.prepare("select * from orders where login = :login and status <> :end_status");
    query_orders.bindValue(":login", cur_login);
    query_orders.bindValue(":end_status", "завершено");
    query_orders.exec();
    cur_orders->setQuery(query_orders);
    ui->tableView_cur_orders->setModel(cur_orders);


    QSqlQueryModel *archive_orders = new QSqlQueryModel();
    QSqlQuery query_archive;
    query_archive.prepare("select * from orders where login = :login and status = :end_status");
    query_archive.bindValue(":login", cur_login);
    query_archive.bindValue(":end_status", "завершено");
    query_archive.exec();
    archive_orders->setQuery(query_archive);
    ui->tableView_archive->setModel(archive_orders);
}

User_main::~User_main()
{
    delete ui;
}



void User_main::on_pB_save_info_clicked()
{
    QString login = "";
    QString passwd = "";
    QString passwd_confirm = "";
    QString name = "";
    QString surname = "";
    QString middle_name = "";
    QString phone = "";
    QString email = "";

    login = ui->lineE_login->text();
    passwd = ui->lineE_passwd->text();
    name = ui->lineEdit_name->text();
    surname = ui->lineE_surname->text();
    middle_name = ui->lineEdit_middle_name->text();
    passwd_confirm = ui->lineE_passwd_confirm->text();
    phone = ui->lineEdit_phone->text();
    email = ui->lineEdit_phone->text();

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

    if(passwd != passwd_confirm){
        QMessageBox::warning(this, "Ошибка!", "Пароли не совпадают!");
        return;
    }

    QSqlQuery query;
    query.prepare("update Users set login = :login, password = :pswd, First_name =:name, Last_name =:surname, Middle_name = :m_name, Phone_number =:phone, Email = :email where login = :cur_log");

    query.bindValue(":login", login);
    query.bindValue(":pswd", passwd);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":m_name", middle_name);
    query.bindValue(":phone", phone);
    query.bindValue(":email", email);

    if(!query.exec()){
        qDebug() <<"user_main: invalid query. impossible to change info";
    }

}

void User_main::on_pushButton_change_acc_clicked()
{

}
