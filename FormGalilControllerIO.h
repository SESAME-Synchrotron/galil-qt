#ifndef FORMGALILCONTROLLERIO_H
#define FORMGALILCONTROLLERIO_H

#include <QMainWindow>

#include "macros.h"

namespace Ui {
class FormGalilControllerIO;
}

class FormGalilControllerIO : public QMainWindow
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
