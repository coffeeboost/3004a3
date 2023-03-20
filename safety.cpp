#include <safety.h>

Safety:: Safety(){

}

void Safety::fireButtonPress(){
    qInfo("there is a fire");
    qInfo("moving to safety floor");
}
//class Safety {
//public:
//  Safety();
//  bool Fire;
//  bool Emergency;
//  bool DoorSensor;
//  bool Overload;
//  bool DoorOpen;
//  bool DoorClose;
//  bool fireButtonPress();
//  bool emergencyButtonPress();
//  bool doorButtonPress();
//  bool overloadButtonPress();
//  bool doorOpenButtonPress();
//  bool doorCloseButtonPress();

//private:
//};
