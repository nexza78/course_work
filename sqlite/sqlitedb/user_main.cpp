#include "user_main.h"
#include "ui_user_main.h"


User_main::User_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_main)
{
    ui->setupUi(this);
}

User_main::~User_main()
{
    delete ui;
}

void User_main::on_pB_confirm_register_clicked()
{

}
