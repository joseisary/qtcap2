#include "MessageProvider.h"

MessageProvider::MessageProvider(QObject *parent)
    : QObject(parent), m_message("Hello from C++!")
{
}

QString MessageProvider::message() const
{
    return m_message;
}

void MessageProvider::setMessage(const QString &newMessage)
{
    if (m_message != newMessage) {
        m_message = newMessage;
        emit messageChanged();
    }
}
