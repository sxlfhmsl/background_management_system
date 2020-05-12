#include "mainwindow.h"
#include "ui_mainwindow.h"

// log4qt
#include "log4qt/logger.h"
#include "log4qt/basicconfigurator.h"
#include "log4qt/propertyconfigurator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->init_log4qt();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_log4qt()
{
    // apply config    Log4Qt::Logger::logger("error")
    Log4Qt::BasicConfigurator::configure();
    Log4Qt::PropertyConfigurator::configure(":/log/config/log/log4qt.properties");

    Log4Qt::Logger::logger("general")->info("后台管理系统开始运行");
}
