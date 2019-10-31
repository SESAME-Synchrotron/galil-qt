#ifndef FORMGALILCONTROLLERIO_H
#define FORMGALILCONTROLLERIO_H

#include <QWidget>

#include "macros.h"

namespace Ui {
class FormGalilControllerIO;
}

class FormGalilControllerIO : public QWidget
{
    Q_OBJECT

public:
    explicit FormGalilControllerIO(QString group, QWidget *parent = 0);
    ~FormGalilControllerIO();

private:
    Ui::FormGalilControllerIO *ui;

    QString group;
};

#endif // FORMGALILCONTROLLERIO_H
