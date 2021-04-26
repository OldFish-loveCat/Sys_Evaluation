#ifndef PLANSDETAILS_H
#define PLANSDETAILS_H

#include <QWidget>

namespace Ui {
class Plansdetails;
}

class Plansdetails : public QWidget
{
    Q_OBJECT

public:
    explicit Plansdetails(QWidget *parent = nullptr);
    ~Plansdetails();

private:
    Ui::Plansdetails *ui;
};

#endif // PLANSDETAILS_H
