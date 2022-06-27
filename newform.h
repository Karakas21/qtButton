#ifndef NEWFORM_H
#define NEWFORM_H
#include <QObject>
#include <QtWidgets>
#include <QDialog>
#include <QString>
#include "widget.h"

class NewForm: public QWidget
{
    Q_OBJECT
public slots:

    void startProgram();

    void readFile();
};

#endif // NEWFORM_H
