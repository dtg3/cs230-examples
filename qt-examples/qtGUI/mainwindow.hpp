#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    // This is a Macro that is needed if
    //  you intent to use SIGNALS and SLOTS
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

// We can define functions to act as actions in response
//  to SIGNALS (event) by declaring them to be SLOTS.
//  SLOTS can use access specifiers just like normal functions.
private slots:
    void helloWorld();
    void displayText();

// We can also define functions to behave a SIGNALS (events)
//  to trigger other SLOTS (actions). SIGNALS SHOULD NOT BE
//  GIVEN AN ACCESS SPECIFIER (in QT 5+ they are public by default)
//signals:
//  void mySignal();

};
#endif // MAINWINDOW_HPP
