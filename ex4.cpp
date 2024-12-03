/*
Faça um programa que receba dois números e mostre o maior.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num_1, num_2;

    cout << "Informe dois números: ";
    cin >> num_1 >> num_2;

    if (num_1 > num_2) {
        cout << "O primeiro é o maior valor: " << num_1 << endl;
    } else {
        cout << "O segundo é o maior valor: " << num_2 << endl;
    }

    return 0;
}