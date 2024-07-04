#include "blocks2stacks.h"
#include "./ui_blocks2stacks.h"
#include <QSpinBox>

blocks2stacks::blocks2stacks(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::blocks2stacks)
{
    ui->setupUi(this);

    // Disable maximizing
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
    setFixedSize(size());

    connect(ui->blocksSpinBox_2, SIGNAL(valueChanged(int)), this, SLOT(on_blocksSpinBox_2_valueChanged(int)));
    connect(ui->stacksSpinBox, SIGNAL(valueChanged(int)), this, SLOT(on_stacksSpinBox_valueChanged(int)));
    connect(ui->blocksSpinBox, SIGNAL(valueChanged(int)), this, SLOT(on_blocksSpinBox_valueChanged(int)));
}

blocks2stacks::~blocks2stacks()
{
    delete ui;
}

// Scripts that do the math
void blocks2stacks::calcStacks(int blocks)
{
    // Declare variables
    int stacks, calcdBlocks;
    float stacksDecimal;

    // Calculate stacks and blocks
    stacksDecimal = blocks/64.0;
    stacks = floor(stacksDecimal);
    calcdBlocks = ((stacksDecimal-stacks)*64);

    // Set values in spinboxes and disable them to avoid infinite loops
    ui->stacksSpinBox->blockSignals(true);
    ui->blocksSpinBox->blockSignals(true);

    ui->stacksSpinBox->setValue(stacks);
    ui->blocksSpinBox->setValue(calcdBlocks);

    // Re-enable spinbox
    ui->stacksSpinBox->blockSignals(false);
    ui->blocksSpinBox->blockSignals(false);
}

void blocks2stacks::calcBlocks()
{
    // Declare variables
    int stacks, blocks, calcdBlocks;

    // Get values
    stacks = ui->stacksSpinBox->value();
    blocks = ui->blocksSpinBox->value();

    // Calculate blocks
    calcdBlocks = blocks+(stacks*64);

    // Set value in spinbox, disable it and re-enable it
    ui->blocksSpinBox_2->blockSignals(true);
    ui->blocksSpinBox_2->setValue(calcdBlocks);
    ui->blocksSpinBox_2->blockSignals(false);
}

void blocks2stacks::on_stacksSpinBox_valueChanged(int stacks)
{
    // calculate blocks if user interacts with stacks spin box
    ui->stacksSpinBox->blockSignals(true);
    ui->blocksSpinBox_2->blockSignals(true);
    calcBlocks();
    ui->stacksSpinBox->blockSignals(false);
    ui->blocksSpinBox_2->blockSignals(false);
}

void blocks2stacks::on_blocksSpinBox_valueChanged(int blocks)
{
    ui->blocksSpinBox->blockSignals(true);
    ui->stacksSpinBox->blockSignals(true);
    ui->blocksSpinBox_2->blockSignals(true);
    calcBlocks();
    ui->blocksSpinBox_2->blockSignals(false);
    ui->blocksSpinBox->blockSignals(false);
    ui->stacksSpinBox->blockSignals(false);
}

void blocks2stacks::on_blocksSpinBox_2_valueChanged(int blocks)
{
    calcStacks(blocks);
}
