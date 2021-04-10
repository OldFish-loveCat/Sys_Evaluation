#ifndef HISTROYASSESS_H
#define HISTROYASSESS_H

#include <QWidget>

namespace Ui {
class HistroyAssess;
}

class HistroyAssess : public QWidget
{
    Q_OBJECT

public:
    explicit HistroyAssess(QWidget *parent = nullptr);
    ~HistroyAssess();

private:
    Ui::HistroyAssess *ui;
};

#endif // HISTROYASSESS_H
