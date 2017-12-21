#include <iostream>
#include "clock.h"

void Clock::add(){
    if(second == 59){
        second = 0;
        if(minute == 59){
            minute = 0;
            if(hour == 23){
                hour = 0;
            }else{
                hour++;
            }
        }else{
            minute++;
        }
    }else{
        second++;
    }
}

Clock& Clock::operator ++ (){
    add();
    return *this;
}

Clock Clock::operator ++(int){
    Clock temp {*this};
    add();
    return temp;
}

void Clock::showTime() const{
    std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
}
