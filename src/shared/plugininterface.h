#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QString>

class PluginInterface
{
public:
    ~PluginInterface() { }

    virtual QString title() const = 0;
};

Q_DECLARE_INTERFACE(PluginInterface, "qtmpl.PluginInterface")

#endif // PLUGININTERFACE_H
