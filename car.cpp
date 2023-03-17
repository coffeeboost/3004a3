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
