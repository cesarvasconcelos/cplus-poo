/*
 * Write a program that asks the user to enter an 
 * hour value and a minute value. The main() function
 * should then pass these two values to a type 
 * void function that displays the two values in the
 * format shown in the following sample run:
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9:28
 * 
*/

#include <iostream>

int main( void )
{
    // using local namespace directive (just for fun)
    using namespace std;
    
    cout << "Enter the number of hours: ";
    int hours; cin >> hours;
    
    cout << "Enter the number of minutes: ";
    int minutes; cin >> minutes;
    
    cout << "Time: " << hours << ":" << minutes
         << endl;
    return 0;
}