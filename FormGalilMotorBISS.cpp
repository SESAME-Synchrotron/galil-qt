#include "FormGalilMotorBISS.h"
#include "ui_FormGalilMotorBISS.h"

FormGalilMotorBISS::FormGalilMotorBISS(QString group, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormGalilMotorBISS)
{
    ui->setupUi(this);

    this->group = group;
    SET_GROUP(QELabel);
    SET_GROUP(QEComboBox);
    SET_GROUP(QELineEdit);
    CONNECT_CLOSE_BUTTON;
}

FormGalilMotorBISS::~FormGalilMotorBISS()
{
    delete ui;
}
