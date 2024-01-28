#include "yourmanager.h"
#include "./ui_yourmanager.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QProcess>
#include <QDir>
#include <QPushButton>
#include <QTime>

YourManager::YourManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::YourManager)
{
    ui->setupUi(this);
}

YourManager::~YourManager()
{
    delete ui;
}

void YourManager::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"info","Not for sale");
}


void YourManager::on_pushButton_clicked()
{
    QProcess::startDetached("explorer", {"/"});
}



void YourManager::on_timeEdit_userTimeChanged(const QTime &time)
{
    // Получаем текущее реальное время
    QTime currentTime = QTime::currentTime();

    // Устанавливаем текущее реальное время в QTimeEdit
    ui->timeEdit->setTime(currentTime);
}

