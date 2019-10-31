#include "FormGalilMotorExpert.h"
#include "ui_FormGalilMotorExpert.h"

FormGalilMotorExpert::FormGalilMotorExpert(QString group, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormGalilMotorExpert)
{
    ui->setupUi(this);
    this->group = group;
    this->ui->lblTitle->setText("Motor " + this->group + " Expert Control");

    CONNECT_CLOSE_BUTTON;
    SET_GROUP(QELineEdit);
    SET_GROUP(QELabel);
    SET_GROUP(QEComboBox);
    SET_GROUP(QEPushButton);
}

FormGalilMotorExpert::~FormGalilMotorExpert()
{
    delete ui;
}
