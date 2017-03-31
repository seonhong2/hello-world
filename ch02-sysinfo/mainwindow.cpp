#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sysinfo.h"
#include <QLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mCpuWidget(this),
    mMemoryWidget(this)
{
    ui->setupUi(this);
    SysInfo::instance().init();
    QHBoxLayout* layout = new QHBoxLayout(ui->centralWidget);
    layout->addWidget(&mCpuWidget);
    layout->addWidget(&mMemoryWidget);
    ui->centralWidget->setLayout(layout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
