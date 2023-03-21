#include "ecs.h"

ECS::ECS()
{
    cars.push_back(Car(1));
    cars.push_back(Car(2));
}

ECS::ECS(int numCars)
{
    for(int i=0;i<numCars;i++){
        cars.push_back(Car(i));
    }
}
void ECS::helpButtonPress(){
    this->safety.helpButtonPress();
}
void ECS::assignRequestToCar(QString currFloor, QString destFloor){
    int cur = currFloor.toInt();
    int dest = destFloor.toInt();
    if(this->strategy == "default"){
        //the first allication strategy is to only use one elevator no matter what
        cars[0].selectedFloors.push_back(cur);
        cars[0].selectedFloors.push_back(dest);
    }else{
        //the second allocation strategy is to assing the nearest elevator to the passenger
        int diff = 100000;
        int index = 1000000;
        for(int i=0; i<cars.size();i++){
            if(abs(cars[i].currentFloor-dest) <diff){
                diff = abs(cars[i].currentFloor-dest);
                index= i;
            }
        }
        cars[index].selectedFloors.push_back(cur);
        cars[index].selectedFloors.push_back(dest);
    }
}

void ECS::moveCars(){
    for(int i=0; i<cars.size();i++){
        while(cars[i].selectedFloors.size()>0)
            cars[i].moveCar();
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
