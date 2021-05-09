#include "operator.h"
#include "ui_operator.h"

Operator::Operator(QString login, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Operator),
    cur_login(login)
{
    ui->setupUi(this);

    QSqlQueryModel *cur_orders = new QSqlQueryModel();
    cur_orders->setQuery("select * from orders");
    ui->tableView_cur_orders->setModel(cur_orders);
}

Operator::~Operator()
{
    delete ui;
}

void Operator::on_pB_save_info_clicked()
{
    QString login = "";
    QString passwd = "";
    QString passwd_confirm = "";
    QString name = "";
    QString surname = "";
    QString middle_name = "";

    login = ui->lineE_login->text();
    passwd = ui->lineE_passwd->text();
    name = ui->lineEdit_name->text();
    surname = ui->lineE_surname->text();
    middle_name = ui->lineEdit_middle_name->text();
    passwd_confirm = ui->lineE_passwd_confirm->text();

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
    query.prepare("update Users set password = :pswd, First_name =:name, Last_name =:surname, Middle_name = :m_name where login = :cur_log");

    query.bindValue(":login", login);
    query.bindValue(":pswd", passwd);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":m_name", middle_name);

    qDebug() << cur_login;

    if(!query.exec()){
        qDebug() << "invalid query to change info";
    }
}
