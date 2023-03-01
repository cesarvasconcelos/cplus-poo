
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    // std::vector<int> numbers; // 0 posições alocadas

    // std::vector<int> numbers{22}; // 1 posição alocada com 22

    // std::vector<int> numbers(50); // 50 posições alocadas com 0s; sem lixo como nos arrays
    // std::vector<int> numbers(50, 22); // 50 posições alocadas com 22 em cada

    // std::vector<std::string> names {5}; // 5 posições alocadas com strings vazias ""; sem lixo como nos arrays
    // std::vector<std::string> names (10, "sol"); // 5 posições alocadas com strings "sol"
    // std::vector<std::string> names {"Olá", "C++", "!" }; // 3 posições alocadas
    vector<string> names; // 0 posições alocadas

    vector<string> v2{"A", "B", "C"}; // 3 posições alocadas
    // alternative syntax vector<string> v2 = { "A", "B", "C" };  // 3 posições alocadas

    // size?
    cout << "size()=" << names.size() << endl;
    // empty?
    cout << "empty()=" << names.empty() << endl;
    // capacity?
    cout << "capacity()=" << names.capacity() << endl;

    // uma dica é observar capacity versus size em cada inserção e remoção
    names.push_back("Olá");    // append, mas caro quanto type é um tipo de classe complexa
    names.push_back(", ");     // append
    names.pop_back();          // remove last element
    names.push_back(", ");     // restore element
    names.emplace_back("C++"); // append, mais barata que push_back apenas quanto type é class complexa
    names.insert(names.begin(), "Frase");
    names.insert(names.begin() + 4, "!");  // position = 4
    names.emplace(names.begin() + 1, ":"); // insert just before the position

    // using for loop syntax
    for (string s : names)
        cout << "(for loop) s=" << s << endl;

    // using array syntax
    for (int i = 0; i < names.size(); i++)
        cout << "names[" << i << "]=" << names[i] << endl;

    // at(position)
    for (int i = 0; i < names.size(); i++)
        cout << names.at(i) << endl; // syntax vectorObject.at(index)

    // using iterator syntax
    for (vector<string>::iterator iterator = names.begin(); iterator != names.end(); iterator++)
        cout << *iterator;

    // quiz: o que esta instrução abaixo faz?
    // names.insert(names.end(),v2.begin(),v2.begin()+3 );

    // Cuidado com erase(): https://cplusplus.com/reference/vector/vector/erase/
    // Because vectors use an array as their underlying storage, erasing elements in positions other than the vector
    // end causes the container to relocate all the elements after the segment erased to their new positions.
    // This is generally an inefficient operation compared to the one performed for the same operation by
    // other kinds of sequence containers (such as list or forward_list).

    // erase the 4th element
    names.erase(names.begin() + 4);
    // capacity?
    cout << "capacity()=" << names.capacity() << endl;
    // erase the first 2 elements:
    names.erase(names.begin(), names.begin() + 2);

    // modification
    names[0] = "Oi!";
    names.at(0) = "Oi";

    // names.at(1050); // muitas vector functions suportam bound checking! throw exception;
    // names[ 100 ] = "Ooops! No bound checking!"; array não faz bound checking

    // matrix syntax: vector<vector<TYPE>> matrix(ROWS, vector<TYPE>(COLS));
    vector<vector<int>> my_matrix(4, vector<int>(2));
    my_matrix[0][0] = 1; // linha 0 coluna 0
    my_matrix[0][1] = 1; // linha 0 coluna 1

    my_matrix[1][0] = 2; // linha 1 coluna 0
    my_matrix[1][1] = 2; // linha 1 coluna 1

    my_matrix[2][0] = 3; // linha 2 coluna 0
    my_matrix[2][1] = 3; // linha 2 coluna 1

    my_matrix[3][0] = 4; // linha 3 coluna 0
    my_matrix[3][1] = 4; // linha 3 coluna 1

    for (int linha = 0; linha < my_matrix.size(); linha++)
        for (int coluna = 0; coluna < my_matrix[linha].size(); coluna++)
            cout << "my_matrix[" << linha << "][" << coluna << "]=" << my_matrix[linha][coluna] << endl;

    // alternative syntax
    vector<vector<int>> my_matrix2{
        {1, 1},
        {2, 2},
        {3, 3},
        {4, 4}};

    return 0;
}