#ifndef POINT_H
#define POINT_H

class Point{
private:
    int x;
    int y;

public:
    inline Point(int xi, int yi) : x(xi), y(yi){}
    inline ~Point() = default;

    const Point operator - () const;
    bool operator == (const Point& point) const;
};

#endif // POINT_H
