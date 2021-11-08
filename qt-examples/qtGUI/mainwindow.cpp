#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // ui serves as a means to access content on the form
    //  such as controls you add in the WYSIWYG form editor
    //  (What You See Is What You Get).
    ui->setupUi(this);

    /*  The connect function is provided by QT to enable
     *  connecting SIGNAL and SLOTS. This is similar to
     *  events in some other frameworks. You may see different
     *  code online showing how to do this, but the general
     *  form stays the same. You need a reference to an object,
     *  a SIGNAL (event) you will capture from that object, a
     *  reference to the object that will respond to that
     *  SIGNAL, and the SLOT (action) that will run when the
     *  event occurs.
    */

    // Registering signal/slot for a button click
    connect(ui->btnTest, &QPushButton::released,
            this, &MainWindow::helloWorld);

    // Registering a signal/slot for text changes
    connect(ui->txtTyping, &QLineEdit::textChanged,
            this, &MainWindow::displayText);
}

// The private functions below act as slots
//  for the SIGNAL events. They are declared as slots
//  in the hpp file.
void MainWindow::displayText() {
    ui->lblTyping->setText(ui->txtTyping->text());
}

void MainWindow::helloWorld()
{
    ui->lblOutput->setText("Hello World!");

    // QDebug is a way to output data to the built
    //  in console in QTCreator. QDebug is ideal to
    //  use at it understand how to output many QT objects.
    qDebug() << "HELLO WORLD!";
}

MainWindow::~MainWindow()
{
    delete ui;
}

