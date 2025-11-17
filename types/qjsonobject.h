#include <QJsonDocument>
#include <QJsonObject>

void DemoQJsonObject() {
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

    QJsonDocument document0;
    QJsonDocument document1 = QJsonDocument::fromJson(jsonData1);
    QJsonObject obj1 = document1.object();
    auto obj1It = obj1.begin();
    auto obj1Cit = obj1.constBegin();
}