#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{
private:
    int x;
    int y;

public:
    inline Point(int xi, int yi) : x(xi), y(yi) {}
    inline ~Point() = default;

    const Point operator - () const;
    bool operator == (const Point& point) const;
    Point& operator ++ ();
    Point& operator ++ (int);

    friend std::istream& operator >> (std::istream& is, Point& point);
    friend std::ostream& operator << (std::ostream& os, const Point& point);
};

#endif // POINT_H
