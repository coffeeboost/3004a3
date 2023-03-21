#ifndef SAFETY_H
#define SAFETY_H
#include <QtDebug>
class Safety {
public:
  Safety();
  bool Fire=false;
  bool Emergency=false;
  bool DoorSensor=false;
  bool Overload=false;
  bool DoorOpen=false;
  bool DoorClose=false;
  bool Help=false;
  bool audioSystemConnected=false;
  void fireButtonPress();
  void emergencyButtonPress();
  void doorButtonPress();
  void overloadButtonPress();
  void doorOpenButtonPress();
  void doorCloseButtonPress();
  void helpButtonPress();
  void callBuildingSecurity();

private:
};
#endif
