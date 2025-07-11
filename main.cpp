#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "MessageProvider.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    MessageProvider msgProvider;
    engine.rootContext()->setContextProperty("msgProvider", &msgProvider);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    engine.load(url);

    return app.exec();
}
