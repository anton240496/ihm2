/********************************************************************************
** Form generated from reading UI file 'dop.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOP_H
#define UI_DOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dop
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *volume;
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *densityr;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *densitya;
    QLabel *label_2;
    QLineEdit *density;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *weight;
    QPushButton *save;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dop)
    {
        if (dop->objectName().isEmpty())
            dop->setObjectName(QString::fromUtf8("dop"));
        dop->resize(932, 257);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        dop->setFont(font);
        centralwidget = new QWidget(dop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        volume = new QLineEdit(groupBox);
        volume->setObjectName(QString::fromUtf8("volume"));

        verticalLayout_2->addWidget(volume);


        horizontalLayout_3->addWidget(groupBox);

        groupBox1 = new QGroupBox(centralwidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        verticalLayout_4 = new QVBoxLayout(groupBox1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget = new QWidget(groupBox1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 80));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(89, 0));

        horizontalLayout->addWidget(label);

        densityr = new QLineEdit(widget);
        densityr->setObjectName(QString::fromUtf8("densityr"));
        densityr->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(densityr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        densitya = new QLineEdit(widget);
        densitya->setObjectName(QString::fromUtf8("densitya"));

        horizontalLayout_2->addWidget(densitya);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(widget);

        density = new QLineEdit(groupBox1);
        density->setObjectName(QString::fromUtf8("density"));

        verticalLayout_4->addWidget(density);


        horizontalLayout_3->addWidget(groupBox1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4, 0, Qt::AlignHCenter);

        weight = new QLineEdit(groupBox_2);
        weight->setObjectName(QString::fromUtf8("weight"));

        verticalLayout_3->addWidget(weight);


        horizontalLayout_3->addWidget(groupBox_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        save = new QPushButton(centralwidget);
        save->setObjectName(QString::fromUtf8("save"));

        gridLayout->addWidget(save, 1, 0, 1, 1);

        dop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dop);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 932, 26));
        dop->setMenuBar(menubar);
        statusbar = new QStatusBar(dop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dop->setStatusBar(statusbar);

        retranslateUi(dop);

        QMetaObject::connectSlotsByName(dop);
    } // setupUi

    void retranslateUi(QMainWindow *dop)
    {
        dop->setWindowTitle(QCoreApplication::translate("dop", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("dop", "\320\225\320\264\320\270\320\275\320\270\321\206\320\260 (\320\2743)\n"
"Unit (\320\2743)", nullptr));
        label->setText(QCoreApplication::translate("dop", "\342\204\226(\320\277\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 ", nullptr));
        label_2->setText(QCoreApplication::translate("dop", "density ", nullptr));
        label_4->setText(QCoreApplication::translate("dop", "\320\222\321\201\320\265\320\263\320\276 (\320\272\320\263)\n"
"Total (kg)", nullptr));
        save->setText(QCoreApplication::translate("dop", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270 \320\277\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dop: public Ui_dop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOP_H
