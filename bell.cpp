#include <bell.h>

Bell::Bell(){
}

void Bell::ringBell(string sound){
    qInfo(sound.data());
}
