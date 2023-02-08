// setprecision example
#include <iostream> // std::cout, std::fixed
#include <iomanip>  // std::setprecision

int main()
{
    long double f = 3.141593212L;
    std::cout << f << '\n';

    std::streamsize ss = std::cout.precision();
    std::cout << "Initial precision = " << ss << '\n';

    std::cout << std::setprecision(5) << f << '\n';
    std::cout << std::setprecision(9) << f << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << f << '\n';

    // abaixo:enabling or desabling fixed notation
    // This particular call forces output to stay in fixed-point notation
    // so that you can better see the precision. It prevents the program from
    // switching to E notation for large values and causes the program to display six
    // digits to the right of the decimal
    // std::cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    // std::cout.unsetf(std::ios_base::fixed);

    // https://cplusplus.com/reference/ios/fixed/
    // The default notation can be selected by calling str.unsetf(ios_base::floatfield)
    std::cout.unsetf(std::ios_base::floatfield); // go to default mode
    // std::defaultfloat;
    std::cout << std::setprecision(ss) << f << '\n';
    return 0;
}
