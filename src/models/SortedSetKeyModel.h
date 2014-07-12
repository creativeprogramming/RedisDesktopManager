#ifndef SORTEDSETKEYMODEL_H
#define SORTEDSETKEYMODEL_H

#include "KeyModel.h"
#include "PaginatedModel.h"

class SortedSetKeyModel : public PaginatedModel
{
    Q_OBJECT

public:
    SortedSetKeyModel(RedisClient::Connection * db, const QString &keyName, int dbIndex);

    void setCurrentPage(int page);

    int itemsCount();

    void loadValue();

    void updateValue(const QString& value, const QModelIndex *cellIndex);

protected slots:
    void loadedUpdateStatus(RedisClient::Response);
};

#endif // SORTEDSETKEYMODEL_H