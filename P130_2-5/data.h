#ifndef DATA_H
#define DATA_H
#include <iostream>

const size_t len {6};
//len是常数

class Data{
private:
    int* data;

public:
    inline Data(size_t length = len) : data(new int[length]) {}
    inline ~Data() { delete[] data; }

    Data operator + (const Data& d) const;
    Data& operator = (const Data& d);
    friend std::istream& operator >> (std::istream& is, Data& d);
    friend std::ostream& operator << (std::ostream& os, const Data& d);
};

#endif // DATA_H
