#include <iostream>
#include "data.h"

int main(){
    Data d1, d2;
    std::cin >> d1 >> d2;
    std::cout << d1 << d2;

    Data d3;
    d3 = d1 + d2;
    std::cout << d3;
}
