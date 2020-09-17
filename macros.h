#ifndef _MACROS_H
#define _MACROS_H

#include <QDesktopWidget>
#include <QApplication>
#include <QStyle>
#include <QUiLoader>
#include <QFile>
#include <QPushButton>

void showUI(QWidget* widget);
void loadUI(QString fileName);

#define CONNECT_CLOSE_BUTTON \
    QObject::connect(this->ui->btnClose, SIGNAL(clicked()), this, SLOT(close())); \

#define SET_GROUP(CLASS) \
    foreach (CLASS* widget, this->findChildren<CLASS*>()) \
    { \
        widget->setVariableNameSubstitutionsProperty("group=" + this->group); \
    }

#define STRING(X) \
    QString::number(X) \

#define FIX_SIZE \
    setFixedSize(width(), height()) \

#define COLOR_DARKGREEN QColor(20, 60, 20)

#define OPEN_UI(object, CLASS, ...)      \
    if(!object || !object->isVisible())  \
        object = new CLASS(__VA_ARGS__); \
    showUI(object);                    \

#define TITLE_MAIN "SESAME Control System"

#endif // _MACROS_H
