#include <iostream>
#include "clock.h"

int main(){
    Clock c1(3, 4, 5);
    Clock c2(23, 59, 59);
    Clock c3 {++c1};
    Clock c4 {c2++};

    c2.showTime();
    c3.showTime();
    c4.showTime();
}
