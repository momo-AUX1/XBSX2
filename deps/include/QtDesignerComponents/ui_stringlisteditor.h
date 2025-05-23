/*

* Copyright (C) 2016 The Qt Company Ltd.
* SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

*/

/********************************************************************************
** Form generated from reading UI file 'stringlisteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGLISTEDITOR_H
#define UI_STRINGLISTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

namespace qdesigner_internal {

class Ui_Dialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QToolButton *newButton;
    QToolButton *deleteButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QLineEdit *valueEdit;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *spacerItem1;
    QToolButton *upButton;
    QToolButton *downButton;
    QSpacerItem *spacerItem2;
    QListView *listView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *qdesigner_internal__Dialog)
    {
        if (qdesigner_internal__Dialog->objectName().isEmpty())
            qdesigner_internal__Dialog->setObjectName("qdesigner_internal__Dialog");
        qdesigner_internal__Dialog->resize(400, 300);
        vboxLayout = new QVBoxLayout(qdesigner_internal__Dialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(qdesigner_internal__Dialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName("gridLayout");
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName("vboxLayout1");
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName("hboxLayout");
        newButton = new QToolButton(groupBox);
        newButton->setObjectName("newButton");
        newButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(newButton);

        deleteButton = new QToolButton(groupBox);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(deleteButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName("hboxLayout1");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        hboxLayout1->addWidget(label);

        valueEdit = new QLineEdit(groupBox);
        valueEdit->setObjectName("valueEdit");

        hboxLayout1->addWidget(valueEdit);


        vboxLayout1->addLayout(hboxLayout1);


        gridLayout->addLayout(vboxLayout1, 1, 0, 1, 2);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName("vboxLayout2");
        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout2->addItem(spacerItem1);

        upButton = new QToolButton(groupBox);
        upButton->setObjectName("upButton");

        vboxLayout2->addWidget(upButton);

        downButton = new QToolButton(groupBox);
        downButton->setObjectName("downButton");

        vboxLayout2->addWidget(downButton);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        gridLayout->addLayout(vboxLayout2, 0, 1, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(qdesigner_internal__Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(valueEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(qdesigner_internal__Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, qdesigner_internal__Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, qdesigner_internal__Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(qdesigner_internal__Dialog);
    } // setupUi

    void retranslateUi(QDialog *qdesigner_internal__Dialog)
    {
        qdesigner_internal__Dialog->setWindowTitle(QCoreApplication::translate("qdesigner_internal::Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("qdesigner_internal::Dialog", "StringList", nullptr));
#if QT_CONFIG(tooltip)
        newButton->setToolTip(QCoreApplication::translate("qdesigner_internal::Dialog", "New String", nullptr));
#endif // QT_CONFIG(tooltip)
        newButton->setText(QCoreApplication::translate("qdesigner_internal::Dialog", "&New", nullptr));
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("qdesigner_internal::Dialog", "Delete String", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QCoreApplication::translate("qdesigner_internal::Dialog", "&Delete", nullptr));
        label->setText(QCoreApplication::translate("qdesigner_internal::Dialog", "&Value:", nullptr));
#if QT_CONFIG(tooltip)
        upButton->setToolTip(QCoreApplication::translate("qdesigner_internal::Dialog", "Move String Up", nullptr));
#endif // QT_CONFIG(tooltip)
        upButton->setText(QCoreApplication::translate("qdesigner_internal::Dialog", "Up", nullptr));
#if QT_CONFIG(tooltip)
        downButton->setToolTip(QCoreApplication::translate("qdesigner_internal::Dialog", "Move String Down", nullptr));
#endif // QT_CONFIG(tooltip)
        downButton->setText(QCoreApplication::translate("qdesigner_internal::Dialog", "Down", nullptr));
    } // retranslateUi

};

} // namespace qdesigner_internal

namespace qdesigner_internal {
namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui
} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // UI_STRINGLISTEDITOR_H
