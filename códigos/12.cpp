#include <iostream>
int main(void)
{
    using namespace std;

    // declaração de arrays
    int notas1[5]; // pode haver lixo e/ou outros com 0
    int notas2[5]{100, 35, 87, 99, 41};
    int notas3[5]{100, 35};    // apenas os 2 primeiros, os demais com 0
    int notas4[5]{0};          // todos com 0
    int notas5[]{100, 35, 87}; // 3 elementos

    cout << "notas1[0]=" << notas1[0] << endl;
    cout << "notas2[1]=" << notas2[1] << endl;
    cout << "notas3[0]=" << notas3[0] << endl;
    cout << "notas4[4]=" << notas4[4] << endl;
    cout << "notas5[2]=" << notas5[2] << endl;
    cout << "notas5[3]=" << notas5[3] << endl; // oops! no checking! out of bounds

    // multidimensional arrays
    int matrix[3][4]; // 12 posições
    matrix[0][3] = 99;
    // ...

    int matrix2[3][4] = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22}
    };
    cout << matrix2[0][1] << endl;

    // 3 dimensions
    int matrix3[2][4][2] = {
        {
            {11, 12},
            {13, 14},
            {15, 16},
            {17, 18}
        },

        {
            {19, 20},
            {21, 22},
            {23, 24},
            {25, 26}
        },
    };
    cout << matrix3[0][2][1] << endl;

    return 0;
}