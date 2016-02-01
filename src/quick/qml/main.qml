import QtQuick 2.5
import QtQuick.Window 2.2
import qtmpl 1.0

Window {
    width: 360
    height: 480
    visible: true
    title: "Qt app template"

    MainForm {
        anchors.fill: parent

        listView.delegate: Text {
            text: model.display
        }

        listView.model: BackendModel {
            id: backendModel
        }
    }

    Component.onCompleted: {
        for (var i = 0; i < plugins.length; ++i)
            backendModel.append(plugins[i])
    }
}
