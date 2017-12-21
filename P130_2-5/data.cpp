#include "data.h"
#include <iostream>

Data Data::operator + (const Data& d) const{
    Data temp;
    for(size_t i{}; i < len; i++){
        temp.data[i] = data[i] + d.data[i];
    }
    return temp;
}

Data& Data::operator = (const Data& d){
    if(this == &d)  return *this;
    for(size_t i{}; i < len; i++){
        this->data[i] = d.data[i];
    }
    return *this;
}

std::istream& operator >> (std::istream& is, Data& d){
    std::cout << "input 6 datas:" << std::endl;
    for(size_t i{}; i < len; i++){
        is >> d.data[i];
    }
    return is;
}

std::ostream& operator <<(std::ostream &os, const Data& d){
    os << "6 datas:" << std::endl;
    for(size_t i{}; i < len; i++){
        os << d.data[i] << '\t';
    }
    std::cout << std::endl;

    return os;
}
