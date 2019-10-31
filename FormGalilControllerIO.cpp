#include "FormGalilControllerIO.h"
#include "ui_FormGalilControllerIO.h"

FormGalilControllerIO::FormGalilControllerIO(QString group, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormGalilControllerIO)
{
    ui->setupUi(this);
    this->group = group;

    CONNECT_CLOSE_BUTTON;
    ui->lblTitle->setText(this->group + " Controller IO");

    int byte = 0;
    int bit = 0;

    // Outputs
    for(bit = 0; bit <= 15; bit++)
    {
        if(bit < 8)
        {
            this->findChild<QESimpleShape*>(QString("ledByteOut%1_%2").arg(STRING(1), STRING(bit)))->setVariableNameProperty
                    (QString().sprintf("%sGalil%dBo%d_STATUS.VAL", this->group.toStdString().c_str(), 1, bit));
            this->findChild<QELineEdit*>(QString("txtByteOut%1_%2").arg(STRING(1), STRING(bit)))->setVariableNameProperty
                    (QString().sprintf("%sGalil%dBo%d_CMD.DESC", this->group.toStdString().c_str(), 1, bit));
        }

        this->findChild<QESimpleShape*>(QString("ledByteOut%1_%2").arg(STRING(byte), STRING(bit)))->setVariableNameProperty
                (QString().sprintf("%sGalil%dBo%d_STATUS.VAL", this->group.toStdString().c_str(), byte, bit));
        this->findChild<QELineEdit*>(QString("txtByteOut%1_%2").arg(STRING(byte), STRING(bit)))->setVariableNameProperty
                (QString().sprintf("%sGalil%dBo%d_CMD.DESC", this->group.toStdString().c_str(), byte, bit));
    }

    // Inputs
    for(byte = 0; byte <= 2; byte++)
    {
        for(bit = 0; bit <= 7; bit++)
        {
            this->findChild<QESimpleShape*>(QString("ledByte%1_%2").arg(STRING(byte), STRING(bit)))->setVariableNameProperty
                    (QString().sprintf("%sGalil%dBi%d_STATUS.VAL", this->group.toStdString().c_str(), byte, bit));
            this->findChild<QELineEdit*>(QString("txtByte%1_%2").arg(STRING(byte), STRING(bit)))->setVariableNameProperty
                    (QString().sprintf("%sGalil%dBi%d_STATUS.DESC", this->group.toStdString().c_str(), byte, bit));
        }
    }

    QString subs = "";
    foreach (QEPushButton* widget, this->findChildren<QEPushButton*>())
    {
        subs = widget->getVariableNameSubstitutionsProperty();
        widget->setVariableNameSubstitutionsProperty("group=" + this->group + "," + subs);
    }
}

FormGalilControllerIO::~FormGalilControllerIO()
{
    delete ui;
}
