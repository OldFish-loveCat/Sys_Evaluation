#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <QDialog>
#include <histroyassess.h>
#include <nurseplans.h>
#include <addmerber.h>
#include <members.h>


namespace Ui {
class Mainview;
}

class Mainview : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainview(QWidget *parent = nullptr);
    ~Mainview();

signals:
    void sendmakemember(void);

private slots:
    void on_historyAssess_clicked();

    void on_nurseAssess_clicked();

    void on_addMember_clicked();

    void on_showmember_clicked();

private:
    int menber;
    Ui::Mainview *ui;
    HistroyAssess *historyassess;
    NursePlans *nurseplans;
    AddMerber *addmerber;
    Members *members;

    void makepushbutton(QString name, QString content);
    void showoutmember();
    void showmembers();

};

#endif // MAINVIEW_H
