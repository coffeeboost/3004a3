#ifndef CAR_H
#define CAR_H
#include <button.h>
#include <string>
#include <vector>
#include <QString>
#include <bell.h>
#include <sensor.h>
using namespace std;
class Car {
    public:
        Car(int id);
        string playVoiceMessage(string emergenzcy);
        void updateMessage(string message);
        int getCurrentFloor();;
        void displayMessage(string message);
        bool addSelectedButton(int);
        int getId();
        int getNextFloor();
        bool getIsInUse();
        void moveCar();
        void moveCar(bool isEmergency);


      int currentFloor = 0;
      string message = "default message";
      bool isAscending = false;
      vector<Button> buttons;
      vector<int> selectedFloors;
      int id;
      string voiceMessage = "default voice message";
      bool inUse = false;
      Bell bell;
      Sensor sensor;
};

#endif
