/********************************************************************************
** Form generated from reading UI file 'blocks2stacks.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKS2STACKS_H
#define UI_BLOCKS2STACKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blocks2stacks
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *blocksGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *blocksSpinBox_2;
    QGroupBox *stacksGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *stacksLabel;
    QSpinBox *stacksSpinBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *blocksLabel;
    QSpinBox *blocksSpinBox;

    void setupUi(QMainWindow *blocks2stacks)
    {
        if (blocks2stacks->objectName().isEmpty())
            blocks2stacks->setObjectName("blocks2stacks");
        blocks2stacks->resize(283, 223);
        blocks2stacks->setMaximumSize(QSize(560, 360));
        centralwidget = new QWidget(blocks2stacks);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        blocksGroupBox = new QGroupBox(centralwidget);
        blocksGroupBox->setObjectName("blocksGroupBox");
        horizontalLayout_2 = new QHBoxLayout(blocksGroupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(blocksGroupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        blocksSpinBox_2 = new QSpinBox(blocksGroupBox);
        blocksSpinBox_2->setObjectName("blocksSpinBox_2");
        blocksSpinBox_2->setMinimum(0);
        blocksSpinBox_2->setMaximum(99999);

        horizontalLayout_2->addWidget(blocksSpinBox_2);


        verticalLayout->addWidget(blocksGroupBox);

        stacksGroupBox = new QGroupBox(centralwidget);
        stacksGroupBox->setObjectName("stacksGroupBox");
        horizontalLayout_3 = new QHBoxLayout(stacksGroupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        stacksLabel = new QLabel(stacksGroupBox);
        stacksLabel->setObjectName("stacksLabel");

        horizontalLayout_4->addWidget(stacksLabel);

        stacksSpinBox = new QSpinBox(stacksGroupBox);
        stacksSpinBox->setObjectName("stacksSpinBox");
        stacksSpinBox->setMaximum(99999);

        horizontalLayout_4->addWidget(stacksSpinBox);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        blocksLabel = new QLabel(stacksGroupBox);
        blocksLabel->setObjectName("blocksLabel");

        horizontalLayout->addWidget(blocksLabel);

        blocksSpinBox = new QSpinBox(stacksGroupBox);
        blocksSpinBox->setObjectName("blocksSpinBox");
        blocksSpinBox->setMinimum(0);
        blocksSpinBox->setMaximum(63);

        horizontalLayout->addWidget(blocksSpinBox);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(stacksGroupBox);


        verticalLayout_2->addLayout(verticalLayout);

        blocks2stacks->setCentralWidget(centralwidget);

        retranslateUi(blocks2stacks);

        QMetaObject::connectSlotsByName(blocks2stacks);
    } // setupUi

    void retranslateUi(QMainWindow *blocks2stacks)
    {
        blocks2stacks->setWindowTitle(QCoreApplication::translate("blocks2stacks", "blocks2stacks", nullptr));
        blocksGroupBox->setTitle(QCoreApplication::translate("blocks2stacks", "Blocks", nullptr));
        label_3->setText(QCoreApplication::translate("blocks2stacks", "Blocks", nullptr));
        stacksGroupBox->setTitle(QCoreApplication::translate("blocks2stacks", "Stacks", nullptr));
        stacksLabel->setText(QCoreApplication::translate("blocks2stacks", "Stacks", nullptr));
        blocksLabel->setText(QCoreApplication::translate("blocks2stacks", "Blocks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class blocks2stacks: public Ui_blocks2stacks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKS2STACKS_H
