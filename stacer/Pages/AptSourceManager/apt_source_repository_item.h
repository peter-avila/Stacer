#ifndef APTSourceRepositoryItem_H
#define APTSourceRepositoryItem_H

#include <QWidget>
#include <QFileInfo>
#include "Managers/tool_manager.h"

namespace Ui {
class APTSourceRepositoryItem;
}

class APTSourceRepositoryItem : public QWidget
{
    Q_OBJECT

public:
    explicit APTSourceRepositoryItem(APTSourcePtr aptSource,
                               QWidget *parent = 0);

    ~APTSourceRepositoryItem();

public:
    APTSourcePtr aptSource() const;

private slots:
    void on_aptSourceCheck_clicked(bool checked);
//    void on_deleteAptSourceBtn_clicked();
//    void on_editAptSourceBtn_clicked();

private:
    void init();

private:
    Ui::APTSourceRepositoryItem *ui;

    APTSourcePtr mAptSource;
};

#endif
