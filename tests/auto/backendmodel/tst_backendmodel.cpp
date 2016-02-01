#include <QtTest>
#include "backendmodel.h"

class tst_BackendModel: public QObject
{
    Q_OBJECT

private slots:
    void append();
};

void tst_BackendModel::append()
{
    BackendModel model;
    QCOMPARE(model.rowCount(), 0);

    model.append("foo");
    QCOMPARE(model.rowCount(), 1);
    QCOMPARE(model.data(model.index(0), Qt::DisplayRole).toString(), QString("foo"));
}

QTEST_MAIN(tst_BackendModel)

#include "tst_backendmodel.moc"
