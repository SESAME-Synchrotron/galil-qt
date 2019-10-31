#include "FormGalilMotorStatus.h"
#include "ui_FormGalilMotorStatus.h"

FormGalilMotorStatus::FormGalilMotorStatus(QString group, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormGalilMotorStatus)
{
    ui->setupUi(this);
    CONNECT_CLOSE_BUTTON;

    this->group = group;
    this->pvStatus = new QEpicsPV(this->group + ".MSTA");
    QObject::connect(this->pvStatus, SIGNAL(valueChanged(QVariant)), this, SLOT(onStatusChanged(QVariant)));

    ui->lblTitle->setText(this->group + " Status");
}

FormGalilMotorStatus::~FormGalilMotorStatus()
{
    delete ui;
}

void FormGalilMotorStatus::onStatusChanged(QVariant value)
{
    int status = value.toInt();
    for(int i = 0; i <= 15; i++)
    {
        this->findChild<QSimpleShape*>("led_" + STRING(i))->setValue((status >> i) & 1);
    }
}
