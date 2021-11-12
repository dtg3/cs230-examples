#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "datawriter.hpp"
#include "datahandler.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();  

private:
    Ui::MainWindow *ui;
    DataHandler csvHandler;
    QString outputPath;
    QString locateFile();

private slots:
    void outputCSVFile();
    void outputTSVFile();
    void loadCSV();
    void locateDirectory();
};
#endif // MAINWINDOW_HPP
