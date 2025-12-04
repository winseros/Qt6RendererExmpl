#pragma once

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

void DemoQJsonValueConstRef() {
    QByteArray jsonData1(R"({"prop1":1,"prop2":1.1,"prop3": true,"prop4": null})");
    QByteArray jsonData2(R"([1, 1.1, true, false, [1, 2], {"prop": 1}])");

    QJsonDocument document1 = QJsonDocument::fromJson(jsonData1);
    QJsonDocument document2 = QJsonDocument::fromJson(jsonData2);
    QJsonObject obj1 = document1.object();
    const QJsonObject obj1c = document1.object();
    QJsonArray arr2 = document2.array();

    const auto prop1CR = *obj1c.find("prop1");
    const auto prop2CR = *obj1c.find("prop2");
    const auto prop3CR = *obj1c.find("prop3");
    const auto prop4CR = *obj1c.find("prop4");

    const auto prop1R = *obj1.find("prop1");
    const auto prop2R = *obj1.find("prop2");
    const auto prop3R = *obj1.find("prop3");
    const auto prop4R = *obj1.find("prop4");

    auto elemCRiter = arr2.constBegin();
    while (elemCRiter != arr2.constEnd()) {
        const auto elemCR = *elemCRiter;
        ++elemCRiter;
    }

    auto elemR1 = arr2[0];
    auto elemR2 = arr2[1];
    auto elemR3 = arr2[3];
    auto elemR4 = arr2[4];
    auto elemR5 = arr2[5];
}