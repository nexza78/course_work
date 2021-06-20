#include "user.h"
#include "ui_user.h"


User::User(QString login, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User),
    cur_login(login)
{
    ui->setupUi(this);

    QSqlQuery query_saved_info;
    query_saved_info.prepare("select login, First_Name, Last_Name, Middle_name, Phone_number, Email from Users where login = :cur_log");
    query_saved_info.bindValue(":cur_log", cur_login);
    if(!query_saved_info.exec()){
        qDebug() <<"User: invalid query. impossible to show current info";
    }

    query_saved_info.next();
    ui->label_login->setText(query_saved_info.value(0).toString());
    ui->lineEdit_name->setText(query_saved_info.value(1).toString());
    ui->lineE_surname->setText(query_saved_info.value(2).toString());
    ui->lineEdit_middle_name->setText(query_saved_info.value(3).toString());
    ui->lineEdit_phone->setText(query_saved_info.value(4).toString());
    ui->lineEdit_email->setText(query_saved_info.value(5).toString());

    cur_orders_model = new QSqlQueryModel();
    show_orders(cur_orders_model, "cur_orders");

    QSqlQueryModel *archive_model = new QSqlQueryModel();
    show_orders(archive_model, "archive_orders");

    QStringList types_product;
    types_product << "путь следования" << "объемный номер" << "расписание";
    ui->comboBox_type_product->addItems(types_product);

    QStringList types_transport;
    types_transport << "троллейбус" << "автобус "<< "маршрутное такси";
    ui->comboBox_type_transport->addItems(types_transport);

    QSqlQuery query_routes;
    query_routes.prepare("select Distinct route_number from Products");
    query_routes.exec();
    while(query_routes.next()){
        ui->comboBox_route_number->addItem(query_routes.value(0).toString());
    }
}

User::~User()
{
    delete ui;
}

void User::on_pB_save_info_clicked()
{
    bool bool_name = 0;
    bool bool_surname = 0;
    bool bool_middle_name = 0;
    bool bool_phone_nmb   = 0;
    bool bool_email       = 0;

    bool_name = ui->lineEdit_name->text().isEmpty();
    bool_surname = ui->lineE_surname->text().isEmpty();
    bool_middle_name = ui->lineEdit_middle_name->text().isEmpty();
    bool_phone_nmb = ui->lineEdit_phone->text().isEmpty();
    bool_email = ui->lineEdit_email->text().isEmpty();

    if(bool_name  || bool_surname  || bool_middle_name || bool_phone_nmb  || bool_email){
        QMessageBox::warning(this, "Ошибка!", "Заполните все поля!");
        return;
    }

    QString passwd = "";
    QString confirm_passwd = "";
    QString name = "";
    QString surname = "";
    QString middle_name = "";
    QString phone_nmb   = "";
    QString email       = "";


    passwd = ui->lineE_passwd->text();
    confirm_passwd = ui->lineE_passwd_confirm->text();
    name = ui->lineEdit_name->text();
    surname = ui->lineE_surname->text();
    middle_name = ui->lineEdit_middle_name->text();
    phone_nmb = ui->lineEdit_phone->text();
    email = ui->lineEdit_email->text();
    qDebug() << name << ' ' << surname << ' ';

    //проверка на корректность - ?
    bool bool_passwd = 0;
    bool bool_passwd_confirm = 0;

    bool_passwd = ui->lineE_passwd->text().isEmpty();
    bool_passwd_confirm = ui->lineE_passwd_confirm->text().isEmpty();


    QSqlQuery query;
    if(!bool_passwd || !bool_passwd_confirm){
        if(confirm_passwd != passwd){
            QMessageBox::warning(this, "Ошибка!", "Пароли не совпадают!");
            return;
        }
        else{
            query.prepare("update Users set password = :pswd, First_Name =:name, Last_Name =:surname, Middle_name = :m_name, Phone_number =:phone, Email = :email where login = :cur_log");
            query.bindValue(":pswd", passwd);
        }
    }
    else{
        query.prepare("update Users set First_Name =:name, Last_Name =:surname, Middle_name = :m_name, Phone_number =:phone, Email = :email where login = :cur_log");
    }
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":m_name", middle_name);
    query.bindValue(":phone", phone_nmb);
    query.bindValue(":email", email);
    query.bindValue(":cur_log", cur_login);
    if(query.exec()){
        QMessageBox::information(this, "Информация о пользователе", "Данные сохранены!");
    }
    else{
        qDebug() <<"User: invalid query. impossible to change info";
    }

}

void User::on_pushButton_change_acc_clicked()
{
    //login_ptr = new Login();
    //login_ptr->show();
    //this->close();
}


void User::show_orders(QSqlQueryModel *orders_tables, QString table_type){

    QSqlQuery query_orders;
    if(table_type == "cur_orders"){
        query_orders.prepare("select Products.product_type, Products.type_transport, Products.route_number, "
                             "Products.width, Products.height, Products.thickness, Orders.price, Orders.status, Orders.deadline, "
                                "Orders.kolvo from Orders inner join Products on Products.ID_products = Orders.ID_products where Orders.login = :login and Orders.status <> :end_status");
    }else{
        query_orders.prepare("select Products.product_type, Products.type_transport, Products.route_number, "
                             "Products.width, Products.height, Products.thickness, Orders.price, Orders.status, Orders.deadline, "
                                "Orders.kolvo from Orders inner join Products on Products.ID_products = Orders.ID_products where Orders.login = :login and Orders.status = :end_status");
    }

    query_orders.bindValue(":login", cur_login);
    query_orders.bindValue(":end_status", "Завершен");
    qDebug() << query_orders.exec();
    orders_tables->setQuery(query_orders);

    orders_tables->setHeaderData(0, Qt::Horizontal, "Тип продукта");
    orders_tables->setHeaderData(1, Qt::Horizontal, "Тип транспорта");
    orders_tables->setHeaderData(2, Qt::Horizontal, "Номер маршрута");
    orders_tables->setHeaderData(3, Qt::Horizontal, "Ширина");
    orders_tables->setHeaderData(4, Qt::Horizontal, "Высота");
    orders_tables->setHeaderData(5, Qt::Horizontal, "Толщина");
    orders_tables->setHeaderData(6, Qt::Horizontal, "Цена");
    orders_tables->setHeaderData(7, Qt::Horizontal, "Статус");
    orders_tables->setHeaderData(8, Qt::Horizontal, "Срок сдачи");
    orders_tables->setHeaderData(9, Qt::Horizontal, "Количество");

    if(table_type == "cur_orders"){
        ui->tableView_cur_orders->setModel(orders_tables);
    }
    else{
        ui->tableView_archive->setModel(orders_tables);
    }
}

void User::on_pB_save_new_order_clicked()
{
    QString selected_product = ui->comboBox_type_product->currentText();
    QString selected_transport = ui->comboBox_type_transport->currentText();
    QString selected_route_number = ui->comboBox_route_number->currentText();
    int selected_kolvo = ui->spinBox_count->value();

    if(selected_route_number == ""){
        QMessageBox::information(this, "Новый заказ", "Нет доступных маршрутов, заказ не будет сохранен!");
        return;
    }

    QSqlQuery query_match_info;
    query_match_info.prepare("select ID_products from Products where product_type = :selected_product and type_transport =:selected_transport and route_number = :selected_route_number and deleted = 0");

    query_match_info.bindValue(":selected_product", selected_product);
    query_match_info.bindValue(":selected_transport", selected_transport);
    query_match_info.bindValue(":selected_route_number", selected_route_number);

    query_match_info.exec();
    int ID_products = -1;
    if(query_match_info.next()){
        ID_products = query_match_info.value(0).toInt();
    }
    else{
        QMessageBox::information(this, "Новый заказ", "Выбранный тип изделия для этого маршрута не поддерживается.");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Новый заказ", "Вы собираетесь добавить новый заказ. Отменить его будет невозможно. Продолжить? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";
      QSqlQuery query_new_order;
      query_new_order.prepare("insert into Orders (login, kolvo,ID_products) values (:login, :kolvo, :id)");
      query_new_order.bindValue(":login", cur_login);
      query_new_order.bindValue(":kolvo", selected_kolvo);
      query_new_order.bindValue(":id", ID_products);

      query_new_order.exec();

      show_orders(cur_orders_model, "cur_orders");
      //connect(ui->tableView_cur_orders, SIGNAL(currentTextChanged(QString)), this, );

    } else {
      qDebug() << "Yes was *not* clicked";
      return;
    }
}

void User::update_order_tables(){
    show_orders( cur_orders_model, "cur_orders");
}
