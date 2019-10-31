#ifndef FORMGALILMOTOREXTRAS_H
#define FORMGALILMOTOREXTRAS_H

#include <QWidget>

#include "macros.h"

namespace Ui {
class FormGalilMotorExtras;
}

class FormGalilMotorExtras : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilMotorExtras(QString group, QWidget *parent = 0);
    ~FormGalilMotorExtras();

private:
    Ui::FormGalilMotorExtras *ui;

    QString group;
};

#endif // FORMGALILMOTOREXTRAS_H
