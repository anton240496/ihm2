#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QBuffer>

class Global
{
    public:
     QString  numberp, numberpa, numberkggl, numberplot , mytext, vol;
     static Global& Instance()
     {
     static Global global;
     return global;
     }
     };
namespace {
Global& global = Global::Instance();
}


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

     QString sampeh;
     QString str, strfgv;

     // для помощи
      QString onefr, onefr2, onefa, onefa2, onechr, onechr2, onecha, onecha2, location2r, location2a;
      QStringList strListr,strListr2, strListr1, strLista2,checklistr, checklistr2, checklista ,checklista2, checklistlocr, checklistloca;   
       QString numberkg, numbercon, numbercona, numberkg1;
        QStringList numberlista, numberplist, numberplista;
        QString br, br1;
        QString n;
        int s=2;
         int a=2;
         QString samplerfloor,sampleafloor;
         QStringList samplerfloorlist,sampleafloorlist;
         QString kg, connectr;
        QString kgdensity, kgconnect;
        QStringList kgdensitylist, kgconnectlist;
        QString datsht = "кг", datshta = "kg" ;
        QString vcr, vca;
        QString vcfoto;


//         static Global& Instance()// нам понадобится глобальная пременная selecdate1 для того чтобы она была видна всем файлам
//         // где есть пакет include<calendar.h>
//         // с данными, которые мог менять пользователь
//         {
//         static Global global;
//         return global;
//         }
//         };

//         namespace {
//         Global& global = Global::Instance();
//         }
     //

private slots:



    void help();
    void helplocationkgbr();
    void helpnotif();
    void allhelp();


void ihm();
void vc();
void vscp();
void auditor();
void vscpvc();
void contained();
void notcontained();
void nullhelp();
 void ifelsefind();
 void vspotl();
 void cxom();
  void paint();

    void on_foto_clicked();

    void on_vc_clicked();

    void on_containedihm_triggered();

    void on_notcontainedihm_triggered();

    void on_containevc_triggered();

    void on_notcontainedvc_triggered();


    void finalh();

    void on_fotogv_clicked();

    void on_equmentr_activated();

    void on_objectr_activated();

    void on_locationr_activated();

    void on_materialr_activated();

    void on_PCHM_triggered();
    void vcfoto2();


public slots:
    void on_pom_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
