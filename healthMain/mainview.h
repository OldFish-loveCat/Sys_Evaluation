#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <histroyassess.h>
#include <nurseplans.h>


namespace Ui {
class Mainview;
}

class Mainview : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainview(QWidget *parent = nullptr);
    ~Mainview();

private slots:
    void on_historyAssess_clicked();

    void on_nurseAssess_clicked();

private:
    Ui::Mainview *ui;
    HistroyAssess *historyassess;
    NursePlans *nurseplans;

};

#endif // MAINVIEW_H
