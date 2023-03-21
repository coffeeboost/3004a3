#include <sensor.h>
Sensor::Sensor(){}
bool Sensor::IsOverloaded(){
    //simulating overloaded features with a probability for simulation reasons
    //the chancces of overloading are really low but I decided on 80% so we can see some changes in a reasonable number of reruns
    return (rand()%100>80);
}
bool Sensor::isDoorBlocked(){
    return (rand()%100>80);
}
