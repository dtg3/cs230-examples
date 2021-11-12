#ifndef NEWWINDOW_HPP
#define NEWWINDOW_HPP

#include <QWidget>

namespace Ui {
class NewWindow;
}

class NewWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewWindow(QWidget *parent = nullptr);
    ~NewWindow();

private:
    Ui::NewWindow *ui;
};

#endif // NEWWINDOW_HPP
