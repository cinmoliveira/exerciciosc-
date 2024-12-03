/*
10) Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/

#include <iostream>

using namespace std;

int main() {
    int numeros[5];  // Vetor para armazenar os 5 números fornecidos pelo usuário
    int soma = 0;    // Variável para armazenar a soma dos números

    // Entrada dos 5 números inteiros
    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> numeros[i];
        soma += numeros[i];  // Acumula a soma
    }

    // Exibe os números digitados e a soma
    cout << "Os números digitados foram: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i];
        if (i < 4) {
            cout << " + ";  // Adiciona o sinal de soma entre os números
        }
    }
    cout << " = " << soma << endl;  // Exibe a soma total

    return 0;
}
