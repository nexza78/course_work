#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QString login, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin),
    cur_login(login)
{
    ui->setupUi(this);

    QSqlQueryModel *cur_orders = new QSqlQueryModel();
    cur_orders->setQuery("select * from orders");
    ui->tableView_cur_orders->setModel(cur_orders);


    //заполнение комбобоксов
    QStringList types_product;
    QStringList types_transport;
    QStringList statuses;

    types_product << "путь следования" << "объемный номер" << "расписание";
    types_transport << "троллейбус" << "автобус "<< "маршрутное такси";
    statuses << "В процессе обработки" << "Ожидается платеж" << "Выполняется" <<"Завершен";

    ui->comboBox_product_type->addItems(types_product);
    ui->comboBox_transport_type->addItems(types_transport);
    ui->comboBox_set_status->addItems(statuses);
    add_items_combobox_route_number();

    //конец заполнения

    connect(ui->comboBox_product_type, SIGNAL(currentTextChanged(QString)), this, SLOT(update_cur_size()));
    connect(ui->comboBox_transport_type, SIGNAL(currentTextChanged(QString)), this, SLOT(update_cur_size()));
    connect(ui->comboBox_route_number, SIGNAL(currentTextChanged(QString)), this, SLOT(update_cur_size()));

    update_cur_size();
    add_ID_orders();

    archive_model = new QSqlQueryModel();
    show_orders(archive_model, "archive");
    cur_orders_model = new QSqlQueryModel();
    show_orders(cur_orders_model, "cur_orders");
}

void Admin::add_ID_orders(){
    ui->comboBox_ID->clear();
    QSqlQuery id_order;
    id_order.prepare("select ID_order from Orders where status <> :end_status");
    id_order.bindValue(":end_status", "Завершен");

    id_order.exec();

    while(id_order.next()){
       ui->comboBox_ID->addItem(id_order.value(0).toString());
    }
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pB_save_info_clicked()
{
    QString passwd = "";
    QString passwd_confirm = "";
    QString name = "";
    QString surname = "";
    QString middle_name = "";

    passwd = ui->lineE_passwd->text();
    name = ui->lineEdit_name->text();
    surname = ui->lineE_surname->text();
    middle_name = ui->lineEdit_middle_name->text();
    passwd_confirm = ui->lineE_passwd_confirm->text();

    QSqlQuery query;
    query.prepare("update Users set password = :pswd, First_name =:name, Last_name =:surname, Middle_name = :m_name where login = :cur_log");

    query.bindValue(":cur_log", cur_login);
    query.bindValue(":pswd", passwd);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":m_name", middle_name);

    qDebug() << cur_login;

    if(!query.exec()){
        qDebug() << "invalid query to change info";
    }
}

void Admin::on_pushButton_change_acc_clicked()
{

}

void Admin::on_pushButton_add_size_clicked()
{
    QString selected_prod_type = ui->comboBox_product_type->currentText();
    QString selected_tr_type = ui->comboBox_transport_type->currentText();
    QString new_route = ui->lineEdit_new_route->text();

    int width = ui->spinBox_width->value();
    int height = ui->spinBox_height->value();
    int thickness = ui->spinBox_thickness->value();

    if(width == 0 || height == 0){
        QMessageBox::information(this, "Добавление размера", "Указан неверный размер.");
        return;
    }

    if(thickness == 0 && selected_prod_type == "объемный номер"){
        QMessageBox::information(this, "Добавление размера", "Указанный размер невозможен для данного изделия.");
        return;
    }

    if(new_route == ""){
        QMessageBox::information(this, "Добавление размера", "Не указан маршрут.");
        return;
    }

    QSqlQuery cur_size;
    cur_size.prepare("select * from Products where product_type = :prod_type and type_transport = :tr_type and route_number = :route and deleted = 0");
    cur_size.bindValue(":prod_type", selected_prod_type);
    cur_size.bindValue(":tr_type", selected_tr_type);
    cur_size.bindValue(":route", new_route);


    QSqlQuery query_add_size;
    if(cur_size.exec()){
        int count = 0;
        if(cur_size.next()){
            count++;
        }

        if(count != 0){
            QMessageBox::information(this, "Добавление размера", "Будет изменен существующий размер.");
            query_add_size.prepare("update Products set width = :width, height = :height, thickness = :thickness where product_type = :selected_product and type_transport = :selected_transport and route_number = :route_number");
        }
        else{
            query_add_size.prepare("insert into Products(product_type, type_transport, route_number, width, height, thickness) values(:selected_product, :selected_transport, :route_number, :width, :height, :thickness)");

        }
    }
    else{
        qDebug()<<"aaaaa admin query";
    }


    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Добавление размера", "Вы уверены, что хотите добавить размер? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";

      query_add_size.bindValue(":selected_product", selected_prod_type);
      query_add_size.bindValue(":selected_transport", selected_tr_type);
      query_add_size.bindValue(":route_number", new_route);
      query_add_size.bindValue(":width", width);
      query_add_size.bindValue(":height", height);
      query_add_size.bindValue(":thickness", thickness);

      if(query_add_size.exec()){
          qDebug()<<  "aaaaaaa admin add size";
          add_items_combobox_route_number();
          update_cur_size();
          return;
      }

      } else {
      qDebug() << "Yes was not clicked";
      return;
    }
}

void Admin::update_cur_size(){
    selected_prod_type = ui->comboBox_product_type->currentText();
    selected_tr_type = ui->comboBox_transport_type->currentText();
    selected_route = ui->comboBox_route_number->currentText();


    QSqlQuery cur_size;
    cur_size.prepare("select width, height, thickness from Products where product_type = :prod_type and type_transport = :tr_type and route_number = :route and deleted = 0");
    cur_size.bindValue(":prod_type", selected_prod_type);
    cur_size.bindValue(":tr_type", selected_tr_type);
    cur_size.bindValue(":route", selected_route);

    if(cur_size.exec()){
        int count = 0;
        if(cur_size.next()){
            count++;
        }

        qDebug() << "asddada" << count << selected_route;
        if(count != 0){
            ui->label_cur_size->setText(cur_size.value(0).toString() + " x " + cur_size.value(1).toString() + " x " + cur_size.value(2).toString());
        }else{
            ui->label_cur_size->setText("Размер не существует");
        }
    }
    else{
        qDebug()<<"aaaaa admin query";
    }
}

void Admin::on_pushButton_del_size_clicked()
{
    QString cur_size = ui->label_cur_size->text();
    if(cur_size == "..." || cur_size == "Размер не существует"){
        QMessageBox::information(this, "Удаление размера", "Выбранный размер не существует");
        return;
    }

    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Удаление размера", "Вы уверены, что хотите удалить размер? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";

      QSqlQuery query_del_size;
      query_del_size.prepare("update Products set deleted = 1 where product_type = :prod_type and type_transport = :tr_type and route_number = :route");
      query_del_size.bindValue(":prod_type", selected_prod_type);
      query_del_size.bindValue(":tr_type", selected_tr_type);
      query_del_size.bindValue(":route", selected_route);

      query_del_size.exec();
      add_items_combobox_route_number();
      update_cur_size();
    }
}

void Admin::on_pushButton_change_size_clicked()
{
    QString cur_size = ui->label_cur_size->text();
    if(cur_size == "..." || cur_size == "Размер не существует"){
        QMessageBox::information(this, "Изменение размера", "Выбранный размер не существует. Изменение размера доступно после его создания.");
        return;
    }

    int width = ui->spinBox_width->value();
    int height = ui->spinBox_height->value();
    int thickness = ui->spinBox_thickness->value();

    if(width == 0 || height == 0){
        QMessageBox::information(this, "Изменение размера", "Указан неверный размер.");
        return;
    }

    if(thickness == 0 && selected_prod_type == "объемный номер"){
        QMessageBox::information(this, "Изменение размера", "Указанный размер невозможен для данного изделия.");
        return;
    }

    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Изменение размера", "Вы уверены, что хотите изменить размер? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";

      QSqlQuery query_match_info;
      query_match_info.prepare("select ID_products from Products where product_type = :selected_product and type_transport =:selected_transport and route_number = :selected_route_number and deleted = 0");

      query_match_info.bindValue(":selected_product", selected_prod_type);
      query_match_info.bindValue(":selected_transport", selected_tr_type);
      query_match_info.bindValue(":selected_route_number", selected_route);

      query_match_info.exec();

      int ID_products = -1;

      if(query_match_info.next()){
          ID_products = query_match_info.value(0).toInt();
      }

     qDebug() <<  ID_products << selected_prod_type << selected_tr_type << selected_route;
      QSqlQuery query_del_size;
      query_del_size.prepare("update Products set width = :width, height = :height, thickness = :thickness where ID_products = :ID_products");
      query_del_size.bindValue(":width", width);
      query_del_size.bindValue(":height", height);
      query_del_size.bindValue(":thickness", thickness);
      query_del_size.bindValue(":ID_products", ID_products);

      if(query_del_size.exec()){
          update_cur_size();
      }

      } else {
      qDebug() << "Yes was not clicked";
      return;
    }
}

void Admin::add_items_combobox_route_number(){
    ui->comboBox_route_number->clear();
    QSqlQuery query_routes;
    query_routes.prepare("select Distinct route_number from Products");
    query_routes.exec();
    while(query_routes.next()){
        ui->comboBox_route_number->addItem(query_routes.value(0).toString());
    }
}

void Admin::show_orders(QSqlQueryModel *model, QString table_type){
    QSqlQuery query_orders;
    if(table_type == "cur_orders"){
        query_orders.prepare("select Orders.Id_order, Products.product_type, Products.type_transport, Products.route_number, Products.width, Products.height, Products.thickness, Orders.price, Orders.status, Orders.deadline, Orders.kolvo, Users.Last_Name, Users.First_name, Users.Middle_name, Users.Phone_number, Users.Email from Orders inner join Products on Products.ID_products = Orders.ID_products inner join Users on Users.login = Orders.login where Orders.status <> :end_status");
    }else{
        query_orders.prepare("select Orders.Id_order, Products.product_type, Products.type_transport, Products.route_number, Products.width, Products.height, Products.thickness, Orders.price, Orders.status, Orders.deadline, Orders.kolvo, Users.Last_Name, Users.First_name, Users.Middle_name, Users.Phone_number, Users.Email from Orders inner join Products on Products.ID_products = Orders.ID_products inner join Users on Users.login = Orders.login where Orders.status = :end_status");
    }

    query_orders.bindValue(":login", cur_login);
    query_orders.bindValue(":end_status", "Завершен");
    query_orders.exec();
    model->setQuery(query_orders);

    model->setHeaderData(0,  Qt::Horizontal, "ID заказа");
    model->setHeaderData(1,  Qt::Horizontal, "Тип продукта");
    model->setHeaderData(2,  Qt::Horizontal, "Тип транспорта");
    model->setHeaderData(3,  Qt::Horizontal, "Номер маршрута");
    model->setHeaderData(4,  Qt::Horizontal, "Ширина");
    model->setHeaderData(5,  Qt::Horizontal, "Высота");
    model->setHeaderData(6,  Qt::Horizontal, "Толщина");
    model->setHeaderData(7,  Qt::Horizontal, "Цена");
    model->setHeaderData(8,  Qt::Horizontal, "Статус");
    model->setHeaderData(9,  Qt::Horizontal, "Срок сдачи");
    model->setHeaderData(10, Qt::Horizontal, "Количество");
    model->setHeaderData(11, Qt::Horizontal, "Фамилия");
    model->setHeaderData(12, Qt::Horizontal, "Имя");
    model->setHeaderData(13, Qt::Horizontal, "Отчество");
    model->setHeaderData(14, Qt::Horizontal, "Телефон");
    model->setHeaderData(15, Qt::Horizontal, "Электронная почта");


    if(table_type == "cur_orders"){
        ui->tableView_cur_orders->setModel(model);
    }
    else{
        ui->tableView_archive->setModel(model);
    }
}

void Admin::on_pushButton_save_orders_clicked()
{
    int Id_order = ui->comboBox_ID->currentText().toInt();
    int price = ui->spinBox_price->value();
    QString status = ui->comboBox_set_status->currentText();
    QDate deadline = ui->dateEdit->date();

    qDebug() << Id_order << " " << price << ' '<< status<< ' ' << deadline;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Обработка заказа", "Вы уверены, что хотите сохранить данные? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";

      QSqlQuery query_add_size;
      query_add_size.prepare("update Orders set price = :price, status = :status, deadline = :deadline where ID_order = :Id");
      query_add_size.bindValue(":price", price);
      query_add_size.bindValue(":status", status);
      query_add_size.bindValue(":deadline", deadline);
      query_add_size.bindValue(":Id", Id_order);

      if(!query_add_size.exec()){
          qDebug()<<":(((((";
      }
      else{
          qDebug()<<":))))))";
      }
      show_orders(archive_model, "archive");
      show_orders(cur_orders_model, "cur_orders");
      add_ID_orders();
    }
}

void Admin::on_pushButton_set_price_clicked()
{
    int Id_order = ui->comboBox_ID->currentText().toInt();
    int price = ui->spinBox_price->value();

    QMessageBox::information(this, "Обработка заказа", "Цена установлена!");
    QSqlQuery query_add_size;
    query_add_size.prepare("update Orders set price = :price where ID_order = :Id");
    query_add_size.bindValue(":price", price);
    query_add_size.bindValue(":Id", Id_order);

    if(!query_add_size.exec()){
        qDebug()<<":(((((";
    }
    else{
        qDebug()<<":))))))";
    }

    show_orders(cur_orders_model, "cur_orders");
}

void Admin::on_pushButton_set_status_clicked()
{
    int Id_order = ui->comboBox_ID->currentText().toInt();
    QString status = ui->comboBox_set_status->currentText();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Обработка заказа", "Вы уверены, что хотите изменить статус заказа? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";

      QSqlQuery query_add_size;
      query_add_size.prepare("update Orders set status = :status where ID_order = :Id");
      query_add_size.bindValue(":status", status);
      query_add_size.bindValue(":Id", Id_order);

      if(!query_add_size.exec()){
          qDebug()<<":(((((";
      }
      else{
          qDebug()<<":))))))";
      }
      show_orders(archive_model, "archive");
      show_orders(cur_orders_model, "cur_orders");
      add_ID_orders();
    }

}

void Admin::on_pushButton_set_date_clicked()
{
    int Id_order = ui->comboBox_ID->currentText().toInt();
    QDate deadline = ui->dateEdit->date();

    QMessageBox::information(this, "Обработка заказа", "Цена установлена!");
    QSqlQuery query_add_size;
    query_add_size.prepare("update Orders set deadline = :deadline where ID_order = :Id");
    query_add_size.bindValue(":deadline", deadline);
    query_add_size.bindValue(":Id", Id_order);

    if(!query_add_size.exec()){
        qDebug()<<":(((((";
    }
    else{
        qDebug()<<":))))))";
    }
    show_orders(cur_orders_model, "cur_orders");
}
