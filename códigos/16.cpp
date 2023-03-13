#include <iostream>
#include <string>

using namespace std;

/* methods declared inside the class */

class Car
{
    public:
        string brand { "-- no brand --" };
        string model { "-- no model --" };;
        int year { 1900 };

        void printCarData( void )
        {
            cout << "[Car: " << model << ", "
                 << brand << ", "
                 << year << "]"
                 << endl;
        }

        void setYear( int otherYear )
        {
            year = (otherYear >= 1900) ? otherYear : year;
        }
};

int main( void )
{
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.setYear(1999);
    carObj1.printCarData();

    Car* pointer { nullptr };
    pointer = new Car;
    pointer->brand = "Ford";
    pointer->model = "Mustang";
    pointer->setYear(1969);

    pointer->printCarData();

    delete pointer;

    return 0;
}