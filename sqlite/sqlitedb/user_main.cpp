#include "user_main.h"
#include "ui_user_main.h"

user_main::user_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_main)
{
    ui->setupUi(this);
}

user_main::~user_main()
{
    delete ui;
}
