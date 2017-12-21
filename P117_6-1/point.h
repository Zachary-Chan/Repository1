#ifndef POINT_H
#define POINT_H

class Point{
private:
    int x;
    int y;

public:
    inline Point(int xi, int yi) : x(xi), y(yi){}
    inline ~Point() = default;

    friend const Point operator - (const Point& point);
    friend bool operator == (const Point& p1, const Point& p2);
};

#endif // POINT_H
