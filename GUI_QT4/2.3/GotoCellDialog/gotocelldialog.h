#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QMainWindow>

namespace Ui {
class GotoCellDialog;
}

class GotoCellDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit GotoCellDialog(QWidget *parent = 0);
    ~GotoCellDialog();

private:
    Ui::GotoCellDialog *ui;
};

#endif // GOTOCELLDIALOG_H
