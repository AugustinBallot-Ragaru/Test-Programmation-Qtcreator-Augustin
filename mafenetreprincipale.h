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

private:
    Ui::MafenetrePrincipale *ui;
};

#endif // MAFENETREPRINCIPALE_H
