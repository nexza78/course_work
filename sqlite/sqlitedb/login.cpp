#include "login.h"
#include "./ui_login.h"



login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("E:/projects_3sem/db/sqlitedb.db");

    if(!mydb.open()){
        ui->label->setText("Ошибка при соединении с базой данных!");
    }else{
        ui->label->setText("Соединение с базой данных установлено!");
    }
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_signIn_clicked()
{
    QString login = "", passwd = "";
    login = ui->lineEdit_login->text();
    passwd = ui->lineEdit_passwd->text();

}
