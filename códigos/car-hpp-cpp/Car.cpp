#include "Car.hpp"

#include <iostream>

using std::cout;
using std::endl;

void Car::printCarData( void )
{
    cout << "[Car: " << model << ", "
         << brand << ", "
         << year << "]"
         << endl;
}

void Car::setYear( int otherYear )
{
    year = (otherYear >= 1900) ? otherYear : year;
}

int Car::getYear( void ) const
{
    return year; // year is still accessible
}

void Car::setBrand( std::string otherBrand )
{
    if( !otherBrand.empty() ) brand = otherBrand;
}

std::string Car::getBrand( void ) const
{
    return brand;
}

void Car::setModel( std::string otherModel )
{
    if( !otherModel.empty() ) model = otherModel;
}

std::string Car::getModel() const
{
    return model;
}
