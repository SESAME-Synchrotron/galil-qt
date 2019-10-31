#include "FormGalilCS.h"
#include "ui_FormGalilCS.h"

FormGalilCS::FormGalilCS(QString group, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormGalilCS)
{
    ui->setupUi(this);
    CONNECT_CLOSE_BUTTON;
    this->group = group;

    ui->lblTitle->setText(group + " Coordinate Systems");

    SET_GROUP(QELabel);
    SET_GROUP(QEPushButton);
    SET_GROUP(QEComboBox);
}

FormGalilCS::~FormGalilCS()
{
    delete ui;
}
