#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPrinter>
#include<QFileDialog>
#include<QTextDocument>
#include<QDebug>
#include<QMessageBox>
#include<QTextCodec>
#include <algorithm>
#include<string>
#include<QBuffer>
#include <fstream>

#include <QMessageBox>

using namespace std;

#include <QAxObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{

    delete ui;
}
void MainWindow :: helpnotif()
{
           onefr=ui->finishr->toPlainText();
           onefa=ui->finisha->toPlainText();
           onechr=ui->checkr->toPlainText();
           onecha=ui->checka->toPlainText();
}

void MainWindow :: cxom()
{
     vcr = "[Визуально]";
     vca = "[Visual]";
    if (ui->sampler->text().contains("-IHM"))
    {
        vcr="[Проба]";
        vca= "[Sample]";

    }

}

void MainWindow :: nullhelp()
{
    onechr="";
    onechr2="";

    onecha="";
    onecha2="";

    onefr="";
    onefr2="";

    onefa="";
    onefa2="";

    global.numberp = "";
    global.numberpa = "";

    global.mytext = "";
    global.numberkggl = "";
     global.vol = "";
     ui->equmentr->currentText()="";
     ui->finishr->toPlainText()="";
     ui->finisha->toPlainText()="";

//     datsht ="";
//     datshta="";

}
void MainWindow :: help()
{


            /*if(ui->finishr->toPlainText()!=nullptr &&  ui->finisha->toPlainText()!=nullptr)
            {*/ if (s<=ui->finishr->document()->blockCount() && s<=ui->finisha->document()->blockCount()){

       onefr=ui->finishr->toPlainText();
       strListr=onefr.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onefr=strListr.at(0);

       onefr2=ui->finishr->toPlainText();
       strListr2=onefr2.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onefr2=strListr2.at(1); // берем  строку

       onefa=ui->finisha->toPlainText();
       strListr1=onefa.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onefa=strListr1.at(0);


       onefa2=ui->finisha->toPlainText();
       strLista2=onefa2.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onefa2=strLista2.at(1); // берем  строку
         //   }
            }
            /*if(ui->checkr->toPlainText()!=nullptr &&  ui->checka->toPlainText()!=nullptr )
              { */ if (a<=ui->checkr->document()->blockCount() && a<=ui->checka->document()->blockCount() )
            {
       onechr=ui->checkr->toPlainText();
       checklistr=onechr.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onechr=checklistr.at(0); // берем вторую строку

       onechr2=ui->checkr->toPlainText();
       checklistr2=onechr2.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onechr2=checklistr2.at(1); // берем  строку

       onecha=ui->checka->toPlainText();
       checklista=onecha.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onecha=checklista.at(0); // берем  строку

       onecha2=ui->checka->toPlainText();
       checklista2=onecha2.split('\n'); // разбиваем строку из текстедита на отдельные строки
      onecha2=checklista2.at(1);
       //     }
}
}
void MainWindow :: helplocationkgbr()
{

      sampeh= ui->sampler->text();
        ui->samplea->setText(sampeh);

      location2r=ui->locationr->currentText();
      checklistlocr=location2r.split(',');
      location2r=checklistlocr.at(0);

      location2a=ui->locationa->text();
      checklistloca=location2a.split(',');
      location2a=checklistloca.at(0);

      numberkg=onefr;
        numberlista=numberkg.split(datsht);
       numberkg=numberlista.at(0);
        global.numberkggl =numberkg;

       numbercon=ui->finishr->toPlainText();

       if(ui->equmentr->currentText().contains("Датчик"))
       {
           datsht = "шт.";
           datshta = "p.";

       if(numbercon.contains(datsht))
       {
         numberlista=numbercon.split(datsht);
        numbercon=numberlista.at(0);
        numbercon=global.numberkggl;
       }


        numbercon=ui->finishr->toPlainText();
       //   qDebug()<< numbercon;
        if(numbercon.contains("содер"))
        {     numberplist=numbercon.split("содер");  // перенести символы до содержит
             numbercon=numberplist.at(0);
            if(numbercon.contains(datsht))
            {
         global.numberp=numbercon;
                          numberplist= global.numberp.split(datsht); //из полученный строки перенести символы после кг
                          global.numberp=numberplist.at(1);

            }
        }

        numbercona=ui->finisha->toPlainText();
        qDebug()<< numbercona;
        if(numbercona.contains("containing"))
        {     numberplista=numbercona.split("containing");  // перенести символы до содержит
             numbercona=numberplista.at(0);
            if(numbercona.contains("kgs of"))
            {
         global.numberpa=numbercona;
                          numberplista= global.numberpa.split("kgs of"); //из полученный строки перенести символы после кг
                          global.numberpa=numberplista.at(1);

            }
        }
        }else {
           datsht = "кг", datshta = "kgs" ;
     }

        if (onechr2 !="" )
        {
        br= "<br>";
        }else
        {
            br= "";
        }

        if (onefr2 != "")
        {
        br1= "<br>";
        }else
        {
            br1= "";
        }



}
void MainWindow:: ihm()
{//kg = "кг";
   // connectr= "содержит";
    ui->sampler->setText("-IHM");
    ui->samplea->setText("-IHM");
}

void MainWindow:: vc()
{//kg = "кг";
 //   connectr= "содержит";
    ui->sampler->setText("-VC");
    ui->samplea->setText("-VC");
}
void MainWindow::on_PCHM_triggered()
{
    vc();
    ui->vscpr->setText("Взять образец ");
    ui->vscpa->setText("Take a sample of ");
    ui->checkr->setText("ПСОМ");
    ui->checka->setText("PCHM");

    ui->finishr->setText("Разборка возможна при ремонте оборудования. Механизм будет выведен на долгое время из строя.\n"
                         "Масса  неизвестна");
    ui->finisha->setText("Disassembly is possible when repairing equipment. The mechanism will be disabled for a long time.\n"
                         "The mass of a  is unknown ");

}
void MainWindow:: vscp()
{
    ui->vscpr->setText("Взять образец ");
    ui->vscpa->setText("Take a sample of ");
}

void MainWindow:: auditor()
{
    ui->auditorr->setText("Отчет о лабораторном анализе");
    ui->auditora->setText("Lab Analysis Report");
}

void MainWindow:: vscpvc()
{
    ui->vscpr->setText("Взять образец, если отличается");
    ui->vscpa->setText("Take a sample if it’s different");
    ui->auditorr->setText("");
    ui->auditora->setText("");
}
void MainWindow:: contained()
{
    ui->checkr->setText("Содержит" );
    ui->checka->setText("Contained");
}
void MainWindow:: notcontained()
{
    ui->checkr->setPlainText("Не содержит");
    ui->checka->setPlainText("Not contained");
}
void MainWindow:: finalh()
{
    ui->finishr->setText("");
     ui->finisha->setText("");
}


void MainWindow :: ifelsefind()
{
    if (ui->sampler->text()!=nullptr)
    {
        samplerfloor=ui->sampler->text();
        samplerfloorlist=samplerfloor.split('-');
        samplerfloor=samplerfloorlist.at(1);
    }else
    {
        QMessageBox::critical(0, "Не выбран вид проверки пробы", "Cначала укажите как была простмотрена проба \n"
                                                                 "визуально (VC) или был проведен ЛА (IHM)");
    }
}



void MainWindow::on_foto_clicked()
{
    str = QFileDialog::getOpenFileName(0, "Открыть изображение", "", "*.jpg *.bmp *png");
    ui->nameimage->setText(QString(str));
    ui->image->setPixmap(str);
    ui->image->setScaledContents(true);


}

void MainWindow::on_fotogv_clicked()
{
    strfgv = QFileDialog::getOpenFileName(0, "Открыть изображение", "", "*.jpg *.bmp *png");
    ui->nameimagejv->setText(QString(strfgv));
    ui->imagegv->setPixmap(strfgv);
    ui->imagegv->setScaledContents(true);
}

void MainWindow::on_containedihm_triggered()
{
   ihm();
   vscp();
   auditor();
   ui->checkr->setPlainText("Содержит\n См. протокол №" );
    ui->checka->setPlainText("Contained\n Ref.to protocol № " );
    ui->finishr->setPlainText(" кг содержит");
    ui->finisha->setPlainText(" kgs of  containing");
}

void MainWindow::on_notcontainedihm_triggered()
{
    ihm();
    vscp();
    auditor();
    ui->checkr->setPlainText("Не содержит \n См. протокол №" );
     ui->checka->setPlainText("Not Contained\n Ref.to protocol № " );
     ui->finishr->setPlainText("");
      ui->finisha->setPlainText("");
}

void MainWindow::on_containevc_triggered()
{
    vc();
    vscpvc();
    contained();
    ui->finishr->setPlainText(" кг содержит \n Данный образец аналогичен номеру пробы  -IHM");
     ui->finisha->setPlainText("kgs of   containing \n This sample is similar to sample -IHM");
//     qDebug() << ui->finishr->document()->blockCount();
//     qDebug()<< ui->checkr->document()->blockCount();
//     qDebug()<< a;


}
void MainWindow::on_notcontainedvc_triggered()
{
    vc();
    vscpvc();
    notcontained();
    ui->finishr->setPlainText("Данный образец аналогичен номеру пробы  -IHM");
     ui->finisha->setPlainText("This sample is similar to sample -IHM");
//     qDebug() << ui->finishr->document()->blockCount();
//     qDebug()<< ui->checkr->document()->blockCount();


}



void MainWindow:: allhelp()
{
    helpnotif();
  //  nullhelp();
    help();
    helplocationkgbr();

//    qDebug() << "yess";
//     qDebug() << numberkg;


//    if(numberplist==numbercon.split("кг")  && numberplistcon==global.numberp.split("содержит"))
//    {qDebug() << "no";
//        helpnotif();
//        help();
//    helplocationkgbr();
    //}
}

void MainWindow::on_locationr_activated()

{
if (ui->locationr->currentText()== "Ходовой мостик"){
    ui->locationa->setText("Bridge deck");
}else if (ui->locationr->currentText()== "Крыша рулевой рубки")
{
    ui->locationa->setText("Bridge deck top");
}else if (ui->locationr->currentText()== "Палуба юта")
{
 ui->locationa->setText("Poop deck");
}else if (ui->locationr->currentText()== "Главная палуба")
{
    ui->locationa->setText("Main deck");
}else if (ui->locationr->currentText()=="Верхняя палуба")
{
    ui->locationa->setText("Upper deck");
}else if (ui->locationr->currentText()=="Палуба бака")
{
   ui->locationa->setText("Forecastle deck");
}else if (ui->locationr->currentText()=="Платформа МО")
{
   ui->locationa->setText("ER platform");

}else if (ui->locationr->currentText()=="По всему судну")
{
   ui->locationa->setText("Throughout the ship");

}else if (ui->locationr->currentText()=="палуба")
{
   ui->locationa->setText("deck");

}

}

void MainWindow::on_materialr_activated()
{
    if(ui->materialr->currentText()=="Асбест (А-1)")
    {
        ui->materiala->setText("Asbestos (А-1)");

        if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Изоляция" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг изоляции, содержащей асбест");
            ui->finisha->setText("kgs of insulation, containing asbestos");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Изоляция" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг изоляции, содержащей асбест\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of insulation, containing asbestos\n"
                                 "This sample is similar to sample  -IHM ");

        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Уплотнитель" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг уплотнителя, содержащей асбест");
            ui->finisha->setText("kgs of seal, containing asbestos");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Уплотнитель" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг уплотнителя, содержащей асбест\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of seal, containing asbestos\n"
                                 "This sample is similar to sample  -IHM ");
        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Прокладка" && ui->sampler->text().contains("IHM") )
                {
                    ui->finishr->setText("кг прокладки, содержащей асбест");
                    ui->finisha->setText("kgs of gasket, containing asbestos");

            }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Прокладка" && ui->sampler->text().contains("VC"))
                {
                    ui->finishr->setText("кг прокладки, содержащей асбест\n "
                                         "Данный образец аналогичен номеру пробы  -IHM ");
                    ui->finisha->setText("kgs of gasket, containing asbestos\n"
                                         "This sample is similar to sample  -IHM ");
                }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Тормозная накладка" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг тормозной накладки, содержащей асбест");
            ui->finisha->setText("kgs of brake lining, containing asbestos");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Тормозная накладка" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг тормозной накладки, содержащей асбест\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of brake lining, containing asbestos\n"
                                 "This sample is similar to sample  -IHM ");
        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Набивка" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг набивки, содержащей асбест");
            ui->finisha->setText("kgs of padding, containing asbestos");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Набивка" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг набивки, содержащей асбест\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of padding, containing asbestos\n"
                                 "This sample is similar to sample  -IHM ");
        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Эластичная муфта" && ui->sampler->text().contains("IHM") )
                {
                    ui->finishr->setText("кг эластичной муфты , содержащей асбест");
                    ui->finisha->setText("kgs of elastic coupling, containing asbestos");

            }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Эластичная муфта" && ui->sampler->text().contains("VC"))
                {
                    ui->finishr->setText("кг эластичной муфты, содержащей асбест\n "
                                         "Данный образец аналогичен номеру пробы  -IHM ");
                    ui->finisha->setText("kgs of elastic coupling, containing asbestos\n"
                                         "This sample is similar to sample  -IHM ");
                }



    }else if(ui->materialr->currentText()=="ПХБ (А-2)")
    {
        ui->materiala->setText("PCB (А-2)");

        if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Изоляция" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг изоляции, содержащей ПХБ");
            ui->finisha->setText("kgs of insulation, containing PCB");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Изоляция" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг изоляции, содержащей ПХБ\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of insulation, containing PCB\n"
                                 "This sample is similar to sample  -IHM ");

        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Уплотнитель" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг уплотнителя, содержащей ПХБ");
            ui->finisha->setText("kgs of seal, containing PCB");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Уплотнитель" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг уплотнителя, содержащей ПХБ\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of seal, containing PCB\n"
                                 "This sample is similar to sample  -IHM ");
        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Прокладка" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг прокладки, содержащей ПХБ");
            ui->finisha->setText("kgs of gasket, containing PCB");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Прокладка" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг прокладки, содержащей ПХБ\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of gasket, containing PCB\n"
                                 "This sample is similar to sample  -IHM ");
        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Набивка" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг набивки, содержащей ПХБ");
            ui->finisha->setText("kgs of padding, containing PCB");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Набивка" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг набивки, содержащей ПХБ\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of padding, containing PCB\n"
                                 "This sample is similar to sample  -IHM ");
        }else if(ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Эластичная муфта" && ui->sampler->text().contains("IHM") )
        {
            ui->finishr->setText("кг эластичной муфты, содержащей ПХБ");
            ui->finisha->setText("kgs of elastic coupling, containing PCB");

    }else if (ui->checkr->toPlainText().contains("Содержит")&& ui->objectr->currentText()=="Эластичная муфта" && ui->sampler->text().contains("VC"))
        {
            ui->finishr->setText("кг эластичной муфты, содержащей ПХБ\n "
                                 "Данный образец аналогичен номеру пробы  -IHM ");
            ui->finisha->setText("kgs of elastic coupling, containing PCB\n"
                                 "This sample is similar to sample  -IHM ");
        }

    }else if(ui->materialr->currentText()=="Хром (B-2)")
    {
        ui->materiala->setText("Chrome (B-2)");
        ui->finishr->setText(" кг краски содержит хром");
        ui->finisha->setText(" kgs of paint containing сhrome");
    }else if(ui->materialr->currentText()=="Кадмий (B-1)")
    {
        ui->materiala->setText("Cadmium (B-1)");
        ui->finishr->setText(" кг краски содержит кадмий");
        ui->finisha->setText(" kgs of paint containing cadmium");
    }
}

void MainWindow::vspotl()
{
    ui->vscpr->setText("Взять образец, если отличается");
    ui->vscpa->setText("Take a sample if it’s different");
}

void MainWindow:: paint(){
        ui->objectr->setCurrentText("Краска");
         ui->objecta->setText("Paint");
         ui->vscpr->setText("Взять образец краски");
         ui->vscpa->setText("Take a sample of paint");

}

void MainWindow:: on_equmentr_activated(){
if (ui->equmentr->currentText()=="Гирокомпас")
{
    vc();
    ui->equmentr->currentText();
    ui->equmenta->setText("Gyro Compass");
    ui->objectr->setCurrentText("Демпфирующая жидкость");
    ui->objecta->setText("Damping Fluid");
    ui->vscpr->setText("Визуально проверить гикокомпас, спецификацию");
    ui->vscpa->setText("Take clear visual of gyro compass with specification tally");
    ui->auditorr->setText("Производитель: , используется Демпфирующая жидкость без содержания ртути");
    ui->auditora->setText("Maker:  Mercury free damping fluid used.");
    ui->materialr->setCurrentText("Ртуть (B-4)");
    ui->materiala->setText("Mercury (and compounds) (B-4)");
    notcontained();
    finalh();
 }
if (ui->equmentr->currentText().contains("Датчик"))
{
//{numbercon.contains("содер"))

        vc();
        ui->locationr->setCurrentText("По всему судну");
        ui->locationa->setText("Throughout the ship");
        ui->equmenta->setText("Sensor");
        ui->objectr->setCurrentText("Чувствительный элемент");
        ui->objecta->setText("Detecting Element");
        ui->vscpr->setText("Визуально проверить документы на датчики");
        ui->vscpa->setText("Take a clear visual of  sensors");
        ui->auditorr->setText("Производитель: , См. техническое описание  датчика.");
        ui->auditora->setText("Marka: , See technical characteristic of  sensors.");
        ui->materialr->setCurrentText("Радиоактивный материал (B-8)");
        ui->materiala->setText("Radioavtive material (B-8)");

        if (ui->checkr->toPlainText()=="Не содержит")
        {
            notcontained();
            ui->finishr->setText("На судне используется датчики не радиоактивного типа.");
            ui->finisha->setText("The ship uses non-radioactive sensors");

        }else {
        contained();
        ui->finishr->setText(" шт. используется датчиков радиоактивного типа");
        ui->finisha->setText(" p. sensors users radioactive type");
        }
}

if (ui->equmentr->currentText()=="АКБ ГМССБ")
{

    vc();
    contained();

    ui->equmenta->setText("GMDSS Battery");
    ui->objectr->setCurrentText("Электроды");
    ui->objecta->setText("Electrodes");
    ui->vscpr->setText("Визуально проверить журнал АКБ");
    ui->vscpa->setText("Visual check of Battery log");
    ui->auditorr->setText("Производитель:  (свинцово-кислотный аккумулятор)");
    ui->auditora->setText("Marka:  (lead-acid battery)");
    ui->materialr->setCurrentText("Cвинец (В-3)");
    ui->materiala->setText("Lead (В-3)");
    ui->finishr->setText(" кг электродов содержат cвинец");
    ui->finisha->setText(" kgs of electrodes containing lead");
}

if (ui->equmentr->currentText()=="Краска днища")
{

    vc();
    ui->locationr->setCurrentText("Плоское дно");
    ui->locationa->setText("Flatt bottom");
    ui->equmenta->setText("Bottom paint");
    ui->objectr->setCurrentText("Противообрастающее покрытие");
    ui->objecta->setText("A/F Paints");
    ui->vscpr->setText("Визуально проверить документы на противообрастающее покрытие");
    ui->vscpa->setText("Take a clear visual of A/F Paints");
    ui->auditorr->setText("Международное св-во по противообрастающей системе № ");
    ui->auditora->setText("International Anti-Fouling System Certificate; Cert. no ");
    ui->materialr->setCurrentText("ТБО (A-4)");
    ui->materiala->setText("TBT (A-4)");
    notcontained();
     finalh();
}

if (ui->equmentr->currentText()=="Судовые системы")
{
    vc();
    ui->locationr->setCurrentText("По всему судну");
    ui->locationa->setText("Throughout the ship");
    ui->equmenta->setText("Ship systems");
    ui->objectr->setCurrentText("");
    ui->objecta->setText("");
    ui->vscpr->setText("Визуально проверить документы на наличие озоразрушающих веществ в судовых системах");
    ui->vscpa->setText("Take a clear visual of documents for Ozone depleting substances");
    ui->auditorr->setText("Международное св-во о предотвращении загрязнения атмосферы (2.4.6) № "
                          " и дополнение к международному св-ву о предотвращении загрязнения атмосферы (2.4.23) № ");
    ui->auditora->setText("International Air Pollution Prevention Certificate (2.4.6) № "
                          "and Supplement to the International Air Pollution Prevention Certificate (2.4.23) ");
    ui->materialr->setCurrentText("Озоразрушающие вещества (А-3)");
    ui->materiala->setText("Ozone depleting substances (А-3)");
    notcontained();
    finalh();
}

if(ui->equmentr->currentText()=="Электропроводка")
{
    on_PCHM_triggered();
    ui->equmenta->setText("Wiring");
    ui->objectr->setCurrentText("Изоляция");
    ui->objecta->setText("Insulation");
    ui->vscpr->setText("");
    ui->vscpa->setText("");
    ui->auditorr->setText("");
    ui->auditora->setText("");
    ui->materialr->setCurrentText("ПХБ (А-2)");
    ui->materiala->setText("PCB (А-2)");
    ui->finishr->setText("Электпроводка проходит по всему судну. Разборка возможна при ремонте оборудования или будет нарушена герметичность системы\n"
                         "Масса электропроводки неизвестна");
    ui->finisha->setText("Wiring run throughout the ship. Disassembly is possible when repairing equipment or the tightness of the system will be broken.\n"
                         "The mass of a wiring is unknown");
}
if (ui->equmentr->currentText().contains("Выпускной коллектор"))
{
    ui->equmenta->setText(" exhaust manifold");
paint();
}

if (ui->equmentr->currentText().contains("Выпускной коллектор ГД"))
{
   ui->equmenta->setText("Main engine exhaust manifold");
    paint();
}
if(ui->equmentr->currentText().contains("Кабельные трассы"))
{
    ui->equmenta->setText("Cable routes");
}
if(ui->equmentr->currentText().contains("Проем окна"))
{
    ui->equmenta->setText("Window opening");
}
if (ui->equmentr->currentText().contains("Противопожарная дверь"))
{
    ui->equmenta->setText("Fire door");
}
if(ui->equmentr->currentText().contains("Переборка"))
{
    ui->equmenta->setText("Bulkhead");
}
if(ui->equmentr->currentText().contains("Подволок"))
{
    ui->equmenta->setText("Ceiling");
}
if(ui->equmentr->currentText().contains("Водонепроницаемая дверь"))
{
    ui->equmenta->setText("Waterproof door");
}
if(ui->equmentr->currentText().contains("Трубопровод"))
{
    ui->equmenta->setText("Pipeline");
}
if(ui->equmentr->currentText().contains("Выпускная труба"))
{
    ui->equmenta->setText(" exhaust pipe");
}
if(ui->equmentr->currentText().contains("Спусковое устройство спасательной шлюпки"))
{
    ui->equmenta->setText("Device launching life boat");
}
if(ui->equmentr->currentText().contains("Брашпиль"))
{
    ui->equmenta->setText("Windlass");
}
if(ui->equmentr->currentText().contains("Фланцевое соединение"))
{
    ui->equmenta->setText("Flange");
}
if(ui->equmentr->currentText().contains("Фреоновый трубопровод"))
{
    ui->equmenta->setText("Freon pipeline");
}
if(ui->equmentr->currentText().contains("Выпускная труба ГД"))
{
    ui->equmenta->setText("Main engine exhaust pipe");
}
}


void MainWindow::on_objectr_activated()
{
    if(ui->objectr->currentText()== "Цемент")
    {
            ui->equmentr->setCurrentText("Покрытие пола");
            ui->equmenta->setText("Floor covering");

            ui->objecta->setText("Cement");

            ui->materialr->setCurrentText("Асбест (A-1)");
            ui->materiala->setText("Asbestos (A-1)");
              ui->finishr->setPlainText(" кг цемента содержит асбест");
              ui->finisha->setPlainText("kgs of cement containing asbestos");

            if(ui->vscpr->text()=="Взять образец, если отличается")
            {
                vspotl();
            }else
            {
                ui->vscpr->setText("Взять образец цемента");
                ui->vscpa->setText("Take a sample of cement");
            }
            if (ui->sampler->text().contains("-VC"))
           {
            ui->finishr->setPlainText(" кг цемента содержит асбест \n Данный образец аналогичен номеру пробы  -IHM");
            ui->finisha->setPlainText("kgs of cement containing asbestos \n This sample is similar to sample -IHM");



   }

    }

    if(ui->objectr->currentText()=="Виниловое покрытие")
    {
            ui->equmentr->setCurrentText("Покрытие пола");
            ui->equmenta->setText("Floor covering");

            ui->objecta->setText("Vinyl covering");

            ui->materialr->setCurrentText("ПХБ (A-2)");
            ui->materiala->setText("PCB (A-2)");
            finalh();
          //  notcontained();
            if(ui->vscpr->text()=="Взять образец, если отличается")
            {
                vspotl();
            }else
            {
                ui->vscpr->setText("Взять образец винилового  покрытия");
                ui->vscpa->setText("Take a sample of vinyl covering");
            }
            if (ui->sampler->text().contains("-VC"))
            {
                ui->finishr->setText("Данный образец аналогичен номеру пробы  -IHM");
                ui->finisha->setText("This sample is similar to sample -IHM");
            }

            if (ui->equmentr->currentText().contains("Выпускной коллектор"))
            {


                    ui->equmenta->setText(" exhaust manifold");
                    ui->objecta->setText("Paint");
                    ui->vscpr->setText("Взять образец краски");
                    ui->vscpa->setText("Take a sample of paint");

                }

    }
    if (ui->objectr->currentText()== "Изоляция")
    {
        ui->objecta->setText("Insulation");
        if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
        {
           ui->vscpr->setText("Взять образец изоляции");
           ui->vscpa->setText("Take a sample of insulation");
        }
    }
    if (ui->objectr->currentText()== "Прокладка")
    {
        ui->objecta->setText("Gasket");
        if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
        {
           ui->vscpr->setText("Взять образец прокладки");
           ui->vscpa->setText("Take a sample of gasket");
        }
    }
    if (ui->objectr->currentText()== "Уплотнитель")
    {
        ui->objecta->setText("Seal");
        if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
        {
           ui->vscpr->setText("Взять образец уплотнителя");
           ui->vscpa->setText("Take a sample of seal");
        }
    }
    if (ui->objectr->currentText()== "Тормозная накладка")
    {
        ui->objecta->setText("Brake lining");
        if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
        {
           ui->vscpr->setText("Взять образец тормозной накладки");
           ui->vscpa->setText("Take a sample of brake lining");
        }
    }
    if (ui->objectr->currentText()== "Герметик")
    {
        ui->objecta->setText("Sealant");
        if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
        {
           ui->vscpr->setText("Взять образец герметика");
           ui->vscpa->setText("Take a sample of sealant");
           finalh();
        }
    }

    if (ui->objectr->currentText()== "Набивка")
    {
        ui->objecta->setText("Padding");
        if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
        {
           ui->vscpr->setText("Взять образец набивки");
           ui->vscpa->setText("Take a sample of padding");
        }
    }
        if (ui->objectr->currentText()== "Гибкое резиновое соединение")
        {
            ui->objecta->setText("Elastic junction");
            if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
            {
               ui->vscpr->setText("Взять образец гибкого резинового соединения");
               ui->vscpa->setText("Take a sample of elastic junction");
               finalh();
            }
        }
        if (ui->objectr->currentText()== "Эластичная муфта")
        {
            ui->objecta->setText("Elastic coupling");
            if(ui->sampler->text().contains("IHM")||ui->checkr->toPlainText().contains("ПСОМ"))
            {
               ui->vscpr->setText("Взять образец эластичной муфты");
               ui->vscpa->setText("Take a sample of elastic coupling");
               finalh();
            }
        }


     if (ui->objectr->currentText() == "Краска")
     {

        vc();
        ui->equmentr->setCurrentText("Покрытие палубы");
        ui->equmenta->setText("Deck covering");
        ui->objecta->setText("Paint");
        ui->vscpr->setText("Взять образец краски");
        ui->vscpa->setText("Take a sample of paint");
        ui->auditorr->setText("Технический паспорт – ");
        ui->auditora->setText("Technical passport ");
        ui->materialr->setCurrentText("ПХБ (А-2), Cвинец (В-3)");
        ui->materiala->setText("PCB (А-2), Lead (В-3)");
        notcontained();
        ui->finishr->setText("Краска не содержит ОМ согласно Техническому паспорту.");
        ui->finisha->setText("Paint does not contain HM in accordance with Technical passport.");

    }


}

void MainWindow::vcfoto2()
{
    vcfoto ="<br><img width='225' height= '225' src='"+ui->nameimagejv->text()+"'/></td></tr>";
    if (ui->sampler->text().contains("-VC"))
    {
        vcfoto="";
    }
}


void MainWindow::on_pom_clicked()
{
    helpnotif();
  //  nullhelp();
    help();
    helplocationkgbr();
    cxom();
    vcfoto2();

if(ui->checkr->toPlainText()== "ПСОМ")
{
    numberkg="";
}

//qDebug()<< onefr;




    //save po viboru
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save"), "", tr("Htm files (*.html *.txt)"));
    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (file.open(QFile::WriteOnly | QFile::Text)) {

        QString str =   "<!DOCTYPE html>"
                        "<html>"
                        " <head>"
                        "<meta charset ='utf-8' />"
                        " <style>"
                        " table, td, th { border: 1px outset black;}"
                        ".first { border-collapse: collapse; }"
                        "</style>"
                        "</head>"
                        " <table   class='first'>"
                        "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Образец №</b>"
                        " <br>"
                        " <b style=' font-size: 10.5px; font-family: Arial; font-style: italic'>Sample ID</b></td>"
                        "<td width='300' style=' vertical-align: top; font-size:13px; font-family: Arial;'>"+ ui->sampler->text()+""
                        " <br>"
                        "<i style=' font-size: 10.5px; font-family: Arial;'>"+ ui->samplea->text()+"</i></td>"
                        " <td rowspan='9' width='300' style= 'vertical-align: top; font-size:13px; font-family: Arial;'><img width='225' height= '225' src='"+ui->nameimage->text()+"'/>"
                        +vcfoto+
                        " <tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Расположение</b>"
                        "<br>"
                        "<b style=' font-size: 10.5px; font-family: Arial; font-style: italic'>Location</b></td>"
                        "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->locationr->currentText()+""
                        " <br>"
                        "  <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->locationa->text()+"</i></td></tr>"
                        " <tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Оборудование</b>"
                        " <br>"
                        "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Equipment</b></td>"
                        " <td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->equmentr->currentText()+""
                        " <br>"
                        " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->equmenta->text()+"</td></tr>"
                        "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Объект контроля</b>"
                       "<br>"
                       " <b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Object to Check</b></td>"
                        "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->objectr->currentText()+""
                         " <br>"
                         "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial'>"+ui->objecta->text()+"</i></td></tr>"
                        "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Примечание ПВП/ППОП</b>"
                        "<br>"
                        " <b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>VSCP Remarks</b></td>"
                        "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->vscpr->text()+""
                        " <br>"
                        "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial'>"+ui->vscpa->text()+"</i></td></tr>"
                        "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Примечание проверяющего</b>"
                        " <br>"
                        "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Auditor Remarks</b></td></td>"
                        " <td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->auditorr->text()+""
                        "<br>"
                        "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->auditora->text()+"</i></td></tr>"
                        "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Материал</b>"
                        "<br>"
                        " <b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Material</b></td>"
                        "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->materialr->currentText()+""
                        "<br>"
                        " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->materiala->text()+"</i></td></tr>"
                        "  <tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Результат проверки</b>"
                        "<br>"
                        "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Check Results</b></td>"
                        "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+onechr+""+br+""+onechr2+""
                        " <br>"
                        " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+onecha+"<br>"+onecha2+"</i></td></tr>"
                        "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Заключительное примечание</b>"
                        "<br>"
                        "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Final Remarks:</b></td>"
                        " <td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+onefr+""+br1+""+onefr2+""
                        "<br>"
                        " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+onefa+"<br>"+onefa2+"</i></td></tr>"
                        "</table><br>"
                        "<b style='font-size: 16px; font-family: Arial; '><center>"+location2r+"</center></b>"
                        " <div style='height:1px'></div>"
                        "<b style='font-size: 13px; font-family: Arial;'><i><center>"+location2a+"</center></i></b><br>"
                        "<br><br><br>"
                        "<table   class='first'>"
                        " <tr><td bgcolor='yellow' width='245' style='vertical-align: center; text-align: center; font-size:13px; font-family: Arial;'><b>Контрольная точка №</b>"
                        " <br>"
                        "  <b style='vertical-align: center; font-size: 10.5px; font-family: Arial; font-style: italic'>Check Point No.</b></td>"
                        " <td bgcolor='yellow' width='310' style='vertical-align: center; text-align: center; font-size:13px; font-family: Arial;'><b>Детали контрольной точки</b>"
                        " <br>"
                        " <b style='vertical-align: center; font-size: 10.5px; font-family: Arial; font-style: italic'>Check Point Details</b></td>"
                        "<td bgcolor='yellow' width='250' style='vertical-align: center; text-align: center; font-size:13px; font-family: Arial;'><b>Объект контроля</b>"
                        " <br>"
                        "<b style='vertical-align: center; font-size: 10.5px; font-family: Arial; font-style: italic'>Object to Check</b></td>"
                        "  <td bgcolor='yellow' width='160' style='vertical-align: center; text-align: center; font-size:13px; font-family: Arial;'><b>Опасный материал</b>"
                        "<br>"
                        " <b style='vertical-align: center; font-size: 10.5px; font-family: Arial; font-style: italic'>Hazmat</b></td></tr>"
                        "<tr><td width='245' style=' vertical-align: top; font-size:13px; font-family: Arial;'>"+ ui->sampler->text()+"<br>  "+ vcr +""
                        " <br>"
                        "<i style=' vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>"+ ui->samplea->text()+ "<br> "+ vca + " </i></td>"
                        "<td  width='310' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->locationr->currentText()+",<br ><text style='text-transform: lowercase ;'>"+ui->equmentr->currentText()+"</text>"
                        "<br>"
                        "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>"+ui->locationa->text()+",<br><text style='text-transform: lowercase ;'>"+ui->equmenta->text()+"</text></i></td></td>"
                        " <td  width='250' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->objectr->currentText()+""
                        "<br>"
                        "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>"+ui->objecta->text()+"</i></td></td>"
                        " <td  width='160' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->materialr->currentText()+""
                        "<br>"
                        " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>"+ui->materiala->text()+"</i></td></tr>"
                        "   </table><br>"
                        " <table   class='first'>"
                        "<tr><td bgcolor='yellow' width='43' style='vertical-align: center; text-align: center; font-size:13,5px; font-family: Arial;'><b>№</b>  </td> "
                        "<td bgcolor='yellow' width='202' style='valign-align: center; text-align: center; font-size:12px; font-family: Arial;'><b>Наименование оборудования и механизмов</b> "
                        " <br>"
                        " <text style=' text-align: center; font-size:10.5px; font-family: Arial;'>Name of equipment and machinery</text> </td> "
                        " <td bgcolor='yellow' width='170' style='vertical-align: top; text-align: center; font-size:12px; font-family: Arial;'><b>Расположение</b>  "
                        " <br>"
                        " <text style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>Location</text> </td>"
                        " <td bgcolor='yellow' width='156' style='vertical-align: top; text-align: center; font-size:12px; font-family: Arial;'><b>Материалы</b>"
                        "<br>"
                        "<text style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>Materials</text> </td> </td>"
                        " <td bgcolor='yellow' width='170' style='vertical-align: top; text-align: center; font-size:12px; font-family: Arial;'><b>Детали, в которых используются</b> "
                        "<br>"
                        " <text style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>Parts where used</text> </td> "
                        " <td colspan='2' bgcolor='yellow' width='171' style='vertical-align: top; text-align: center; font-size:12px; font-family: Arial;'><b>Приблизительное количество</b>  "
                        " <br>"
                        "<text style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>Approximate quantity</text> </td>"
                        "<td bgcolor='yellow' width='170' style='vertical-align: top; text-align: center; font-size:12px; font-family: Arial;'><b>Примечания</b>  "
                        "<br>"
                        " <text style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>Remarks</text> </td> </tr>"
                        "<tr><td bgcolor='yellow' width='43' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>1</b>  </td>"
                        " <td bgcolor='yellow' width='202' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>2</b> </td> "
                        "<td bgcolor='yellow' width='170' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>3</b>   </td> "
                        " <td bgcolor='yellow' width='156' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>4</b> </td> "
                        "<td bgcolor='yellow' width='170' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>5</b>   </td> "
                        "<td bgcolor='yellow' width='100' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>6</b>   </td> "
                        "<td bgcolor='yellow' width='71' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>7</b>	   </td> "
                        " <td bgcolor='yellow' width='182' style='text-align: center; font-size:10.5px; font-family: Arial;'><b>8</b>   </td> "
                        " </tr><td   style= 'text-align: justify; font-size:13px; font-family: Arial;'>1.</td>  "
                        "<td  style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->equmentr->currentText()+""
                        "<br>"
                        "<i style='height: 0 pt; vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>"+ui->equmenta->text()+"</i> "
                        " </td> <td  style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->locationr->currentText()+" "
                        "<br> "
                        "<i style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>"+ui->locationa->text()+"</i> </td>"
                        " <td  style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->materialr->currentText()+""
                        " <br>"
                        "  <i style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>"+ui->materiala->text()+"</i> </td>  "
                        " <td  style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->objectr->currentText()+""
                        "<br> "
                        "<i style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>"+ui->objecta->text()+"</i> </td> "
                        "<td  style='vertical-align: top; font-size:13px; font-family: Arial;'>"+numberkg+""
                        "<br> "
                        " <td  style=' vertical-align: top; font-size:13px; font-family: Arial;'>" + datsht +
                        "<br>"
                        "<i style=' vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>" + datshta + "</i> </td> "
                        "<td  style='vertical-align: top; font-size:13px; font-family: Arial;'>"+onefr+"<br>Образец №"+ui->sampler->text()+""
                        "<br>"
                        " <i style='vertical-align: top; text-align: center; font-size:10.5px; font-family: Arial;'>"+onefa+"<br>Sample ID: "+ui->sampler->text()+"</i> </td> </tr>"
                        "</table>"
                        "  </body>"
                        "</html>"

                ;

        file.write(str.toUtf8()); // РАБОТАЕТ!!!
       nullhelp();
    }

}


void MainWindow::on_vc_clicked()
{
      allhelp();
      vcfoto2();
  //save po viboru
  QString fileName = QFileDialog::getSaveFileName(this, tr("Save"), "", tr("Htm files (*.html *.txt)"));
  if (fileName.isEmpty())
      return;

  QFile file(fileName);
  if (file.open(QFile::WriteOnly | QFile::Text)) {

      QString str =   "<!DOCTYPE html>"
                      "<html>"
                      " <head>"
                      "<meta charset ='utf-8' />"
                      " <style>"
                      " table, td, th { border: 1px outset black;}"
                      ".first { border-collapse: collapse; }"
                      "</style>"

                      " </head>"
                      " <body>"
                      " <table   class='first'>"
                      "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Образец №</b>"
                      " <br>"
                      " <b style=' font-size: 10.5px; font-family: Arial; font-style: italic'>Sample ID</b></td>"
                      "<td width='300' style=' vertical-align: top; font-size:13px; font-family: Arial;'>"+ ui->sampler->text()+""
                      " <br>"
                      "<i style=' font-size: 10.5px; font-family: Arial;'>"+ ui->samplea->text()+"</i></td>"
                      " <td rowspan='9' width='300' style= 'vertical-align: top; font-size:13px; font-family: Arial;'><img width='225' height= '225' src='"+ui->nameimage->text()+"'/>"
                      +vcfoto+
                      " <tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Расположение</b>"
                      "<br>"
                      "<b style=' font-size: 10.5px; font-family: Arial; font-style: italic'>Location</b></td>"
                      "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->locationr->currentText()+""
                      " <br>"
                      "  <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->locationa->text()+"</i></td></tr>"
                      " <tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Оборудование</b>"
                      " <br>"
                      "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Equipment</b></td>"
                      " <td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->equmentr->currentText()+""
                      " <br>"
                      " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->equmenta->text()+"</td></tr>"
                      "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Объект контроля</b>"
                     "<br>"
                     " <b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Object to Check</b></td>"
                      "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->objectr->currentText()+""
                       " <br>"
                       "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial'>"+ui->objecta->text()+"</i></td></tr>"
                      "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Примечание ПВП/ППОП</b>"
                      "<br>"
                      " <b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>VSCP Remarks</b></td>"
                      "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->vscpr->text()+""
                      " <br>"
                      "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial'>"+ui->vscpa->text()+"</i></td></tr>"
                      "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Примечание проверяющего</b>"
                      " <br>"
                      "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Auditor Remarks</b></td></td>"
                      " <td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->auditorr->text()+""
                      "<br>"
                      "<i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->auditora->text()+"</i></td></tr>"
                      "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Материал</b>"
                      "<br>"
                      " <b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Material</b></td>"
                      "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+ui->materialr->currentText()+""
                      "<br>"
                      " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+ui->materiala->text()+"</i></td></tr>"
                      "  <tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Результат проверки</b>"
                      "<br>"
                      "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Check Results</b></td>"
                      "<td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+onechr+""+br+""+onechr2+""
                      " <br>"
                      " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+onecha+"<br>"+onecha2+"</i></td></tr>"
                      "<tr><td width='210' style='vertical-align: top; font-size:13px; font-family: Arial;'><b>Заключительное примечание</b>"
                      "<br>"
                      "<b style='vertical-align: top; font-size: 10.5px; font-family: Arial; font-style: italic'>Final Remarks:</b></td>"
                      " <td width='300' style='vertical-align: top; font-size:13px; font-family: Arial;'>"+onefr+""+br1+""+onefr2+""
                      "<br>"
                      " <i style='vertical-align: top; font-size: 10.5px; font-family: Arial;'>"+onefa+"<br>"+onefa2+"</i></td></tr>"
                      "</table><br>"
                     "  </body>"
                     "</html>";
                      file.write(str.toUtf8()); // РАБОТАЕТ!!!
                       }
  nullhelp();
}




