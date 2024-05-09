#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ButtonSubmit_clicked()
{
    qDebug() <<"Last Name : "<<ui->TextEditLastName->text();
    qDebug() <<"First Name : "<<ui->TextEditFirstName->text();
    qDebug() <<"Message : "<<ui->TextEditMessage->toPlainText();
}

