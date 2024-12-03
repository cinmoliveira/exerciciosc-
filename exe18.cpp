/*
18) Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.
*/

#include <iostream>

using namespace std;

int main() {
    int vetor[10];          // Vetor original com 10 posições
    int vetor_substituto[10]; // Vetor substituto que substituirá zeros por 1

    // Entrada dos 10 números inteiros no vetor
    cout << "Digite 10 números inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Criação do vetor substituto, substituindo zeros por 1
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == 0) {
            vetor_substituto[i] = 1; // Substitui zero por 1
        } else {
            vetor_substituto[i] = vetor[i]; // Mantém o valor original
        }
    }

    // Exibe os dois vetores
    cout << "\nVetor original:\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }

    cout << "\nVetor substituto (zeros substituídos por 1):\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor_substituto[i] << " ";
    }
    cout << endl;

    return 0;
}
