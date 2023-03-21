#include <car.h>
Car::Car(int id){
    for(int i=0; i<5; i++){
        this->buttons.push_back(Button(to_string(i)));
    }
    this->id = id;
    this->bell = Bell();
    this->sensor = Sensor();
}

void Car::moveCar(){
    moveCar(false);
}
void Car::moveCar(bool isEmergency){
    int temp = this->currentFloor;

    if(!isEmergency){
        this->bell.ringBell("bell: ring ring");
        qInfo("door opening");

        while(this->sensor.IsOverloaded()){
            qInfo("the car is overloaded");
            qInfo("someone please leave");
        }

        while(this->sensor.isDoorBlocked()){
            qInfo("the door is blocked");
            qInfo("waiting 2 seconds");
        }
        qInfo("door closing");
    }
    if(selectedFloors.size()>0){
        this->currentFloor = selectedFloors.at(0);
        selectedFloors.erase(selectedFloors.begin());
    }
    this->bell.ringBell("bell: ring ring");
    qInfo("door opning");
    qInfo("door closing");
    string x = "moved car from " + to_string(temp) + " to " + to_string(this->currentFloor);
    qInfo(x.data());
}
