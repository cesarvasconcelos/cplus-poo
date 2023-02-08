/* 
 * Write a C++ program that uses three user-defined functions
 * (counting main() as one) and produces the following output:
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run 
 * 
 */

/* prototypes */ 
void firstTwoLines( void );
void remainingLines( void );
 
#include <iostream>

int main( void )
{
    // using declarations
    using std::cout;
    using std::cin;
    using std::endl;
    
    firstTwoLines();  // function call
    remainingLines(); // function call
    
    return 0;
}


/* function implementations */ 
void firstTwoLines( void )
{
    for( int i = 0; i < 2; i++ )    
        std::cout << "Three blind mice" << std::endl;
}
void remainingLines( void )
{
    for( int i = 0; i < 2; i++ )    
        std::cout << "See how they run" << std::endl;
};