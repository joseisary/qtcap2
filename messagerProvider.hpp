#ifndef MESSAGEPROVIDER_H
#define MESSAGEPROVIDER_H

#include <QObject>

class MessageProvider : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)

public:
    explicit MessageProvider(QObject *parent = nullptr);

    QString message() const;
    void setMessage(const QString &newMessage);

signals:
    void messageChanged();

private:
    QString m_message;
};

#endif // MESSAGEPROVIDER_H
