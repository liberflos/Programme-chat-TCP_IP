#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PageChat *chatDefaut = new PageChat(this);
    PagePartage *partageDefaut = new PagePartage(this);
    ui->tabWidget->addTab(chatDefaut, "Discussion");
    ui->tabWidget->addTab(partageDefaut, "Partage de fichiers");
}

MainWindow::~MainWindow()
{
    delete ui;
}
