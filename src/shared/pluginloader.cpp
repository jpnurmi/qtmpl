#include "pluginloader.h"

#include <QDir>
#include <QDebug>
#include <QLibrary>
#include <QFileInfo>
#include <QPluginLoader>
#include <QCoreApplication>

static QList<PluginInterface *> loadPlugins(const QStringList& paths)
{
    QList<PluginInterface *> plugins;
    foreach (const QString& path, paths) {
        foreach (const QFileInfo& file, QDir(path).entryInfoList(QDir::Files)) {
            if (QLibrary::isLibrary(file.fileName())) {
                QPluginLoader loader(file.filePath());
                if (!loader.load()) {
                    qWarning() << loader.errorString();
                } else {
                    PluginInterface *plugin = qobject_cast<PluginInterface *>(loader.instance());
                    if (plugin)
                        plugins += plugin;
                }
            }
        }
    }
    return plugins;
}

static QStringList pluginPaths()
{
    QStringList paths;
    paths += QTMPL_INSTALL_PLUGINS;

    QDir dir(QCoreApplication::applicationDirPath());
#ifdef Q_OS_MAC
    if (dir.dirName() == "MacOS" && dir.cd("../PlugIns"))
        paths += dir.absolutePath();
    else
#endif
    if (dir.dirName() == "bin" && dir.cd("../plugins"))
        paths += dir.absolutePath();
    return paths;
}

QList<PluginInterface *> PluginLoader::plugins()
{
    static QList<PluginInterface *> instances;
    if (instances.isEmpty())
        instances = loadPlugins(pluginPaths());
    return instances;
}
