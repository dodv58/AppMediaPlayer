import QtQuick 2.6
import QtQuick.Window 2.2
import "audio"

Window {
    visible: true
    width: 1092
    height: 656
    title: qsTr("Hello World")

    Rectangle{
        id: coverImagebg
        anchors.fill: parent

    }

    Image {
        id: dimImage
        source: "qrc:/images/bg_geely_c.png"
    }

    AudioPlayback {
        anchors.fill: parent
    }

}
