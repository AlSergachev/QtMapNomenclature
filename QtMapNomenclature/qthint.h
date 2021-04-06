#ifndef QTHINT_H
#define QTHINT_H

#include <QWidget>

namespace Ui {
class QtHint;
}

class QtHint : public QWidget
{
    Q_OBJECT

public:
    explicit QtHint(QWidget *parent = nullptr);
    ~QtHint();

private:
    Ui::QtHint *ui;
};

#endif // QTHINT_H
