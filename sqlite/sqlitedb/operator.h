#ifndef OPERATOR_H
#define OPERATOR_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QMessageBox>

namespace Ui {
class Operator;
}

class Operator : public QMainWindow
{
    Q_OBJECT

public:
    //explicit Operator(QWidget *parent = nullptr);
    explicit Operator(QString login, QWidget *parent = nullptr);
    ~Operator();

private slots:
    void on_pB_save_info_clicked();

private:
    Ui::Operator *ui;
    QString cur_login;
};

#endif // OPERATOR_H
