#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>

class Clock{
private:
    size_t hour;
    size_t minute;
    size_t second;

    void add();

public:
    inline Clock(size_t h, size_t m, size_t s) : hour(h), minute(m), second(s){}
    inline Clock(const Clock& clock) : Clock(clock.hour, clock.minute, clock.second){}
    inline ~Clock() = default;

    Clock& operator ++ ();
    Clock operator ++ (int);
    void showTime() const;
};

#endif // CLOCK_H
