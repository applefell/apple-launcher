#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Apple Launcher");

    setMinimumSize(550, 375);
};

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    system("thunar-settings");
}

void MainWindow::on_pushButton_3_clicked()
{
    system("thunar-volman-settings");
}

void MainWindow::on_pushButton_2_clicked()
{
    system("qtcreator");
}

void MainWindow::on_pushButton_4_clicked()
{
    system("com.github.donadigo.appeditor");
}

void MainWindow::on_pushButton_5_clicked()
{
    system("gscreenshot");
}

void MainWindow::on_pushButton_6_clicked()
{
    system("obconf");
}

void MainWindow::on_pushButton_7_clicked()
{
    system("AppImageLauncherSettings %f");
}

void MainWindow::on_pushButton_8_clicked()
{
    system("/usr/bin/catfish %f");
}
