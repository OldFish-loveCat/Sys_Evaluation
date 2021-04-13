#ifndef HEALTHASSESS_H
#define HEALTHASSESS_H

#include <QWidget>

namespace Ui {
class HealthAssess;
}

class HealthAssess : public QWidget
{
    Q_OBJECT

public:
    explicit HealthAssess(QWidget *parent = nullptr);
    ~HealthAssess();

private slots:
    void on_goBack_clicked();

private:
    Ui::HealthAssess *ui;
};

#endif // HEALTHASSESS_H
