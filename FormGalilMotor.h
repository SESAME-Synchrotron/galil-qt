#ifndef FORMGALILMOTOR_H
#define FORMGALILMOTOR_H

#include <QMainWindow>

#include "FormGalilMotorExpert.h"

#include "macros.h"
#include "client.h"

namespace Ui {
class FormGalilMotor;
}

class FormGalilMotor : public QMainWindow
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
