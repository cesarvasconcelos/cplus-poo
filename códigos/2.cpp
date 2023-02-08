/* 2.cpp -- Write a C++ program that asks for a distance in 
 *          furlongs and converts it to yards. */

#include <iostream>

int main( void )
{
    using std::cin; using std::cout; using std::endl; 
    
    cout << "Please, enter the distance (in furlongs):"
         << endl;
         
    int furlongDistance;
    cin >> furlongDistance;
     
    cout << "Converting " << furlongDistance
         << " furlong(s) to yards: "
         << ( furlongDistance * 220 )
         << " yards."
         << endl;
         
    return 0;
}