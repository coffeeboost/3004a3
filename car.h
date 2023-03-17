#ifndef CAR_H
#define CAR_H
#include <button.h>
#include <string>
#include <vector>
#include <QString>
using namespace std;
class Car {
    public:
        Car(int id);
        string playVoiceMessage(string emergenzcy);
        void updateMessage(string message);
        int getCurrentFloor();
        void displayMessage(string message);
        bool addSelectedButton(int);
        int getId();
        int getNextFloor();
        bool getIsInUse();
        QString moveCar();

      QString currentFloor = 0;
      string message = "default message";
      bool isAscending = false;
      vector<Button> buttons;
      vector<QString> selectedFloors;
      int id;
      string voiceMessage = "default voice message";
      bool inUse = false;
};

#endif
