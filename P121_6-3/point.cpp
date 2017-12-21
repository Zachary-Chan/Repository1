#include "point.h"
#include <iostream>

const Point Point::operator - () const{
    return Point(-this->x, -this->y);
}

bool Point::operator == (const Point& point) const{
    return (this->x == point.x && this->y == point.y);
}

std::istream& operator >> (std::istream& is, Point& point){
    std::cout << "请输入X的值：";
    std::cin >> point.x;

    std::cout << std::endl;

    std::cout << "请输入Y的值：";
    std::cin >> point.y;

    return is;
}

std::ostream& operator << (std::ostream& os, const Point& point){
    std::cout << "X: " << point.x << std::endl;
    std::cout << "Y: " << point.y << std::endl;

    return os;
}
