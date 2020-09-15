#ifndef FORMGALILCS_H
#define FORMGALILCS_H

#include <QMainWindow>

#include "macros.h"

namespace Ui {
class FormGalilCS;
}

class FormGalilCS : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormGalilCS(QString group, QWidget *parent = 0);
    ~FormGalilCS();

private:
    Ui::FormGalilCS *ui;
    QString group;
};

#endif // FORMGALILCS_H
