#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "datawriter.hpp"
#include "textanalyzer.hpp"

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
    DataWriter writer;
    TextAnalyzer ta;
    QString locateDirectory();
    QString locateFile();

private slots:
    void updateTextLabel();
    void outputTextFile();
    void processData();
};
#endif // MAINWINDOW_HPP
