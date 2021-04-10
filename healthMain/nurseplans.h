#ifndef NURSEPLANS_H
#define NURSEPLANS_H

#include <QWidget>
#include <histroyassess.h>

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

    void on_verticalScrollBar_sliderMoved(int position);

private:
    Ui::NursePlans *ui;
    HistroyAssess *historyassess;
};

#endif // NURSEPLANS_H
