#include "calcwindow.h"
#include "./ui_calcwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include "Calculation.h"
#include <iostream>

using namespace std;

bool is_in_cannot_repeat(vector<string> v, string s)
{
    for(int i = 0; i < v.size(); i++) {
        if (v[i] == s) {
            return true;
        }
    }
    return false;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // DIGITS
    connect(ui->button_0, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_1, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_2, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_3, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_4, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_5, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_6, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_7, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_8, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_9, &QPushButton::clicked, this, &MainWindow::append_result);

    // OPERATIONS
    connect(ui->button_plus, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_minus, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_mult, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_divide, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_ln, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_lg, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_tan, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_ctan, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_sin, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_cos, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_perc, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_sqrt, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_pow, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_equals, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_dot, &QPushButton::clicked, this, &MainWindow::append_result);
    connect(ui->button_not, &QPushButton::clicked, this, &MainWindow::append_result);

    // OTHER
    connect(ui->button_clear, &QPushButton::clicked, this, &MainWindow::button_controls_clicked);
    connect(ui->button_restore, &QPushButton::clicked, this, &MainWindow::button_controls_clicked);
    connect(ui->button_backspace, &QPushButton::clicked, this, &MainWindow::button_controls_clicked);

    // CONVERTER
    connect(ui->meters, &QLineEdit::textChanged, this, &MainWindow::on_meters_changed);
    connect(ui->kilometers, &QLineEdit::textChanged, this, &MainWindow::on_kilometers_changed);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_last_result(QString result)
{
    this->last_result = result;
}

void MainWindow::append_result()
{
    QPushButton *button = (QPushButton *)sender();
    
    // Отримуємо текст кнопки
    QString buttonText = button->text();

    if(buttonText == "="){
        string result = ui->result->text().toStdString();
        string res = calc.eval(result);
        ui->result->setText(QString::fromStdString(res));
        this->set_last_result(QString::fromStdString(res));
        return;
    }

    // check if text in cannot_repeat
    // string to QString

    QString result = ui->result->text();
    // if(buttonText == "="){
    //     calc.eval(result.toStdString());
    // }

    // if prev char is in cannot_repeat and current char is in cannot_repeat

    result += buttonText;
    ui->result->setText(result);
}


void MainWindow::button_controls_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    
    // Отримуємо текст кнопки
    QString buttonText = button->text();
    QString result = ui->result->text();
    if (buttonText == "Clear") {
        result = "";
    } else if (buttonText == "Memory") {
        result = this->last_result;
    } else if (buttonText == "Backspace") {
        result = result.left(result.length() - 1);
    }
    ui->result->setText(result);
}

void MainWindow::on_meters_changed()
{
    QString meters = ui->meters->text();
    QString kilometers = QString::number(meters.toDouble() / 1000);
    ui->kilometers->setText(kilometers);
}

void MainWindow::on_kilometers_changed()
{
    QString kilometers = ui->kilometers->text();
    QString meters = QString::number(kilometers.toDouble() * 1000);
    ui->meters->setText(meters);
}