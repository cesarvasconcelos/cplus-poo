// setprecision example
#include <iostream> // std::cout, std::fixed
#include <iomanip>  // std::setprecision

int main(void)
{
    long double f = 3.141593212L;
    std::cout << f << '\n';

    const auto default_precision{std::cout.precision()};
    std::cout << "Initial precision = " << default_precision << '\n';

    std::cout << std::setprecision(5) << f << '\n';
    std::cout << std::setprecision(9) << f << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << f << '\n';

    // abaixo:enabling or desabling fixed notation
    // This particular call forces output to stay in fixed-point notation
    // so that you can better see the precision. It prevents the program from
    // switching to E notation for large values and causes the program to display six
    // digits to the right of the decimal
    // alternative way (book CPlus Primer)
    // std::cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    // std::cout.unsetf(std::ios_base::floatfield); // go to default mode

    // https://cplusplus.com/reference/ios/fixed/
    std::cout << std::setprecision(default_precision); // go to default mode
    std::cout << std::defaultfloat;                    // go to default mode
    std::cout << f << std::endl;
    return 0;
}

// fixed: set precision two decimal places
// const auto default_precision {std::cout.precision()};
// cout << fixed << std::setprecision(2);
// std::cout << std::setprecision(default_precision); // restore defaults
// cout << std::defaultfloat; // restore defaults

// fixed: alternative way (book CPlus Primer)
// std::cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
// std::cout.unsetf(std::ios_base::floatfield); // go to default mode