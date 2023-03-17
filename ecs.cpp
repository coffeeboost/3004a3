#include "ecs.h"

ECS::ECS()
{
    cars.push_back(Car(1));
    cars.push_back(Car(2));
}

void ECS::assignRequestToCar(QString currFloor, QString destFloor){
    cars[0].selectedFloors.push_back(currFloor);
    cars[0].selectedFloors.push_back(destFloor);
//assign to the nearest elevator
//assign to every other elevator
}

/*s ECS
{
public:
    ECS();
    vector<Car> cars;
    bool isEmergency;
    string strategy;
    void changeAllocationStrategy();
};*/
