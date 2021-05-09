#include "login.h"
#include "./ui_login.h"



Login::Login(QWidget *parent)
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

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_signIn_clicked()
{
    QString login = "", passwd = "";
    login = ui->lineEdit_login->text();
    passwd = ui->lineEdit_passwd->text();

    int ind = ui->comboBox->currentIndex();

    QSqlQuery query;

    query.prepare("SELECT login, password, role from Users WHERE "
                    "login = :login AND "
                    "password = :password AND "
                    "role = :role");

    query.bindValue(":login", login);
    query.bindValue(":password", passwd);
    query.bindValue(":role", ind);

    if (query.exec())
    {
        int count_rows = 0;
        while(query.next()){
            count_rows++;
        }
        if(count_rows != 0){
            qDebug() << "is logged in";
            if(ind){
                operatr = new Operator(login);
                operatr->show();
                this->close();
            }
            else{
                userMain = new User_main(login);
                userMain->show();
                this->close();
            }

        }
        else
        {
            qDebug() << "Login failed. Invalid username or password.";
            qDebug()<< login << passwd<< ind;
            QMessageBox::warning(this, "Ошибка!", "Неправильный логин или пароль!");
            return;
        }
    }
    else{
        qDebug() << "Login failed. Invalid query.";
    }

}

void Login::on_pushButton_signUp_clicked()
{
    //this->close();
    //hide();
    sign_up = new SignUp();
    sign_up->show();
}
