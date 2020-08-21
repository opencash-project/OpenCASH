// Copyright (c) 2017-2018 The OCASH Developers
// Copyright (c) 2018 The OCASHCOIN Developers 
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZOCASHCONTROLDIALOG_H
#define ZOCASHCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class Z0cashControlDialog;
}

class CZ0cashControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZ0cashControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZ0cashControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZ0cashControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class Z0cashControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Z0cashControlDialog(QWidget *parent);
    ~Z0cashControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::Z0cashControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZ0cashControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZOCASHCONTROLDIALOG_H
