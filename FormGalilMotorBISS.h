#ifndef FORMGALILMOTORBISS_H
#define FORMGALILMOTORBISS_H

#include <QMainWindow>

#include "macros.h"

namespace Ui {
class FormGalilMotorBISS;
}

class FormGalilMotorBISS : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormGalilMotorBISS(QString group, QWidget *parent = nullptr);
    ~FormGalilMotorBISS();

private:
    Ui::FormGalilMotorBISS *ui;

    QString group;
};

#endif // FORMGALILMOTORBISS_H
