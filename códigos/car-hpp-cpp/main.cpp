#include "Car.hpp"

int main( void )
{
    Car carObj1;
    carObj1.setBrand( "BMW" );
    carObj1.setModel( "X5" );

    // carObj1.year = -4; // do not compile
    // int y = carObj1.year; // do not compile

    carObj1.setYear(1999); // ok
    int y = carObj1.getYear(); // ok

    carObj1.printCarData();

    Car* pointer { nullptr };
    pointer = new Car;
    pointer->setBrand( "Ford" );
    pointer->setModel( "Mustang" );
    pointer->setYear(1969);

    pointer->printCarData();

    delete pointer;

    return 0;
}
