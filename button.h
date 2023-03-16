#ifndef BUTTON_H
#define BUTTON_H
#include <string>
using namespace std;
class Button {
    public:
        Button(string name);
        void pressButton();
        void updateName();
//    private:
        string name;
        bool isPressed = false;
};

#endif
