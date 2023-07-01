#include <QApplication>
#include <QTextCodec> // подключение класса кодека текста
#include "mainwindow.h"
int main(int argc, char *argv[])
{

   // QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
//       QTextCodec::setCodecForTr(codec);
//       QTextCodec::setCodecForCStrings(codec);
       //QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);
    MainWindow w;
   w.showNormal();
    w.show();
    return a.exec();
}
