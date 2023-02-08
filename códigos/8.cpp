#include <iostream>

int main( void )
{
    std::string name;
    int age;
    double salary;

//    se for ler a idade primeiro, deve-se usar ignore (vide notes no final do arquivo)
//    std::cout << "Enter your age:" << std::endl;
//    std::cin >> age;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter your name:" << std::endl;
    // https://en.cppreference.com/w/cpp/string/basic_string/getline
    std::getline(std::cin, name, '\n');

    std::cout << "Enter your age:" << std::endl;
    std::cin >> age;

    std::cout << "Enter your salary:" << std::endl;
    std::cin >> salary;


    std::cout << "Your name is: " << name
              << " and you are " << age << " years old "
              << "and your salary is $" << salary
              << std::endl;

    return 0;
}

/**
Notes
When consuming whitespace-delimited input (e.g. int n; std::cin >> n;)
any whitespace that follows, including a newline character, will be left
on the input stream. Then when switching to line-oriented input,
the first line retrieved with getline will be just that whitespace.
In the likely case that this is unwanted behaviour, possible solutions include:

An explicit extraneous initial call to getline
Removing consecutive whitespace with std::cin >> std::ws
Ignoring all leftover characters on the line of input with
 cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
*/