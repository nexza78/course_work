#ifndef USER_MAIN_H
#define USER_MAIN_H

#include <QMainWindow>

namespace Ui {
class user_main;
}

class user_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_main(QWidget *parent = nullptr);
    ~user_main();

private:
    Ui::user_main *ui;
};

#endif // USER_MAIN_H
