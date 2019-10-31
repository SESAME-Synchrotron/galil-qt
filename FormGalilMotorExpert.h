#ifndef FORMGALILMOTOREXPERT_H
#define FORMGALILMOTOREXPERT_H

#include <QWidget>

#include "macros.h"

namespace Ui {
class FormGalilMotorExpert;
}

class FormGalilMotorExpert : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilMotorExpert(QString group, QWidget *parent = 0);
    ~FormGalilMotorExpert();

private:
    Ui::FormGalilMotorExpert *ui;

    QString group;
};

#endif // FORMGALILMOTOREXPERT_H
