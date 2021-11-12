#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QString>
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->textEntry, &QLineEdit::textChanged, this, &MainWindow::updateTextLabel);
    connect(ui->locateFile, &QPushButton::released, this, &MainWindow::outputTextFile);
    connect(ui->convertData, &QPushButton::released, this, &MainWindow::processData);

    // This is an instance of creating a custom signal and slot
    //  For this, the TextAnalyzer defines the event, and the DataWriter
    //  had a slot that triggers when the signal is emitted
    connect(&ta, &TextAnalyzer::convertText, &writer, &DataWriter::writeData);
}

void MainWindow::outputTextFile()
{
    QString dir = locateDirectory();
    ui->displayLabel->setText(writer.open(dir));
}

void MainWindow::processData()
{
    ta.process(ui->textEntry->text());
}

QString MainWindow::locateDirectory()
{
    // Dialog box to locate a directory on the filesystem
    return QFileDialog::getExistingDirectory(this, tr("Open Directory"));
}

QString MainWindow::locateFile()
{
    // Dialog box to locate a file on the filesystem
    return QFileDialog::getOpenFileName(this, tr("Open CSV"), tr("CSV Files (*.csv)"));
}

void MainWindow::updateTextLabel()
{
    ui->textboxText->setText(ui->textEntry->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}

