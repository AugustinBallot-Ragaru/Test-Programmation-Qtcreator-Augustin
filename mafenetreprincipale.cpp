#include "mafenetreprincipale.h"
#include "ui_mafenetreprincipale.h"

MafenetrePrincipale::MafenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MafenetrePrincipale)
{
    ui->setupUi(this);
}

MafenetrePrincipale::~MafenetrePrincipale()
{
    delete ui;
}

void MafenetrePrincipale::on_pushButton_2_destroyed()
{
    qApp->quit();
}

void MafenetrePrincipale::on_horizontalSlider_2_valueChanged(int value)
{

}

void MafenetrePrincipale::on_progressBar_valueChanged(int value)
{

}

