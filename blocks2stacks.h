#ifndef BLOCKS2STACKS_H
#define BLOCKS2STACKS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class blocks2stacks; }
QT_END_NAMESPACE

class blocks2stacks : public QMainWindow
{
    Q_OBJECT

public:
    blocks2stacks(QWidget *parent = nullptr);
    ~blocks2stacks();

private slots:
    // Calculate stacks and blocks

    void calcStacks(int blocks);

    void calcBlocks();

    // Run functions when spinbox values change
    void on_blocksSpinBox_2_valueChanged(int blocks);

    void on_stacksSpinBox_valueChanged(int stacks);

    void on_blocksSpinBox_valueChanged(int blocks);

private:
    Ui::blocks2stacks *ui;
};
#endif // BLOCKS2STACKS_H
