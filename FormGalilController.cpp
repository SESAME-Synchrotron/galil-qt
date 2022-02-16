#include "FormGalilController.h"
#include "ui_FormGalilController.h"

FormGalilController::FormGalilController(QString group, QString axis, QString cs, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormGalilController),
    axisMotors{""},
    csMotors{""}
{
    ui->setupUi(this);
    this->group = group;
    this->ui->lblTitle->setText(this->group + " Motion Controller Overview");
    this->group += ":";

    QStringList items = axis.split(",");
    if(items.size() != MOTORS_COUNT)
    {
        std::cout << "Invalid Motors Count." << std::endl;
        exit(1);
    }

    for(int i = 0; i < items.size(); i++)
    {
        if(!items[i].isEmpty())
            this->axisMotors[i] = items[i];
        else
            this->axisMotors[i] = (QChar)(i + 65);
    }

    if(!cs.isEmpty())
    {
        items = cs.split(",");
        if(items.size() != MOTORS_COUNT)
        {
            std::cout << "Invalid CS Motors Count." << std::endl;
            exit(1);
        }
        for(int i = 0; i < items.size(); i++)
        {
            this->findChild<QComboBox*>("cbMotorA_" + QString::number(i + 9))->setEnabled(true);
            if(!items[i].isEmpty())
                this->csMotors[i] = items[i];
            else
                this->csMotors[i] = (QChar)(i + 73);
        }
    }

    CONNECT_CLOSE_BUTTON;
    SET_GROUP(QELabel);
    SET_GROUP(QEComboBox);
    SET_GROUP(QELineEdit);

    foreach (QComboBox* box, this->findChildren<QComboBox*>(QRegExp("cbMotorA_*")))
    {
        QObject::connect(box, SIGNAL(currentIndexChanged(int)), this, SLOT(motorSelectionChanged()));
    }

    this->biss = NULL;
}

FormGalilController::~FormGalilController()
{
    delete ui;
}

void FormGalilController::motorSelectionChanged()
{
    QComboBox* box = ((QComboBox*) sender());
    int id = box->objectName().split("_")[1].toInt();
    int index = box->currentIndex();

    QString motorName = this->group;
    if(id < 9)
    {
        motorName += this->axisMotors[id - 1];
        switch(index)
        {
        case 1:
            this->motor = new FormGalilMotor(motorName);
            showUI(motor);
            break;

        case 2:
            this->extras = new FormGalilMotorExtras(motorName);
            showUI(extras);
            break;

        case 3:
            this->ssi = new FormGalilMotorSSI(motorName);
            showUI(ssi);
            break;

        case 4:
            this->biss = new FormGalilMotorBISS(motorName);
            showUI(this->biss);
            break;

        case 5:
            break;

        default:
            break;
        }

        box->setCurrentIndex(0);
    }
    else
    {
        motorName += this->csMotors[id - 9];
        switch(index)
        {
        case 1:
            this->motor = new FormGalilMotor(motorName);
            showUI(motor);
            break;

        case 2:
            this->csKinmetics = new FormGalilCSKinematics(motorName, this->csMotors);
            showUI(csKinmetics);
            break;

        default:
            break;
        }

        box->setCurrentIndex(0);
    }
}

void FormGalilController::on_btnIO_clicked()
{
    this->io = new FormGalilControllerIO(this->group);
    showUI(io);
}

void FormGalilController::on_btnCS_clicked()
{
    this->cs = new FormGalilCS(this->group);
    showUI(cs);
}
