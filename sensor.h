#ifndef SENSOR_H
#define SENSOR_H
#include <string>
using namespace std;
class Sensor {
    public:
        Sensor();
        bool IsOverloaded();
        bool isDoorBlocked();
        int maxTime = 10;
};

#endif
