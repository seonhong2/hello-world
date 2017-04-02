#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "picture.h"
#include "picturedao.h"


PictureDao::PictureDao(QSqlDatabase &database)
{

}

void PictureDao::init() const
{
    if (!mDatabase.tables().contains("pictures"))
    {
        QSqlQuery query(mDatabase);
        query.exec(QString("CREATE TABLE pictures")
                   + " (id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   + "album_id INTEGER, "
                   + "url TEXT)");
    }
}
