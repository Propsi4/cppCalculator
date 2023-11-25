/********************************************************************************
** Form generated from reading UI file 'calcwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCWINDOW_H
#define UI_CALCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QFrame *frame_digits;
    QGridLayout *gridLayout_2;
    QPushButton *button_6;
    QPushButton *button_9;
    QPushButton *button_7;
    QPushButton *button_5;
    QPushButton *button_dot;
    QPushButton *button_equals;
    QPushButton *button_8;
    QPushButton *button_1;
    QPushButton *button_4;
    QPushButton *button_3;
    QPushButton *button_2;
    QPushButton *button_0;
    QFrame *frame_operations;
    QGridLayout *gridLayout_3;
    QPushButton *button_divide;
    QPushButton *button_lg;
    QPushButton *button_perc;
    QPushButton *button_minus;
    QPushButton *button_sqrt;
    QPushButton *button_pow;
    QPushButton *button_mult;
    QPushButton *button_plus;
    QPushButton *button_ln;
    QPushButton *button_cos;
    QPushButton *button_sin;
    QPushButton *button_tan;
    QPushButton *button_ctan;
    QPushButton *button_not;
    QLabel *result;
    QFrame *frame_controls;
    QGridLayout *gridLayout_6;
    QPushButton *button_clear;
    QPushButton *button_restore;
    QPushButton *button_backspace;
    QFrame *frame_convert;
    QGridLayout *gridLayout_4;
    QLineEdit *kilometers;
    QLabel *label_m;
    QLineEdit *meters;
    QLabel *label_equals;
    QLabel *label_km;
    QLabel *label_convert;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(488, 420);
        MainWindow->setMinimumSize(QSize(488, 420));
        QPalette palette;
        QBrush brush(QColor(75, 75, 75, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(243, 243, 243, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        centralwidget->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        centralwidget->setFont(font);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName("gridLayout_5");
        gridWidget = new QWidget(centralwidget);
        gridWidget->setObjectName("gridWidget");
        sizePolicy.setHeightForWidth(gridWidget->sizePolicy().hasHeightForWidth());
        gridWidget->setSizePolicy(sizePolicy);
        gridWidget->setMinimumSize(QSize(470, 330));
        gridWidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setObjectName("gridLayout");
        frame_digits = new QFrame(gridWidget);
        frame_digits->setObjectName("frame_digits");
        frame_digits->setMinimumSize(QSize(267, 182));
        QPalette palette2;
        QBrush brush3(QColor(231, 231, 231, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        frame_digits->setPalette(palette2);
        frame_digits->setAutoFillBackground(true);
        frame_digits->setFrameShape(QFrame::StyledPanel);
        frame_digits->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_digits);
        gridLayout_2->setObjectName("gridLayout_2");
        button_6 = new QPushButton(frame_digits);
        button_6->setObjectName("button_6");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_6, 1, 2, 1, 1);

        button_9 = new QPushButton(frame_digits);
        button_9->setObjectName("button_9");
        sizePolicy1.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_9, 2, 2, 1, 1);

        button_7 = new QPushButton(frame_digits);
        button_7->setObjectName("button_7");
        sizePolicy1.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_7, 2, 0, 1, 1);

        button_5 = new QPushButton(frame_digits);
        button_5->setObjectName("button_5");
        sizePolicy1.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_5, 1, 1, 1, 1);

        button_dot = new QPushButton(frame_digits);
        button_dot->setObjectName("button_dot");
        sizePolicy1.setHeightForWidth(button_dot->sizePolicy().hasHeightForWidth());
        button_dot->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_dot, 3, 1, 1, 1);

        button_equals = new QPushButton(frame_digits);
        button_equals->setObjectName("button_equals");
        sizePolicy1.setHeightForWidth(button_equals->sizePolicy().hasHeightForWidth());
        button_equals->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_equals, 3, 2, 1, 1);

        button_8 = new QPushButton(frame_digits);
        button_8->setObjectName("button_8");
        sizePolicy1.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_8, 2, 1, 1, 1);

        button_1 = new QPushButton(frame_digits);
        button_1->setObjectName("button_1");
        sizePolicy1.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_1, 0, 0, 1, 1);

        button_4 = new QPushButton(frame_digits);
        button_4->setObjectName("button_4");
        sizePolicy1.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_4, 1, 0, 1, 1);

        button_3 = new QPushButton(frame_digits);
        button_3->setObjectName("button_3");
        sizePolicy1.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_3, 0, 2, 1, 1);

        button_2 = new QPushButton(frame_digits);
        button_2->setObjectName("button_2");
        sizePolicy1.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_2, 0, 1, 1, 1);

        button_0 = new QPushButton(frame_digits);
        button_0->setObjectName("button_0");
        sizePolicy1.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(button_0, 3, 0, 1, 1);


        gridLayout->addWidget(frame_digits, 2, 0, 5, 4);

        frame_operations = new QFrame(gridWidget);
        frame_operations->setObjectName("frame_operations");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        frame_operations->setPalette(palette3);
        frame_operations->setAutoFillBackground(true);
        frame_operations->setFrameShape(QFrame::StyledPanel);
        frame_operations->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_operations);
        gridLayout_3->setObjectName("gridLayout_3");
        button_divide = new QPushButton(frame_operations);
        button_divide->setObjectName("button_divide");
        sizePolicy1.setHeightForWidth(button_divide->sizePolicy().hasHeightForWidth());
        button_divide->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(13);
        button_divide->setFont(font1);

        gridLayout_3->addWidget(button_divide, 3, 0, 1, 1);

        button_lg = new QPushButton(frame_operations);
        button_lg->setObjectName("button_lg");
        sizePolicy1.setHeightForWidth(button_lg->sizePolicy().hasHeightForWidth());
        button_lg->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_lg, 6, 2, 1, 1);

        button_perc = new QPushButton(frame_operations);
        button_perc->setObjectName("button_perc");
        sizePolicy1.setHeightForWidth(button_perc->sizePolicy().hasHeightForWidth());
        button_perc->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_perc, 5, 1, 1, 1);

        button_minus = new QPushButton(frame_operations);
        button_minus->setObjectName("button_minus");
        sizePolicy1.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy1);
        button_minus->setFont(font1);

        gridLayout_3->addWidget(button_minus, 5, 0, 1, 1);

        button_sqrt = new QPushButton(frame_operations);
        button_sqrt->setObjectName("button_sqrt");
        sizePolicy1.setHeightForWidth(button_sqrt->sizePolicy().hasHeightForWidth());
        button_sqrt->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_sqrt, 4, 1, 1, 1);

        button_pow = new QPushButton(frame_operations);
        button_pow->setObjectName("button_pow");
        sizePolicy1.setHeightForWidth(button_pow->sizePolicy().hasHeightForWidth());
        button_pow->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_pow, 3, 1, 1, 1);

        button_mult = new QPushButton(frame_operations);
        button_mult->setObjectName("button_mult");
        sizePolicy1.setHeightForWidth(button_mult->sizePolicy().hasHeightForWidth());
        button_mult->setSizePolicy(sizePolicy1);
        button_mult->setFont(font1);

        gridLayout_3->addWidget(button_mult, 4, 0, 1, 1);

        button_plus = new QPushButton(frame_operations);
        button_plus->setObjectName("button_plus");
        sizePolicy1.setHeightForWidth(button_plus->sizePolicy().hasHeightForWidth());
        button_plus->setSizePolicy(sizePolicy1);
        button_plus->setFont(font1);

        gridLayout_3->addWidget(button_plus, 6, 0, 1, 1);

        button_ln = new QPushButton(frame_operations);
        button_ln->setObjectName("button_ln");
        sizePolicy1.setHeightForWidth(button_ln->sizePolicy().hasHeightForWidth());
        button_ln->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_ln, 6, 1, 1, 1);

        button_cos = new QPushButton(frame_operations);
        button_cos->setObjectName("button_cos");
        sizePolicy1.setHeightForWidth(button_cos->sizePolicy().hasHeightForWidth());
        button_cos->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_cos, 5, 2, 1, 1);

        button_sin = new QPushButton(frame_operations);
        button_sin->setObjectName("button_sin");
        sizePolicy1.setHeightForWidth(button_sin->sizePolicy().hasHeightForWidth());
        button_sin->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_sin, 4, 2, 1, 1);

        button_tan = new QPushButton(frame_operations);
        button_tan->setObjectName("button_tan");
        sizePolicy1.setHeightForWidth(button_tan->sizePolicy().hasHeightForWidth());
        button_tan->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_tan, 3, 2, 1, 1);

        button_ctan = new QPushButton(frame_operations);
        button_ctan->setObjectName("button_ctan");
        sizePolicy1.setHeightForWidth(button_ctan->sizePolicy().hasHeightForWidth());
        button_ctan->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_ctan, 2, 2, 1, 1);

        button_not = new QPushButton(frame_operations);
        button_not->setObjectName("button_not");
        sizePolicy1.setHeightForWidth(button_not->sizePolicy().hasHeightForWidth());
        button_not->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(button_not, 2, 0, 1, 2);


        gridLayout->addWidget(frame_operations, 1, 4, 6, 2);

        result = new QLabel(gridWidget);
        result->setObjectName("result");
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        result->setMinimumSize(QSize(0, 73));
        result->setMaximumSize(QSize(16777215, 147));
        QPalette palette4;
        QBrush brush4(QColor(255, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        result->setPalette(palette4);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font2.setPointSize(13);
        font2.setKerning(true);
        result->setFont(font2);
        result->setLayoutDirection(Qt::LeftToRight);
        result->setAutoFillBackground(true);
        result->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-width : 1.2px; \n"
"border-style:inset;\n"
"border-radius: 5px;"));
        result->setScaledContents(false);
        result->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        result->setMargin(20);
        result->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(result, 0, 0, 1, 6);

        frame_controls = new QFrame(gridWidget);
        frame_controls->setObjectName("frame_controls");
        frame_controls->setMaximumSize(QSize(16777215, 90));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        frame_controls->setPalette(palette5);
        frame_controls->setAutoFillBackground(true);
        frame_controls->setFrameShape(QFrame::StyledPanel);
        frame_controls->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_controls);
        gridLayout_6->setObjectName("gridLayout_6");
        button_clear = new QPushButton(frame_controls);
        button_clear->setObjectName("button_clear");
        sizePolicy1.setHeightForWidth(button_clear->sizePolicy().hasHeightForWidth());
        button_clear->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(button_clear, 0, 0, 1, 1);

        button_restore = new QPushButton(frame_controls);
        button_restore->setObjectName("button_restore");
        sizePolicy1.setHeightForWidth(button_restore->sizePolicy().hasHeightForWidth());
        button_restore->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(button_restore, 0, 1, 1, 1);

        button_backspace = new QPushButton(frame_controls);
        button_backspace->setObjectName("button_backspace");
        sizePolicy1.setHeightForWidth(button_backspace->sizePolicy().hasHeightForWidth());
        button_backspace->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(button_backspace, 0, 2, 1, 1);


        gridLayout->addWidget(frame_controls, 1, 0, 1, 4);

        frame_convert = new QFrame(gridWidget);
        frame_convert->setObjectName("frame_convert");
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        frame_convert->setPalette(palette6);
        frame_convert->setAutoFillBackground(true);
        frame_convert->setFrameShape(QFrame::StyledPanel);
        frame_convert->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_convert);
        gridLayout_4->setObjectName("gridLayout_4");
        kilometers = new QLineEdit(frame_convert);
        kilometers->setObjectName("kilometers");
        kilometers->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_4->addWidget(kilometers, 1, 3, 1, 1);

        label_m = new QLabel(frame_convert);
        label_m->setObjectName("label_m");

        gridLayout_4->addWidget(label_m, 1, 1, 1, 1);

        meters = new QLineEdit(frame_convert);
        meters->setObjectName("meters");
        meters->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_4->addWidget(meters, 1, 0, 1, 1);

        label_equals = new QLabel(frame_convert);
        label_equals->setObjectName("label_equals");

        gridLayout_4->addWidget(label_equals, 1, 2, 1, 1);

        label_km = new QLabel(frame_convert);
        label_km->setObjectName("label_km");

        gridLayout_4->addWidget(label_km, 1, 4, 1, 1);

        label_convert = new QLabel(frame_convert);
        label_convert->setObjectName("label_convert");
        label_convert->setAutoFillBackground(true);
        label_convert->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_convert, 0, 0, 1, 5);


        gridLayout->addWidget(frame_convert, 7, 0, 1, 6);


        gridLayout_5->addWidget(gridWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_lg->setText(QCoreApplication::translate("MainWindow", "lg", nullptr));
        button_perc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        button_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        button_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        button_ctan->setText(QCoreApplication::translate("MainWindow", "ctan", nullptr));
        button_not->setText(QCoreApplication::translate("MainWindow", "not", nullptr));
        result->setText(QString());
        button_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        button_restore->setText(QCoreApplication::translate("MainWindow", "Memory", nullptr));
        button_backspace->setText(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
        label_m->setText(QCoreApplication::translate("MainWindow", "\320\274", nullptr));
        label_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label_km->setText(QCoreApplication::translate("MainWindow", "\320\272\320\274", nullptr));
        label_convert->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\321\200\320\270 \320\262 \320\232\321\226\320\273\320\276\320\274\320\265\321\202\321\200\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCWINDOW_H
