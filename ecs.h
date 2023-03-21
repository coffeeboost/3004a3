#ifndef ECS_H
#define ECS_H
#include <car.h>
#include <string>
#include <QString>
using namespace std;
#include <QDebug>
#include <safety.h>
class ECS
{
public:
    ECS();
    ECS(int numCars);
    vector<Car> cars;
    bool isEmergency = false;
    string strategy = "default";
    string powerSource = "main";
    int safeFloor = 0;
    void changeAllocationStrategy();
    void assignRequestToCar(QString,QString);
    void moveCars();
    void fireButtonPress();
    void powerOutagePress();
    void moveToSafeFloor();
    void helpButtonPress();
    Safety safety;
};

#endif // ECS_H
