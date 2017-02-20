#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "hdr/appengine.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    AppEngine appEngine(&app, &engine);

    return app.exec();
}
