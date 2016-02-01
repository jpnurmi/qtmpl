#include <QObject>
#include <QtPlugin>

#include "plugininterface.h"

class ExamplePlugin : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID "qtmpl.PluginInterface")

public:
    QString title() const { return "ExamplePlugin"; }
};

#include "example.moc"
