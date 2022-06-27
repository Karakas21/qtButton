#include <QApplication>
#include "widget.h"
#include "newform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QPushButton *button1 = new QPushButton("Нажми меня");

    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addStretch();
    hlayout->addWidget(button1);
    hlayout->addStretch();

    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addStretch();
    vlayout->addLayout(hlayout);
    vlayout->addStretch();

    w.setLayout(vlayout);

    NewForm *new_form = new NewForm;
    QObject::connect(button1, SIGNAL(clicked()), new_form, SLOT(startProgram()));

    w.show();

    return a.exec();
}
