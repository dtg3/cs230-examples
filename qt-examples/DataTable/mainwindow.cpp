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
    connect(ui->openCSV, &QPushButton::released,
            this, &MainWindow::loadCSV);
    connect(ui->setOutputPath, &QPushButton::released,
            this, &MainWindow::locateDirectory);
    connect(ui->outputData, &QPushButton::released,
            this, &MainWindow::outputCSVFile);
    connect(ui->outputData, &QPushButton::released,
            this, &MainWindow::outputTSVFile);
}

void MainWindow::loadCSV()
{
    QString filePath = locateFile();
    ui->dataFilePath->setText(filePath);
    csvHandler.open(filePath);

    // This update the datatable with the model information.
    //  The model holds header information and data rows.
    ui->csvDataTable->setModel(csvHandler.load());
}

void MainWindow::outputTSVFile()
{
    csvHandler.write(outputPath, "\t", "tabs.tsv");
}

void MainWindow::outputCSVFile()
{
    csvHandler.write(outputPath, ",", "commas.csv");
}

void MainWindow::locateDirectory()
{
    // Built in file browser for locating directories on
    //  the filesystem.
    outputPath = QFileDialog::getExistingDirectory(this,
        tr("Open Directory"));
    ui->outputDirPath->setText(outputPath);
}

QString MainWindow::locateFile()
{
    // Built in file browser for locating files on
    //  the filesystem.
    return QFileDialog::getOpenFileName(this,
        tr("Open CSV"), tr("CSV Files (*.csv)"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

