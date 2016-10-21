import QtQuick 2.7
import QtQuick.Controls 2.0


Rectangle {
    id: root
    width: 400; height: 200;
    color: "#fff8c2"

    Text {
        id: sourceElement

        width: parent.width
        anchors.top: parent.top
        height: parent.height / 6

        font.bold: true
        font.pixelSize: 20
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter

        text: trans[0].source
    }

    ListView {
        width: parent.width
        height: parent.height * 2 / 3
        anchors.top: sourceElement.bottom

        clip: true

        model: trans
        delegate: TranslationView {}
    }

    Row {
        width: parent.width
        height: parent.height / 6
        anchors.bottom: parent.bottom

        leftPadding: 5
        rightPadding: 5
        topPadding: 3
        bottomPadding: 3

        spacing: 4

        Button {
            id: closeButton

            text: "Close"
            height: parent.height - 6
            width: 100

            background: Rectangle {
                color: closeButton.down ? '#7fb5b5' : '#c7d0cc'
            }

            onClicked: {
                controller.closeWindow(identificator);
            }
        }

        Button {
            id: createButton

            text: "Create Card"
            height: parent.height - 6
            width: 100

            background: Rectangle {
                color: createButton.down ? '#7fb5b5' : '#c7d0cc'
            }
        }

        Button {
            id: createLaterButton

            text: "Create later"
            height: parent.height - 6
            width: 100

            background: Rectangle {
                color: createLaterButton.down ? '#7fb5b5' : '#c7d0cc'
            }
        }

    }


//    Button {
//        text: "YPdsfdsfdsf"
//        onClicked: {
//            console.log(identificator)
//        }
//    }

}