/*
19) Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero.
*/

#include <iostream>

using namespace std;

int main() {
    int vetorA[10];         // Vetor original A com 10 posições
    int vetorB[10];         // Vetor compactado B
    int j = 0;              // Índice para o vetor B

    // Entrada dos 10 números inteiros no vetor A
    cout << "Digite 10 números inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetorA[i];
    }

    // Compacta o vetor A, removendo zeros e negativos, armazenando em B
    for (int i = 0; i < 10; i++) {
        if (vetorA[i] > 0) {  // Apenas valores positivos são mantidos
            vetorB[j] = vetorA[i]; // Adiciona o valor positivo ao vetor B
            j++;  // Incrementa o índice do vetor B
        }
    }

    // Exibe o vetor B
    cout << "\nVetor compactado B (apenas valores positivos):\n";
    for (int i = 0; i < j; i++) {  // Mostra apenas os elementos preenchidos em B
        cout << vetorB[i] << " ";
    }
    cout << endl;

    return 0;
}
