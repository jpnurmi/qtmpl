import QtQuick 2.5

Rectangle {
    id: rectangle
    property alias listView: listView

    width: 360
    height: 360

    Column {
        id: column
        spacing: 20
        anchors.fill: parent

        Text {
            id: title
            text: qsTr("Qt app template")
            anchors.rightMargin: 20
            horizontalAlignment: Text.AlignHCenter
            anchors.right: parent.right
            anchors.left: parent.left
            anchors.leftMargin: 20
            font.pixelSize: 20
        }

        Text {
            id: description
            text: qsTr("This is a mobile-oriented Qt Quick based UI for a Qt application template that illustrates how to share the same backend for multiple user interfaces.")
            anchors.rightMargin: 20
            wrapMode: Text.WordWrap
            anchors.right: parent.right
            anchors.left: parent.left
            anchors.leftMargin: 20
            font.pixelSize: 12
        }

        Text {
            id: note
            text: qsTr("The following dummy list view contains the titles of loaded plugins:")
            anchors.rightMargin: 20
            wrapMode: Text.WordWrap
            anchors.right: parent.right
            anchors.left: parent.left
            anchors.leftMargin: 20
            font.pixelSize: 12
        }

        ListView {
            id: listView
            height: column.height - title.height - description.height - note.height - 3 * column.spacing
            anchors.rightMargin: 20
            anchors.right: parent.right
            anchors.left: parent.left
            anchors.leftMargin: 20
            spacing: 10
        }
    }
}
