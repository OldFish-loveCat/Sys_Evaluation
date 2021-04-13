#ifndef ADDMERBER_H
#define ADDMERBER_H

#include <QWidget>
#include <healthassess.h>

namespace Ui {
class AddMerber;
}

class AddMerber : public QWidget
{
    Q_OBJECT

public:
    explicit AddMerber(QWidget *parent = nullptr);
    ~AddMerber();

private slots:
    void on_healthAssess_clicked();

private:
    Ui::AddMerber *ui;
    HealthAssess *healthassess;
};

#endif // ADDMERBER_H
