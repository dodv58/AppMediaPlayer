#include "hdr/appengine.h"

AppEngine::AppEngine(QGuiApplication *app, QQmlApplicationEngine *engine, QObject *parent) : QObject(parent)
  ,qmlEngine(engine)
{
    qmlEngine->load(QUrl(QStringLiteral("qrc:/main.qml")));
}
