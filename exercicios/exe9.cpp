/*
9) Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares.
*/

#include <iostream>

using namespace std;

int main() {
    int numeros[10];   // Vetor para armazenar os 10 números fornecidos pelo usuário
    int pares[10];     // Vetor para armazenar os números pares
    int impares[10];   // Vetor para armazenar os números ímpares
    int count_pares = 0;    // Contador para o número de pares
    int count_impares = 0;  // Contador para o número de ímpares

    // Entrada dos 10 números inteiros
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];

        // Verifica se o número é par ou ímpar e armazena nos vetores correspondentes
        if (numeros[i] % 2 == 0) {
            pares[count_pares] = numeros[i];
            count_pares++;
        } else {
            impares[count_impares] = numeros[i];
            count_impares++;
        }
    }

    // Exibe os números pares
    cout << "\nNúmeros pares: ";
    if (count_pares == 0) {
        cout << "Nenhum número par encontrado.";
    } else {
        for (int i = 0; i < count_pares; i++) {
            cout << pares[i] << " ";
        }
    }

    // Exibe os números ímpares
    cout << "\nNúmeros ímpares: ";
    if (count_impares == 0) {
        cout << "Nenhum número ímpar encontrado.";
    } else {
        for (int i = 0; i < count_impares; i++) {
            cout << impares[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
