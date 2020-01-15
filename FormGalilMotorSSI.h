#ifndef FORMGALILMOTORSSI_H
#define FORMGALILMOTORSSI_H

#include <QMainWindow>

#include "macros.h"

namespace Ui {
class FormGalilMotorSSI;
}

class FormGalilMotorSSI : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormGalilMotorSSI(QString group, QWidget *parent = 0);
    ~FormGalilMotorSSI();

private:
    Ui::FormGalilMotorSSI *ui;

    QString group;
};

#endif // FORMGALILMOTORSSI_H
