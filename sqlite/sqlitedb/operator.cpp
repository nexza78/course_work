#include "operator.h"
#include "ui_operator.h"

operator::operator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::operator)
{
    ui->setupUi(this);
}

operator::~operator()
{
delete ui;
}
