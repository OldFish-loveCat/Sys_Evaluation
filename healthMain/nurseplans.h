#ifndef NURSEPLANS_H
#define NURSEPLANS_H

#include <QWidget>
#include <histroyassess.h>
#include <plansdetails.h>

namespace Ui {
class NursePlans;
}

class NursePlans : public QWidget
{
    Q_OBJECT

public:
    explicit NursePlans(QWidget *parent = nullptr);
    ~NursePlans();

private slots:
    void on_pushButton_clicked();

    void on_mplans_clicked();

private:
    Ui::NursePlans *ui;
    HistroyAssess *historyassess;
    Plansdetails *plandetails;
};

#endif // NURSEPLANS_H
