#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include <button.h>
using namespace std;
class Sensor {
    public:
        Sensor(string name);
        void activateSensor();
//    private:
        string name;
        bool isActivated = false;
        int maxTime = 10;
};

#endif
