#ifndef   iostream.h
#define   iostream.h
#include <iostream.h>
#endif

    template <Type T>
    namespace Math {
    
        Arithmetic Arith;


    };

    template <Type T>
    namespace Arithmetic {
    public:
        T sum(T aX, bX) {
            return aX + bX;

        };

        T Product(T aX, T bX) {
            return aX * bX;
        };



    };


int main()
{
    std::cout << "Hello World!";
}