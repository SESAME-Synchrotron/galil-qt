#ifndef _MACROS_H
#define _MACROS_H

#include <QDesktopWidget>
#include <QApplication>
#include <QStyle>
#include <QUiLoader>
#include <QFile>
#include <QPushButton>

#define CONNECT_CLOSE_BUTTON \
    QObject::connect(this->ui->btnClose, SIGNAL(clicked()), this, SLOT(close())); \

#define SET_GROUP(CLASS) \
    foreach (CLASS* widget, this->findChildren<CLASS*>()) \
    { \
        widget->setVariableNameSubstitutionsProperty("group=" + this->group); \
    } \

#define SHOW_UI(X) \
    this->X->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, this->X->size(), qApp->desktop()->availableGeometry())); \
    this->X->show();

#define STRING(X) \
    QString::number(X) \

#define FIX_SIZE \
    setFixedSize(width(), height()) \

void _SHOW_UI(QWidget* widget);
void loadUI(QString fileName);

#endif // _MACROS_H
