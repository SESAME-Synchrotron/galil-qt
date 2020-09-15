#include "FormGalilCSKinematics.h"
#include "ui_FormGalilCSKinematics.h"

FormGalilCSKinematics::FormGalilCSKinematics(QString group, QString cs[], QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormGalilCSKinematics)
{
    ui->setupUi(this);
    this->group = group;

    CONNECT_CLOSE_BUTTON;
    SET_GROUP(QELineEdit);

    QString group2 = this->group.split(":")[0];
    QChar axis = ' ';
    for(int i = 0; i < 8; i++)
    {
        axis = i + 73;
        this->findChild<QELineEdit*>("txtDescription" + QString(axis))->setVariableNameSubstitutionsProperty
                ("motor" + STRING(i + 9) + "=" + group2 + ":" + cs[i]);
        this->findChild<QELineEdit*>("txtTransform" + QString(axis))->setVariableNameSubstitutionsProperty
                ("motor" + STRING(i + 9) + "=" + group2 + ":" + cs[i]);
    }

    this->ui->lblError->setVariableNameProperty(group2 + ":ERROR_MON");
    this->ui->lblName->setVariableNameProperty(this->group + ".NAME");
}

FormGalilCSKinematics::~FormGalilCSKinematics()
{
    delete ui;
}
