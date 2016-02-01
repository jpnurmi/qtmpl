#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <qqml.h>

#include "backendmodel.h"
#include "pluginloader.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<BackendModel>("qtmpl", 1, 0, "BackendModel");

    QQmlApplicationEngine engine;

    QStringList plugins;
    foreach (PluginInterface *plugin, PluginLoader::plugins())
        plugins += plugin->title();
    engine.rootContext()->setContextProperty("plugins", plugins);

    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    return app.exec();
}
