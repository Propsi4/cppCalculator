#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Calculation.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QString last_result;
    Calculation calc;
    Ui::MainWindow *ui;

    void set_last_result(QString result);

private slots:
    void append_result();
    void button_controls_clicked();
    void on_meters_changed();
    void on_kilometers_changed();
};
#endif // MAINWINDOW_H
