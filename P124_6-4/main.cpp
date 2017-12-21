#include <iostream>
#include "point.h"

int main(){
    Point p1(3, 4);
    Point p2 { -p1 };

    if(p1 == p2){
        std::cout << "p1 == p2" << std::endl;
    }else{
        std::cout << "p1 != p2" << std::endl;
    }

    std::cout << p1 << std::endl;
    std::cout << ++p1 << std::endl;
    std::cout << (p1++) << std::endl;
}
