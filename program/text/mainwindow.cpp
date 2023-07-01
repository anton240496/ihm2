#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QString s = ui->textEdit->toPlainText().trimmed(); // всё содержимое texteditа одной строкой
//        QStringList rows = s.split('\n'); // разделить содержимое на отдельные строки
//        for (int i=0;i<rows.size();i++)  // перебираем все строки
//        {
//            QString curRow = rows[i].trimmed(); // очередная строка
//            QStringList cols = curRow.split(QRegExp("\\s+")); // разбиваем строку на отдельные числа... в качестве разделителя используем любые пробельные символы (пробел, табуляция)
//            for (int j=0;j<cols.size();j++) // перебираем все числа в строке
//            {
//                this->setWindowTitle(this->windowTitle()+" "+cols[j]); // добавляем их к заголовку окна
//                ui->label->setText(cols[j]);
//            }
//        }

    const QString s="fgh34ds";
        int pos = 0;
        QRegExp rx("(\\d+)");
        while ((pos = rx.indexIn(s, pos)) != -1) {
            qDebug() << rx.cap(1);
            pos += rx.matchedLength();
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    int x = ui.lineEdit_2->text().toInt(/*0,10*/);
//           ui.lineEdit_3->setText(QString::number(x));

//    int start = str.indexOf(QRegExp("[0-9]"));
//    QString mas = str.mid(start,1);









}
