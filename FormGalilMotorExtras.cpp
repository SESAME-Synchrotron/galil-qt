#include "FormGalilMotorExtras.h"
#include "ui_FormGalilMotorExtras.h"

FormGalilMotorExtras::FormGalilMotorExtras(QString group, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormGalilMotorExtras)
{
    ui->setupUi(this);
    this->group = group;
    this->ui->lblTitle->setText(this->group + " Motor Extras");

    CONNECT_CLOSE_BUTTON;
    SET_GROUP(QELabel);
    SET_GROUP(QEComboBox);
    SET_GROUP(QELineEdit);
}

FormGalilMotorExtras::~FormGalilMotorExtras()
{
    delete ui;
}
