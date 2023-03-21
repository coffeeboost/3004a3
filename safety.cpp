#include <safety.h>

Safety:: Safety(){}

void Safety::fireButtonPress(){
    qInfo("there is a fire");
    qInfo("moving to safety floor");
}
void Safety::helpButtonPress(){
    callBuildingSecurity();

}
void Safety::callBuildingSecurity(){
    qInfo("calling building security...");
    //randomly calculate if building security will answer
    //not implementing the 10 second wait because this program is synchronous and would hang the program instead
    //however this function is easily modifiable in the future
    audioSystemConnected = true;
    if(rand()%10>5){
        qInfo("building security has connected in the voice channel");
    }else{
        qInfo("building security are not present but the police has been notified");
    }
}
