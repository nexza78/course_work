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
    statuses << "В процессе обработки" << "Ожидается платеж" << "Завершен";

    ui->comboBox_product_type->addItems(types_product);
    ui->comboBox_transport_type->addItems(types_transport);
    ui->comboBox_set_status->addItems(statuses);
    add_items_combobox_route_number();

    //конец заполнения

    connect(ui->comboBox_product_type, SIGNAL(currentTextChanged(QString)), this, SLOT(update_cur_size()));
    connect(ui->comboBox_transport_type, SIGNAL(currentTextChanged(QString)), this, SLOT(update_cur_size()));
    connect(ui->comboBox_route_number, SIGNAL(currentTextChanged(QString)), this, SLOT(update_cur_size()));

    update_cur_size();

    QSqlQuery id_order;
    id_order.prepare("select ID_order from Orders where status <> :end_status");
    id_order.bindValue(":end_status", "завершено");

    id_order.exec();

    while(id_order.next()){
       ui->comboBox_ID->addItem(id_order.value(0).toString());
    }
    //
    //query_routes.bindValue(":prod_type", )
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
    QString new_route = ui->lineEdit_new_route->text();

    if(new_route == ""){
        QMessageBox::information(this, "Добавление размера", "Не указан маршрут.");
        return;
    }

    QSqlQuery cur_size;
    cur_size.prepare("select route_number from Products where route_number = :route_number");
    cur_size.bindValue(":route_number", new_route);

    int count = 0;
    cur_size.exec();
    if(cur_size.next()){
        count++;
    }

    if(count != 0){
        QMessageBox::information(this, "Добавление размера", "Маршрут уже существует.");
        return;
    }
    int width = ui->spinBox_width->value();
    int height = ui->spinBox_height->value();
    int thickness = ui->spinBox_thickness->value();

    if(width == 0 || height == 0){
        QMessageBox::information(this, "Добавление размера", "Указан неверный размер.");
        return;
    }

     qDebug() << selected_prod_type << selected_tr_type;

    if(thickness == 0 && selected_prod_type == "объемный номер"){
        QMessageBox::information(this, "Добавление размера", "Указанный размер невозможен для данного изделия.");
        return;
    }

    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Добавление размера", "Вы уверены, что хотите добавить размер? ",
                                    QMessageBox::Yes|QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes";

      QSqlQuery query_add_size;
      query_add_size.prepare("insert into Products(product_type, type_transport, route_number, width, height, thickness) values(:selected_product, :selected_transport, :selected_route_number, :width, :height, :thickness)");

      query_add_size.bindValue(":selected_product", selected_prod_type);
      query_add_size.bindValue(":selected_transport", selected_tr_type);
      query_add_size.bindValue(":selected_route_number", new_route);
      query_add_size.bindValue(":width", width);
      query_add_size.bindValue(":height", height);
      query_add_size.bindValue(":thickness", thickness);

      if(query_add_size.exec()){
          qDebug()<<  "aaaaaaa admin add size";
          add_items_combobox_route_number();
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
    cur_size.prepare("select width, height, thickness from Products where product_type = :prod_type and type_transport = :tr_type and route_number = :route");
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
      query_del_size.prepare("delete from Products where product_type = :prod_type and type_transport = :tr_type and route_number = :route");
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
      query_match_info.prepare("select ID_products from Products where product_type = :selected_product and type_transport =:selected_transport and route_number = :selected_route_number");

      query_match_info.bindValue(":selected_product", selected_prod_type);
      query_match_info.bindValue(":selected_transport", selected_tr_type);
      query_match_info.bindValue(":selected_route_number", selected_route);

      query_match_info.exec();

      int ID_products = -1;

      if(query_match_info.next()){
          ID_products = query_match_info.value(0).toInt();
      }


      QSqlQuery query_del_size;
      query_del_size.prepare("update Products set product_type = :prod_type and type_transport = :tr_type and route_number = :route where ID_products = :ID_products");
      query_del_size.bindValue(":prod_type", selected_prod_type);
      query_del_size.bindValue(":tr_type", selected_tr_type);
      query_del_size.bindValue(":route", selected_route);
      query_del_size.bindValue("ID_products", ID_products);

      if(!query_del_size.exec()){
          qDebug()<<  "aaaaaaa admin change order";
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

//void Admin::show_orders(QSqlQueryModel *model, QString table_type){
//    QSqlQuery query_orders;
//
//
//    QSqlQuery id_order;
//    id_order.prepare("select ID_order from Orders where status <> :end_status");
//    id_order.bindValue(":end_status", "завершено");
//
//    if(table_type == "cur_orders"){
//        query_orders.prepare
//}

void Admin::on_pushButton_save_orders_clicked()
{

}
