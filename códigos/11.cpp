
#include <iostream> // std::cout, std::fixed
#include <iomanip>  // std::setprecision

int main()
{
    using namespace std;
    const int i = 65;
    char c1{65}; // ok, pois é literal
    char c2{i};  // ok, pois é const
    // char c1 {165}; // compilador avisará de narrowing: NÃO ok, pois 165 NÃO "CABE" em char

    int i2 = 65;
    // char c3 {i2};  // compilador avisará de narrowing: NÃO ok, pois i2 é uma var
    char c3 = i2; // compilador não avisará sobre narrowing :(

    // int very_long {17'800'000'000}; // c++14 separator, compilador avisará de narrowing

    return 0;
}