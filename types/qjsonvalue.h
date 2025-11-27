#pragma once

#include <QJsonDocument>
#include <QJsonObject>

void DemoQJsonValue() {
    QByteArray jsonData1(R"({"prop1":1,
"prop2":1.1,
"prop3": true,
"prop4": false,
"prop5": "value5",
"prop5a": "2025-10-31T23:59:59+0300",
"prop6": null,
"prop7": [1, 1.1, true, false, "value7", null],
"prop8": {"subProp1": 1, "subProp2": 1.1, "subProp3": [true, false, "subValue8"],
"subObject": {"subProp4": "value4"}}})");

    QJsonDocument document1 = QJsonDocument::fromJson(jsonData1);
    QJsonObject obj1 = document1.object();

    const auto prop1 = obj1.take("prop1");
    const auto prop2 = obj1.take("prop2");
    const auto prop3 = obj1.take("prop3");
    const auto prop4 = obj1.take("prop4");
    const auto prop5 = obj1.take("prop5");
    const auto prop5a = obj1.take("prop5a");
    const auto prop6 = obj1.take("prop6");
    const auto prop7 = obj1.take("prop7");
    const auto prop8 = obj1.take("prop8");
}