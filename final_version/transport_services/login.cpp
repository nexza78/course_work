#include "login.h"
#include "./ui_login.h"



Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("E:/course_work/final_version/transport_services/sqlitedb.db");
    mydb.open();
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_signIn_3_clicked()
{
    QString login = "", passwd = "";
    login = ui->lineEdit_login_3->text();
    passwd = ui->lineEdit_passwd_3->text();

    int ind = ui->comboBox_3->currentIndex();

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
            if(ind){
                admin = new Admin(login);
                admin->show();
                connect(admin, &Admin::login_window, this, &Login::show);
                this->hide();
            }
            else{
                user = new User(login);
                user->show();
                connect(user, &User::login_window, this, &Login::show);
                this->hide();


            }
            ui->lineEdit_login_3->clear();
            ui->lineEdit_passwd_3->clear();
        }
        else
        {
            QMessageBox::warning(this, "Ошибка!", "Неправильный логин или пароль!");
            return;
        }
    }
}



void Login::on_pushButton_signUp_3_clicked()
{
    sign_up = new SignUp();
    sign_up->show();
}
