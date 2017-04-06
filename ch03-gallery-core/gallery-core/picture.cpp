#include "picture.h"

Picture::Picture(const QString &filePath) :
    Picture(QUrl::fromLocalFile(filePath))
{

}

Picture::Picture(const QUrl &fileUrl) :
    mId(-1),
    mAlbimId(-1),
    mFileUrl(fileUrl)
{

}

int Picture::id() const
{
    return mId;
}

void Picture::setId(int id)
{
    mId = id;
}

int Picture::albumId() const
{
    return mAlbimId;
}

void Picture::setAlbumId(int albumId)
{
    mAlbimId = albumId;
}

QUrl Picture::fileUrl() const
{
    return mFileUrl;
}

void Picture::setFileUrl(const QUrl &fileUrl)
{
    mFileUrl = fileUrl;
}
