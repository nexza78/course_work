#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class SignUp;
}

///@brief Окно регистрации
class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Конструктор
     * @param parent Указатель на экземпляр родительского класса
     */
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    ///@brief Зарегистрироваться
    void on_pB_confirm_register_clicked();
    ///@brief Отмена регистрации
    void on_pB_cancel_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
