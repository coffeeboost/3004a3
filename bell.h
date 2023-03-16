#ifndef BELL_H
#define BELL_H
#include <string>
using namespace std;
class Bell {
public:
  Bell(string name, string sound);
  void ringBell();
//private:
  string name;
  string sound;
};
#endif
