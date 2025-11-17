#pragma once

#include <QCborValue>
#include <QDateTime>
#include <QUuid>
#include <QUrl>
#include <QByteArray>

void DemoQCBorValue() {
    QCborValue value1(1);
    QCborValue value2(true);
    QCborValue value3(false);
    QCborValue value4(nullptr);
    QCborValue value5;
    QCborValue value6(static_cast<qint64>(1));
    QCborValue value7("qwerty");
    QCborValue value8(QDateTime::currentDateTimeUtc());
    QCborValue value9(QUuid::createUuid());
    QCborValue value10(QUrl("https://google.com"));
    QCborValue value11(QByteArray(10, 'y'));
    QCborValue value12(100.1);
    QCborValue value13(QRegularExpression("https://*."));
}