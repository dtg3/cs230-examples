#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), currentScreenIndex(0)
{
    newWindow = new NewWindow();

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(currentScreenIndex);

    connect(ui->prevButton, &QPushButton::clicked,
            this, &MainWindow::showPrevScreen);

    connect(ui->nextButton, &QPushButton::clicked,
            this, &MainWindow::showNextScreen);

    connect(ui->showWindow, &QPushButton::clicked,
            this, &MainWindow::openWindow);
}

void MainWindow::showPrevScreen()
{
    --currentScreenIndex;
    ui->stackedWidget->setCurrentIndex(currentScreenIndex);
}

void MainWindow::showNextScreen()
{
    ++currentScreenIndex;
    ui->stackedWidget->setCurrentIndex(currentScreenIndex);
}

void MainWindow::openWindow()
{
    newWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

