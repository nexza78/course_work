#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include<QMessageBox>
#include<QDebug>
#include<QtSql>
#include<QStackedWidget>

namespace Ui {
class User;
}

///@brief Окно заказчика
class User : public QMainWindow
{
    Q_OBJECT

public:
    User(QString login, QWidget *parent = nullptr);
    ~User();

private slots:
    ///@brief Смена аккаунта
    void on_pushButton_change_acc_clicked();
    ///@brief Сохранение информации о пользователе
    void on_pB_save_info_clicked();
    ///@brief Сохранение нового заказа
    void on_pB_save_new_order_clicked();
    ///@brief Обновление таблицы текущих заказов
    void update_order_tables();

private:
    Ui::User *ui;
    QString cur_login = "";
    QSqlQueryModel *cur_orders_model = nullptr;
    /**
     * @brief Отображение текущих или архивных заказов в таблицах
     *
     * @param orders_tables
     *
     * @param table_type Выбор типа таблицы.
     *          Равен "cur_orders" для текущих заказов.
     *          Равен "archive" для архивных заказов
     */
    void show_orders(QSqlQueryModel *orders_tables, QString table_type);

signals:
    ///@brief Возврат в окну входа
    void login_window();
};

#endif // USER_H
