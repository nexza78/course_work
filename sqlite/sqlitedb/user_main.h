#ifndef USER_MAIN_H
#define USER_MAIN_H

#include <QMainWindow>

namespace Ui {
class User_main;
}

class User_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_main(QWidget *parent = nullptr);
    ~User_main();

private slots:
    void on_pB_confirm_register_clicked();

private:
    Ui::User_main *ui;
};

#endif // USER_MAIN_H
