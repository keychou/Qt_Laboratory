#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"

GotoCellDialog::GotoCellDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GotoCellDialog)
{
    ui->setupUi(this);
}

GotoCellDialog::~GotoCellDialog()
{
    delete ui;
}
