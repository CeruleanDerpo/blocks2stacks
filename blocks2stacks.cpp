#include "blocks2stacks.h"
#include "./ui_blocks2stacks.h"
#include <QSpinBox>

blocks2stacks::blocks2stacks(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::blocks2stacks)
{
    ui->setupUi(this);
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

    // Set values in spinboxes
    ui->stacksSpinBox->setValue(stacks);
    ui->blocksSpinBox->setValue(calcdBlocks);
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

    // Set value in spinbox
    ui->blocksSpinBox_2->setValue(calcdBlocks);
}

// Calculate when spinbox values change
void blocks2stacks::on_blocksSpinBox_2_valueChanged(int blocks)
{
    calcStacks(blocks);
}

void blocks2stacks::on_stacksSpinBox_valueChanged(int stacks)
{
    calcBlocks();
}

void blocks2stacks::on_blocksSpinBox_valueChanged(int blocks)
{
    calcBlocks();
}

