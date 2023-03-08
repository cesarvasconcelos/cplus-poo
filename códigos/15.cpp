#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
};

int main( void )
{
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    Car *pointer { nullptr };
    pointer = new Car;

    (*pointer).year = 2012;     // deference pointer approach
    pointer->brand = "Ferrari"; // arrow operator approach
    pointer->model = "F50";

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    cout << (*pointer).brand << " " << (*pointer).model << " " << (*pointer).year << "\n";

    // posso usar minha class como um tipo nativo
    vector<Car> vec_cars { carObj1 };

    vec_cars.emplace_back( carObj2 );
    vec_cars.emplace_back( *pointer );

    for ( Car each : vec_cars )
        cout << each.brand << " " << each.model << " " << each.year << "\n";

    delete pointer;

    return 0;
}
