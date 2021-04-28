#ifndef MEMBERS_H
#define MEMBERS_H

#include <QWidget>
#include <plansdetails.h>

namespace Ui {
class Members;
}

class Members : public QWidget
{
    Q_OBJECT

public:
    explicit Members(QWidget *parent = nullptr);
    ~Members();
    void setMemberName(QString name);

private slots:
    void on_Buttoncheck_clicked();
    void getmakemember();

private:
    Ui::Members *ui;
    Plansdetails *plandetails;
    QString basename;

};

#endif // MEMBERS_H
