/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QPushButton *button_perc;
    QPushButton *button_divide;
    QPushButton *button_minus;
    QPushButton *button_9;
    QPushButton *button_1;
    QPushButton *button_8;
    QPushButton *button_plus;
    QPushButton *button_0;
    QPushButton *button_5;
    QPushButton *button_3;
    QPushButton *button_mult;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_2;
    QPushButton *button_4;
    QPushButton *button_dot;
    QPushButton *button_equal;
    QPushButton *button_clear;
    QPushButton *button_square;
    QPushButton *button_sqrt;
    QPushButton *button_log;
    QPushButton *button_ln;
    QPushButton *button_1divX;
    QLabel *result;
    QPushButton *button_restore;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(309, 328);
        QPalette palette;
        QBrush brush(QColor(75, 75, 75, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        centralwidget->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        centralwidget->setFont(font);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridWidget = new QWidget(centralwidget);
        gridWidget->setObjectName("gridWidget");
        sizePolicy.setHeightForWidth(gridWidget->sizePolicy().hasHeightForWidth());
        gridWidget->setSizePolicy(sizePolicy);
        gridWidget->setMinimumSize(QSize(291, 310));
        gridWidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setObjectName("gridLayout");
        button_perc = new QPushButton(gridWidget);
        button_perc->setObjectName("button_perc");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_perc->sizePolicy().hasHeightForWidth());
        button_perc->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_perc, 1, 2, 1, 1);

        button_divide = new QPushButton(gridWidget);
        button_divide->setObjectName("button_divide");
        sizePolicy1.setHeightForWidth(button_divide->sizePolicy().hasHeightForWidth());
        button_divide->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_divide, 1, 3, 1, 1);

        button_minus = new QPushButton(gridWidget);
        button_minus->setObjectName("button_minus");
        sizePolicy1.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_minus, 3, 3, 1, 1);

        button_9 = new QPushButton(gridWidget);
        button_9->setObjectName("button_9");
        sizePolicy1.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_9, 4, 2, 1, 1);

        button_1 = new QPushButton(gridWidget);
        button_1->setObjectName("button_1");
        sizePolicy1.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_1, 2, 0, 1, 1);

        button_8 = new QPushButton(gridWidget);
        button_8->setObjectName("button_8");
        sizePolicy1.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_8, 4, 1, 1, 1);

        button_plus = new QPushButton(gridWidget);
        button_plus->setObjectName("button_plus");
        sizePolicy1.setHeightForWidth(button_plus->sizePolicy().hasHeightForWidth());
        button_plus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_plus, 4, 3, 1, 1);

        button_0 = new QPushButton(gridWidget);
        button_0->setObjectName("button_0");
        sizePolicy1.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_0, 5, 0, 1, 2);

        button_5 = new QPushButton(gridWidget);
        button_5->setObjectName("button_5");
        sizePolicy1.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_5, 3, 1, 1, 1);

        button_3 = new QPushButton(gridWidget);
        button_3->setObjectName("button_3");
        sizePolicy1.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_3, 2, 2, 1, 1);

        button_mult = new QPushButton(gridWidget);
        button_mult->setObjectName("button_mult");
        sizePolicy1.setHeightForWidth(button_mult->sizePolicy().hasHeightForWidth());
        button_mult->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_mult, 2, 3, 1, 1);

        button_6 = new QPushButton(gridWidget);
        button_6->setObjectName("button_6");
        sizePolicy1.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_6, 3, 2, 1, 1);

        button_7 = new QPushButton(gridWidget);
        button_7->setObjectName("button_7");
        sizePolicy1.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_7, 4, 0, 1, 1);

        button_2 = new QPushButton(gridWidget);
        button_2->setObjectName("button_2");
        sizePolicy1.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_2, 2, 1, 1, 1);

        button_4 = new QPushButton(gridWidget);
        button_4->setObjectName("button_4");
        sizePolicy1.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_4, 3, 0, 1, 1);

        button_dot = new QPushButton(gridWidget);
        button_dot->setObjectName("button_dot");
        sizePolicy1.setHeightForWidth(button_dot->sizePolicy().hasHeightForWidth());
        button_dot->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_dot, 5, 2, 1, 1);

        button_equal = new QPushButton(gridWidget);
        button_equal->setObjectName("button_equal");
        sizePolicy1.setHeightForWidth(button_equal->sizePolicy().hasHeightForWidth());
        button_equal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_equal, 5, 3, 1, 1);

        button_clear = new QPushButton(gridWidget);
        button_clear->setObjectName("button_clear");
        sizePolicy1.setHeightForWidth(button_clear->sizePolicy().hasHeightForWidth());
        button_clear->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_clear, 1, 1, 1, 1);

        button_square = new QPushButton(gridWidget);
        button_square->setObjectName("button_square");
        sizePolicy1.setHeightForWidth(button_square->sizePolicy().hasHeightForWidth());
        button_square->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_square, 1, 4, 1, 1);

        button_sqrt = new QPushButton(gridWidget);
        button_sqrt->setObjectName("button_sqrt");
        sizePolicy1.setHeightForWidth(button_sqrt->sizePolicy().hasHeightForWidth());
        button_sqrt->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_sqrt, 2, 4, 1, 1);

        button_log = new QPushButton(gridWidget);
        button_log->setObjectName("button_log");
        sizePolicy1.setHeightForWidth(button_log->sizePolicy().hasHeightForWidth());
        button_log->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_log, 3, 4, 1, 1);

        button_ln = new QPushButton(gridWidget);
        button_ln->setObjectName("button_ln");
        sizePolicy1.setHeightForWidth(button_ln->sizePolicy().hasHeightForWidth());
        button_ln->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_ln, 4, 4, 1, 1);

        button_1divX = new QPushButton(gridWidget);
        button_1divX->setObjectName("button_1divX");
        sizePolicy1.setHeightForWidth(button_1divX->sizePolicy().hasHeightForWidth());
        button_1divX->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_1divX, 5, 4, 1, 1);

        result = new QLabel(gridWidget);
        result->setObjectName("result");
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        result->setMaximumSize(QSize(16777215, 147));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(13);
        font1.setKerning(true);
        result->setFont(font1);
        result->setLayoutDirection(Qt::LeftToRight);
        result->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(result, 0, 0, 1, 5);

        button_restore = new QPushButton(gridWidget);
        button_restore->setObjectName("button_restore");
        sizePolicy1.setHeightForWidth(button_restore->sizePolicy().hasHeightForWidth());
        button_restore->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_restore, 1, 0, 1, 1);


        gridLayout_2->addWidget(gridWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        button_perc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        button_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        button_square->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        button_1divX->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        button_restore->setText(QCoreApplication::translate("MainWindow", "Restore", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
