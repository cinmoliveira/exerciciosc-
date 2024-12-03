/*
22) Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida
todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.
*/

#include <iostream>

using namespace std;

int main() {
    int vetor[15];            // Vetor com 15 posições para números inteiros
    int maior;               // Variável para armazenar o maior valor do vetor

    // Entrada dos 15 números inteiros no vetor
    cout << "Digite 15 números inteiros:\n";
    for (int i = 0; i < 15; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Encontra o maior valor no vetor
    maior = vetor[0]; // Inicializa com o primeiro elemento
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; // Atualiza o maior valor
        }
    }

    // Divide todos os elementos do vetor pelo maior valor
    for (int i = 0; i < 15; i++) {
        vetor[i] = static_cast<double>(vetor[i]) / maior; // Divide e atualiza
    }

    // Exibe o vetor após os cálculos
    cout << "\nVetor após divisão pelo maior valor (" << maior << "):\n";
    for (int i = 0; i < 15; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
