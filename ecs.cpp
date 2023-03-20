#include "ecs.h"

ECS::ECS()
{
    cars.push_back(Car(1));
    cars.push_back(Car(2));
}

void ECS::assignRequestToCar(QString currFloor, QString destFloor){
    cars[0].selectedFloors.push_back(currFloor.toInt());
    cars[0].selectedFloors.push_back(destFloor.toInt());
//assign to the nearest elevator
//assign to every other elevator
}

void ECS::moveCars(){
    if(this->strategy == "default"){
        while(cars[0].selectedFloors.size()>0)
            cars[0].moveCar();
    }else{

    }
}
void ECS::moveToSafeFloor(){
    cars[0].selectedFloors.resize(0);
    cars[0].selectedFloors.push_back(safeFloor);
    cars[0].moveCar(this->isEmergency);
}
void ECS::powerOutagePress(){
   qInfo("there is a power outage");
   qInfo("moving to a safe floor");
   qInfo("switching to battery power");
   this->powerSource = "battery";
   moveToSafeFloor();
}
void ECS::fireButtonPress(){
    this->safety.fireButtonPress();
    this->safety.Fire = true;
    this->isEmergency = true;
    moveToSafeFloor();
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
