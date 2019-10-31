#ifndef FORMGALILMOTOREXPERT_H
#define FORMGALILMOTOREXPERT_H

#include <QWidget>

#include "macros.h"
#include "FormGalilMotorStatus.h"

namespace Ui {
class FormGalilMotorExpert;
}

class FormGalilMotorExpert : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilMotorExpert(QString group, QWidget *parent = 0);
    ~FormGalilMotorExpert();

private slots:
    void on_btnStatus_clicked();

private:
    Ui::FormGalilMotorExpert *ui;

    FormGalilMotorStatus* status;

    QString group;
};

#endif // FORMGALILMOTOREXPERT_H
