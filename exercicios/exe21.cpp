/*
21) Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.
*/

#include <iostream>

using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; // Número divisível por outro número além de 1 e ele mesmo
        }
    }
    return true; // Número é primo
}

int main() {
    int vetor[15];           // Vetor com 15 posições para números inteiros
    int vetorPrimos[15];    // Vetor para armazenar números primos
    int contador = 0;        // Contador para o vetor de primos

    // Entrada dos 15 números inteiros no vetor
    cout << "Digite 15 números inteiros:\n";
    for (int i = 0; i < 15; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Verifica cada número no vetor e armazena os primos no vetorPrimos
    for (int i = 0; i < 15; i++) {
        if (ehPrimo(vetor[i])) {
            vetorPrimos[contador] = vetor[i];
            contador++; // Incrementa o contador para o próximo primo encontrado
        }
    }

    // Exibe o vetor resultante com os números primos
    cout << "\nNúmeros primos encontrados:\n";
    for (int i = 0; i < contador; i++) {
        cout << vetorPrimos[i] << " ";
    }
    cout << endl;

    return 0;
}
