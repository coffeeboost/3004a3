#ifndef SAFETY_H
#define SAFETY_H

class Safety {
public:
  Safety();
  bool Fire;
  bool Emergency;
  bool DoorSensor;
  bool Overload;
  bool DoorOpen;
  bool DoorClose;
  bool fireButtonPress();
  bool emergencyButtonPress();
  bool doorButtonPress();
  bool overloadButtonPress();
  bool doorOpenButtonPress();
  bool doorCloseButtonPress();

private:
};
#endif