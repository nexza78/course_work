#ifndef OPERATOR_H
#define OPERATOR_H

#include <QMainWindow>

namespace Ui {
class operator;
}

class operator : public QMainWindow
{
    Q_OBJECT

public:
    explicit operator(QWidget *parent = nullptr);
    ~operator();

private:
    Ui::operator *ui;
};

#endif // OPERATOR_H
