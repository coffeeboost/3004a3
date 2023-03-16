#ifndef CAR_H
#define CAR_H
#include <button.h>
#include <string>
#include <vector>
using namespace std;
class Car {
    public:
        Car();
        string playVoiceMessage(string emergency);
        void updateMessage(string message);
        int getCurrentFloor();
        void displayMessage(string message);
        bool addSelectedButton(int);
        int getId();
        int getNextFloor();
        bool getIsInUse();

//    private:
      int currentFloor;
//      string displayMessage;
      bool isAscending;
      vector<Button> buttons;
      vector<int>selectedFloors;
      int id;
      string voiceMessage;
      bool inUse;
};

#endif
