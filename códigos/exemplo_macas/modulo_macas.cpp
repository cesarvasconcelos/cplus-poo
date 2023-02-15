// modulo_macas.cpp

#include <iostream>
#include <iomanip>
#include "modulo_macas.hpp"

float preco_maca( unsigned short quantidade )
{
    if( quantidade >= 12 ) return 1.10F;
    return 1.50F;
}

float total_compra_macas( unsigned short quantidade )
{
    return quantidade * preco_maca( quantidade );
}

unsigned short ler_quantidade_macas( void )
{
    using std::cout;
    using std::cin;
    using std::endl;

    unsigned short quantidade{0};
    cout << "Quantas maçãs deseja comprar (e.g., 15)? " << endl;
    cin >> quantidade;
    return quantidade;
}

void exibir_resultado( unsigned short macas  )
{
    std::cout << "O total da compra de " << macas
              <<  " maçã(s) é R$ " << std::fixed << std::setprecision( 2 )
              << total_compra_macas( macas )
              << std::endl;
}