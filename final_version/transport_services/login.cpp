#include "login.h"
#include "./ui_login.h"



Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("E:/course_work/final_version/transport_services/sqlitedb.db");
    //mydb.setDatabaseName("..//sqlitedb.db");

    if(!mydb.open()){
        QMessageBox::warning(this, "Ошибка!", "Невозможно установить соединение с базой данных!");
        this->close();
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
                admin = new Admin(login);
                admin->show();
                this->close();
            }
            else{
                user = new User(login);
                user->show();
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
