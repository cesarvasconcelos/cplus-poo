
#include <iostream>
#include <climits> // use limits.h for older systems
#include <cfloat>  // use float.h for older systems

// https://cplusplus.com/reference/cfloat/
// https://cplusplus.com/reference/climits/

// "An l or L suffix on an integer means the integer is a type long constant,
//  a u or U suffix indicates an unsigned int constant,
//  and ul (in any combination of orders and uppercase and lowercase) indicates a type unsigned long constant.
//  C++11 provides the ll and LL suffixes for type long long,
//  and ull, Ull, uLL, and ULL for unsigned long long.
// (Because a lowercase l can look much like the digit 1, you should use the uppercase L for suffixes.)"

int main()
{
    using namespace std;

    bool disponivel = false;        // 8bits true or false
    // bool ligado = -100;          // true  (pode, pois non-zero is true)
    // bool ligado = 0;             // false (pode, pois zero is false)

    char conceito = 'A';            // 8 bits; is really an integer; represents the numeric code for the letter

    short si = 1;                   // 16 bits [−32,767; +32,767]
    unsigned short usi = 1;         // 16 bits [0, +65,535]

    int i = 1;                      // 32bits  [−2,147,483,647; +2,147,483,647]
    unsigned int ui = 1U;           // 32bits  [0, +4,294,967,295]
    // int idade (18);              // alternative c++ syntax

    // braces {} , with or without the =
    // int idade {18};              // alternative c++11 syntax
    // int idade = {18};            // alternative c++11 syntax

    // int idade {};                // alternative c++11 syntax
    // int idade = {};              // alternative c++11 syntax

    long li = 1L;                   // 64 bits [−9,223,372,036,854,775,807, +9,223,372,036,854,775,807]
    unsigned long ul = 1LU;         // 64bits  [0, +18,446,744,073,709,551,615]

    long long lli = 5LL;            // c++11 64bits
    unsigned long long ulli = 5LLU; // c++11 64bits

    float f = 3.15F;                // 32bits   7 decimal digits [1.2x10-38...3.4x10+38]
    double d = 3.15;                // 64bits  15 decimal digits [2.2x10-308...1.8x10+308]
    long double ld = 3.15L;         // 128bits 19 decimal digits [3.3x10-4932...1.2x10+4932]

    int n_int = INT_MAX;            // initialize n_int to max int value
    short n_short = SHRT_MAX;       // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "bool is " << sizeof disponivel << " bytes." << endl;
    cout << "char is " << sizeof conceito << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof si << " bytes." << endl;
    cout << "long is " << sizeof li << " bytes." << endl;
    cout << "long long is " << sizeof lli << " bytes." << endl;
    cout << "float is " << sizeof f << " bytes." << endl;
    cout << "double is " << sizeof d << " bytes." << endl;
    cout << "long double is " << sizeof ld << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl
         << endl;
    cout << "float: " << FLT_MAX << endl  // symbols defined in cfloat file
         << endl;
    cout << "double: " << DBL_MAX << endl // symbols defined in cfloat file
         << endl;
    cout << "long double: " << LDBL_MAX << endl // symbols defined in cfloat file
         << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Minimum long value = " << LONG_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}