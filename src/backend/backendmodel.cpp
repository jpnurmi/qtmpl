#include "backendmodel.h"

BackendModel::BackendModel(QObject *parent) :
    QStringListModel(parent)
{
}

void BackendModel::append(const QString &value)
{
    int row = rowCount();
    insertRows(row, 1);
    setData(index(row), value);
}
