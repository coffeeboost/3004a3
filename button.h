#ifndef BUTTON_H
#define BUTTON_H
#include <string>
using namespace std;
class Button {
    public:
    Button();
        Button(string name);
        string name;
        bool isLight=false;
};

#endif
