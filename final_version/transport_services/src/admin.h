#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class Admin;
}

///@brief Окно оператора
class Admin : public QMainWindow
{
    Q_OBJECT

public:
    /**
    * @brief Конструктор
    * @param login Логин пользователя
    * @param parent Указатель на экземпляр родительского класса
    */
    Admin(QString login, QWidget *parent = nullptr);
    ~Admin();

private slots:

    ///@brief Смена аккаунта
    void on_pushButton_change_acc_clicked();

    ///@brief Сохранение информации о пользователе
    void on_pB_save_info_clicked();

    ///@brief Добавление нового размера
    void on_pushButton_add_size_clicked();

    ///@brief Изменение размера
    void on_pushButton_change_size_clicked();

    ///@brief Удаление размера
    void on_pushButton_del_size_clicked();

    ///@brief Обновление отображаемого размера в поле "текущий размер"
    void update_cur_size();

    ///@brief Сохранить установленные цену, статус и срок сдачи для заказа
    void on_pushButton_save_orders_clicked();

    ///@brief Установить цену
    void on_pushButton_set_price_clicked();

    ///@brief Установить статус
    void on_pushButton_set_status_clicked();

    ///@brief Установить срок сдачи
    void on_pushButton_set_date_clicked();

private:
    Ui::Admin *ui;
    QString cur_login = "";
    QString selected_prod_type = "";
    QString selected_tr_type = "";
    QString selected_route = "";

    ///@brief Обновление маршрутов в комбинированном списке comboBox_route_number
    void update_items_combobox_route_number();

    ///@brief  Обновление ID заказов в комбинированном списке comboBox_ID
    void update_ID_orders();

    /**
     * @brief Отображение текущих или архивных заказов в таблицах
     *
     * @param table_type Выбор типа таблицы
     *                   Равен "cur_orders" для текущих заказов.
     *                   Равен любой другой строке для архивных заказов
     */
    void show_orders(QString table_type);
    /**
     * @brief Добавление или изменение размера по выбору
     * @param chosen Выбранное действие.
     *               Равен 'a' для добавления размера.
     *               Равен любому другому значению для изменения размера
    */
    void insert_update_sizes(char chosen);

signals:
    ///@brief Возврат к окну входа
    void login_window();
};

#endif // ADMIN_H
