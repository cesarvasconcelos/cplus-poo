/* 
 * Write a Write a program that asks the user to enter 
 * his or her age.The program then should display the
 * age in months:
 */

#include <iostream>

int main( void )
{
    // using local directives (just for fun)
    using namespace std;
    
    cout << "Enter your age (e.g., 46): " << endl;
    
    int age; cin >> age;
    
    cout << "Your age in months is: "
         << ( age * 12 ) // 1 year have 12 months
         << endl;
    return 0;
}
