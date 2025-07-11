import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 200
    title: ""

    Column {
        anchors.centerIn: parent
        spacing: 10

        Text {
            id: messageText
            text: msgProvider.message
            font.pointSize: 20
        }

        TextField {
            id: inputField
            placeholderText: "Type a new message"
        }

        Button {
            text: "Update Message"
            onClicked: msgProvider.message = inputField.text
        }
    }
}
