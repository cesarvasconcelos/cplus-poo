#include <iostream>
#include <string>

using namespace std;

struct TEndereco
{
    string rua;
    unsigned short numero;
    string bairro;
};

struct TEstudante
{
    string nome;
    unsigned short idade;
    TEndereco endereco; // uma struct dentro de outra
};

int main()
{
    // syntaxe tradicional
    TEndereco e1;
    e1.bairro = "São José";
    e1.rua = "Rua do Sol";
    e1.numero = 123;

    // sintaxe alternativa
    TEndereco e2{}; // {"", 0 , ""}
    TEndereco e3{"Rua do Sol", 123, "São José"};

    // uma struct dentro de outra
    TEstudante maria{"Maria da Silva", 32, e3};
    TEstudante jose{"José da Silva", 44, {"Rua de Marte", 456, "Centro"}};

    return 0;
}