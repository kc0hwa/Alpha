#ifndef   iostream.h
#define   iostream.h
#include <iostream.h>
#endif
template <Type T>
class Math {
public:
    Arithmetic Arith;


};

template <Type T>
class Arithmetic {
public:
T sum(T aX,bX){
return aX+bX;

};

T Product(T aX,T bX){
    return aX*bX;
};



};


int main()
{
    std::cout << "Hello World!";
}