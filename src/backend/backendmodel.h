#ifndef BACKENDMODEL_H
#define BACKENDMODEL_H

#include <QStringListModel>

class BackendModel : public QStringListModel
{
    Q_OBJECT

public:
    explicit BackendModel(QObject *parent = 0);

    Q_INVOKABLE void append(const QString &value);
};

#endif // BACKENDMODEL_H
