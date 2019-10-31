#ifndef FORMGALILCONTROLLER_H
#define FORMGALILCONTROLLER_H

#include <QWidget>

#include "macros.h"
#include "FormGalilMotor.h"
#include "FormGalilMotorExtras.h"
#include "FormGalilMotorSSI.h"
#include "FormGalilCSKinematics.h"
#include "FormGalilControllerIO.h"
#include "FormGalilCS.h"

namespace Ui {
class FormGalilController;
}

class FormGalilController : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilController(QString group, QString axis, QString cs = "", QWidget *parent = 0);
    ~FormGalilController();

private slots:
    void motorSelectionChanged();

    void on_btnIO_clicked();

    void on_btnCS_clicked();

private:
    Ui::FormGalilController *ui;

    FormGalilMotor* motor;
    FormGalilMotorExtras* extras;
    FormGalilMotorSSI* ssi;
    FormGalilCSKinematics* csKinmetics;
    FormGalilControllerIO* io;
    FormGalilCS* cs;

    QString group;
    QString axisMotors[8];
    QString csMotors[8];
};

#endif // FORMGALILCONTROLLER_H
