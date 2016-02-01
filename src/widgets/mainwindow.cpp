#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include "backendmodel.h"
#include "pluginloader.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    BackendModel *model = new BackendModel(ui->listView);
    foreach (PluginInterface *plugin, PluginLoader::plugins())
        model->append(plugin->title());

    ui->listView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showAbout()
{
    QMessageBox::information(this, tr("Qt app template"),
                             tr("This is a desktop-oriented Qt Widgets based UI for a Qt application template "
                                "that illustrates how to share the same backend for multiple user interfaces."));
}
