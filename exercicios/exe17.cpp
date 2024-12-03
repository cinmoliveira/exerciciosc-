/*
17) Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os números
positivos.
*/

#include <iostream>

using namespace std;

int main() {
    int vetor[10];  // Vetor com 10 posições para números inteiros

    // Entrada dos 10 números inteiros no vetor
    cout << "Digite 10 números inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Exibe apenas os números positivos
    cout << "\nNúmeros positivos no vetor:\n";
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > 0) {
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
