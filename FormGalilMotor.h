#ifndef FORMGALILMOTOR_H
#define FORMGALILMOTOR_H

#include <QWidget>

#include "FormGalilMotorExpert.h"

#include "macros.h"
#include "client.h"

namespace Ui {
class FormGalilMotor;
}

class FormGalilMotor : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilMotor(QString group, QWidget *parent = 0);
    ~FormGalilMotor();

private slots:
    void on_btnExpert_clicked();

    void on_btnStop_clicked();

private:
    Ui::FormGalilMotor *ui;
    FormGalilMotorExpert* expert;

    QString group;
};

#endif // FORMGALILMOTOR_H
