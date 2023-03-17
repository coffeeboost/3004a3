#ifndef ECS_H
#define ECS_H
#include <car.h>
#include <string>
#include <QString>
using namespace std;
#include <QDebug>

class ECS
{
public:
    ECS();
    vector<Car> cars;
    bool isEmergency = false;
    string strategy = "default";
    void changeAllocationStrategy();
    void assignRequestToCar(QString,QString);
//    void move
};

#endif // ECS_H
