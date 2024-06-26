#include "FormGalilMotorSSI.h"
#include "ui_FormGalilMotorSSI.h"

FormGalilMotorSSI::FormGalilMotorSSI(QString group, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormGalilMotorSSI)
{
    ui->setupUi(this);
    this->group = group;
    this->ui->lblTitle->setText("Motor " + this->group + " SSI");

    CONNECT_CLOSE_BUTTON;
    SET_GROUP(QELabel);
    SET_GROUP(QELineEdit);
    SET_GROUP(QEComboBox);
}

FormGalilMotorSSI::~FormGalilMotorSSI()
{
    delete ui;
}
