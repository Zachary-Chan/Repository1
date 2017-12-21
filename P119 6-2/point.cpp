#include "point.h"

const Point Point::operator - () const{
    return Point(-this->x, -this->y);
}

bool Point::operator == (const Point& point) const{
    return (this->x == point.x && this->y == point.y);
}
