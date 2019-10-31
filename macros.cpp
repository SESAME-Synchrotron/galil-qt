#include "macros.h"

void _SHOW_UI(QWidget* widget)
{
    widget->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, widget->size(), qApp->desktop()->availableGeometry()));
    widget->show();
}

void loadUI(QString fileName)
{
    QUiLoader loader;
    QFile file(fileName);
    file.open(QFile::ReadOnly);
    QWidget* w = loader.load(&file);
    QObject::connect(w->findChild<QPushButton*>("btnClose"), SIGNAL(clicked(bool)), w, SLOT(close()));
    _SHOW_UI(w);
}
