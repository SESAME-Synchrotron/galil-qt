#ifndef FORMGALILCSKINEMATICS_H
#define FORMGALILCSKINEMATICS_H

#include <QMainWindow>

#include "macros.h"

namespace Ui {
class FormGalilCSKinematics;
}

class FormGalilCSKinematics : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormGalilCSKinematics(QString group, QString cs[8], QWidget *parent = 0);
    ~FormGalilCSKinematics();

private:
    Ui::FormGalilCSKinematics *ui;

    QString group;
};

#endif // FORMGALILCSKINEMATICS_H
