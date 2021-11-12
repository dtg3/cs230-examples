#include "newwindow.hpp"
#include "ui_newwindow.h"

NewWindow::NewWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewWindow)
{
    ui->setupUi(this);
}

NewWindow::~NewWindow()
{
    delete ui;
}
