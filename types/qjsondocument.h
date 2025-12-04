#include <QJsonDocument>

void DemoQJsonDocument() {
    QByteArray jsonData1(R"({"prop1":1,"prop2":2})");
    QByteArray jsonData2(R"(["element1", "element2"])");

    QJsonDocument document0;
    QJsonDocument document1 = QJsonDocument::fromJson(jsonData1);
    QJsonDocument document2 = QJsonDocument::fromJson(jsonData2);
}