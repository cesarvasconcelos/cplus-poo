/* 
 * Write a program that has main() call a user-defined 
 * function that takes a Celsius temperature value as 
 * an argument and then returns the equivalent
 * Fahrenheit value. The program should request 
 * the Celsius value as input from the user and 
 * display the result, as shown in the following code:
 * Please enter a Celsius value: 20
 * 20 degrees Celsius is 68 degrees Fahrenheit
 * For reference, here is the formula for making the conversion
 * Fahrenheit = 1.8 × degrees Celsius + 32.0:
 */

#include <iostream>

int main( void )
{
    // using :: scope operator
    
    std::cout << "Please enter a Celsius value:(e.g., 20): ";
    
    double temperatureCelsius; 
    std::cin >> temperatureCelsius;
    
    // Formula: Fahrenheit = 1.8 × degrees Celsius + 32.0
    std::cout << temperatureCelsius 
              << " degrees Celsius is "
              << (1.8 * temperatureCelsius + 32.0)
              << " degrees Fahrenheit."
              << std::endl;
    
    return 0;
}
