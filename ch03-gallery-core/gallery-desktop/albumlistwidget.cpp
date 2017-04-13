#include "albumlistwidget.h"
#include "ui_albumlistwidget.h"

#include <QInputDialog>

#include "albummodel.h"

AlbumListWidget::AlbumListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlbumListWidget)
{
    ui->setupUi(this);
}

AlbumListWidget::~AlbumListWidget()
{
    delete ui;
}

void AlbumListWidget::setModel(AlbumModel *model)
{
    mAlbumModel = model;
    ui->albumList->setModel(mAlbumModel);
}

void AlbumListWidget::setSelectionModel(QItemSelectionModel *selectionModel)
{
    ui->albumList->setSelectionModel(selectionModel);
}
