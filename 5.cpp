/*
5) Faça um programa que mostre as tabuadas dos números de 1 a 10.
*/

#include <iostream>

using namespace std;

int main() {
    //Declarando as variáveis:
    int i, j;

    // Laço para gerar as tabuadas de 1 a 10
    for (i = 1; i <= 10; i++) {
        cout << "Tabuada do " << i << ":" << endl;

        // Laço para calcular cada linha da tabuada
        for (j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}
