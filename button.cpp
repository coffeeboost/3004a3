#include <button.h>
//deccided to use the built in QT buttons instead of implenting my own
//however i still want to have the button lighting up features somewhere
//so I abstracted this logic to this class instead
Button::Button(){}
Button::Button(string name){
    this->name = name;
}
