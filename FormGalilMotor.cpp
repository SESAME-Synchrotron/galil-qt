#include "FormGalilMotor.h"
#include "ui_FormGalilMotor.h"

FormGalilMotor::FormGalilMotor(QString group, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormGalilMotor)
{
    ui->setupUi(this);
    this->group = group;
    this->ui->lblTitle->setText("Motor " + this->group + " Overview");

    CONNECT_CLOSE_BUTTON;
    SET_GROUP(QELabel);
    SET_GROUP(QELineEdit);
    SET_GROUP(QEPushButton);
    SET_GROUP(QEComboBox);
}

FormGalilMotor::~FormGalilMotor()
{
    delete ui;
}

void FormGalilMotor::on_btnExpert_clicked()
{
    this->expert = new FormGalilMotorExpert(this->group);
    _SHOW_UI(expert);
}