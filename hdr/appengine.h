#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QGuiApplication>

class AppEngine : public QObject
{
    Q_OBJECT
public:
    explicit AppEngine(QGuiApplication* app, QQmlApplicationEngine *engine, QObject *parent = 0);


private:
    QQmlApplicationEngine *qmlEngine;

signals:

public slots:
};

#endif // APPENGINE_H
