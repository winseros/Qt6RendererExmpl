#include <QJsonDocument>
#include <QJsonArray>

void DemoQJsonArray() {
    QByteArray jsonData1(R"([1, 1.1, true, false, "value5", "2025-10-31T23:59:59+0300", null, [1, 1.1, true, false, "value7", null],
{"subProp1": 1, "subProp2": 1.1, "subProp3": [true, false, "subValue8"]}, {"subProp4": "value4"}])");

    QJsonDocument document0;
    QJsonDocument document1 = QJsonDocument::fromJson(jsonData1);
    QJsonArray arr1 = document1.array();
    auto arr1It = arr1.begin();
    auto arr1Cit = arr1.constBegin();
}