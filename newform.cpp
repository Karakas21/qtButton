#include "newform.h"


void NewForm::startProgram() {
    QDialog dlg(this);
    dlg.setWindowTitle(tr("Create File"));
    QDialogButtonBox *btn_box = new QDialogButtonBox(&dlg);
    btn_box->setStandardButtons(QDialogButtonBox::Ok | QDialogButtonBox::Ok);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(btn_box);
    connect(btn_box, &QDialogButtonBox::accepted, &dlg, &QDialog::accept);

    dlg.setLayout(layout);
    if(dlg.exec() == QDialog::Accepted) {
        readFile();
        exit(0);
    }
}

void NewForm::readFile() {
    QFile mFile("../FileTxt.txt");
    mFile.open(QFile::WriteOnly | QFile::Text);
    QTextStream out(&mFile);
    out<< "Миру Мир!";
    mFile.close();
}
