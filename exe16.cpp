/*
16) Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/

#include <iostream>

using namespace std;

int main() {
    int vetor1[10], vetor2[10], vetor_resultante[10];  // Dois vetores de 10 posições e um vetor resultante de 10 posições

    // Entrada dos elementos do primeiro vetor
    cout << "Digite 10 números para o primeiro vetor:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    // Entrada dos elementos do segundo vetor
    cout << "Digite 10 números para o segundo vetor:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    // Multiplica os elementos de mesmo índice e armazena o resultado no terceiro vetor
    for (int i = 0; i < 10; i++) {
        vetor_resultante[i] = vetor1[i] * vetor2[i];
    }

    // Exibe o vetor resultante
    cout << "\nVetor resultante (multiplicação dos elementos de mesmo índice):\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor_resultante[i] << " ";
    }
    cout << endl;

    return 0;
}
