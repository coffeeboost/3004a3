#include <car.h>
//class Car {
//    public:
//        Car();
//        string playVoiceMessage(string emergency);
//        void updateMessage(string message);
//        int getCurrentFloor();
//        void displayMessage(string message);
//        bool addSelectedButton(int);
//        int getId();
//        int getNextFloor();
//        bool getIsInUse();

//    private:
//      int currentFloor;
//      string message;
//      bool isAscending;
//      vector<Button> buttons;
//      vector<int>selectedFloors;
//      int id;
//      string voiceMessage;
//      bool inUse;
//};
Car::Car(int id){
    for(int i=0; i<5; i++){
        this->buttons.push_back(Button(to_string(i)));
    }
    this->id = id;
}

void Car::moveCar(){
    moveCar(false);
}
void Car::moveCar(bool isEmergency){
    int temp = this->currentFloor;
//    string x;
//    x.append("door opening");
//    qInfo(x.data());
    if(isEmergency){
        qInfo("door opening");
        qInfo("door closing");
    }
    if(selectedFloors.size()>0){
        this->currentFloor = selectedFloors.at(0);
        selectedFloors.erase(selectedFloors.begin());
    }

    string x = "moved car from " + to_string(temp) + " to " + to_string(this->currentFloor);

    qInfo("door opning");
    qInfo("door closing");
    qInfo(x.data());
}
