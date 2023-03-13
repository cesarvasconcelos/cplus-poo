/* if this Car.hpp header file is included in more than one cpp file,
 * the compiler will see the Car class declaration more than once,
 * and will give us errors about duplicate Car class declarations.
 * To prevent this, use the the include guards below.
 * They will prevent a header file from being included multiple times
 * and ensure that Car class declaration will be processed
 * just once during compiler phase
 */

#ifndef _CAR_HPP_ // if not defined, then ... (_CAR_HPP_ must be a unique identifier)
#define _CAR_HPP_ // define

#include <string>

/* class specification and its methods are declared in a separate header (.hpp) file */
/* please note the public & private access modifiers */

class Car
{
    private:
        int year { 1900 };
        std::string brand { "-- no brand --" };
        std::string model { "-- no model --" };
    public:
        void printCarData( void );

        void setYear( int otherYear );
        int getYear( void ) const;

        void setBrand( std::string otherBrand );
        std::string getBrand( void ) const;

        void setModel( std::string otherModel );
        std::string getModel( void ) const;
};

#endif //_CAR_HPP_ end if
