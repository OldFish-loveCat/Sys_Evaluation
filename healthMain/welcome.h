#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>
#include <mainview.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_LogIn_clicked();

private:
    Ui::Dialog *ui;
    Mainview *mainview;
};

#endif // WELCOME_H
