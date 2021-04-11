#ifndef ADDMERBER_H
#define ADDMERBER_H

#include <QWidget>

namespace Ui {
class AddMerber;
}

class AddMerber : public QWidget
{
    Q_OBJECT

public:
    explicit AddMerber(QWidget *parent = nullptr);
    ~AddMerber();

private:
    Ui::AddMerber *ui;
};

#endif // ADDMERBER_H
