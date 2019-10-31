#ifndef FORMGALILMOTORSTATUS_H
#define FORMGALILMOTORSTATUS_H

#include <QWidget>

#include "macros.h"
#include <qepicspv.h>

#include <iostream>

namespace Ui {
class FormGalilMotorStatus;
}

class FormGalilMotorStatus : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilMotorStatus(QString group, QWidget *parent = 0);
    ~FormGalilMotorStatus();

private slots:
    void onStatusChanged(QVariant value);

private:
    Ui::FormGalilMotorStatus *ui;

    QString group;
    QEpicsPV* pvStatus;
};

#endif // FORMGALILMOTORSTATUS_H
