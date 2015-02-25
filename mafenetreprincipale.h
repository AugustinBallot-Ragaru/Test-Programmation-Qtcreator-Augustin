#ifndef MAFENETREPRINCIPALE_H
#define MAFENETREPRINCIPALE_H

#include <QMainWindow>

namespace Ui {
class MafenetrePrincipale;
}

class MafenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit MafenetrePrincipale(QWidget *parent = 0);
    ~MafenetrePrincipale();

private slots:
    void on_pushButton_2_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_progressBar_valueChanged(int value);

    void on_pushButton_2_destroyed();

private:
    Ui::MafenetrePrincipale *ui;
};

#endif // MAFENETREPRINCIPALE_H
