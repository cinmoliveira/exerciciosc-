/*
20) Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.
*/

#include <iostream>

using namespace std;

int main() {
    int vetorA[5], vetorB[5];  // Vetores A e B com 5 posições
    int resultado = 0;          // Variável para acumular o resultado das subtrações

    // Entrada dos elementos do vetor A
    cout << "Digite 5 números inteiros para o vetor A:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetorA[i];
    }

    // Entrada dos elementos do vetor B
    cout << "Digite 5 números inteiros para o vetor B:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetorB[i];
    }

    // Realiza as subtrações acumulando o resultado
    for (int i = 0; i < 5; i++) {
        resultado += vetorA[i] - vetorB[4 - i]; // Subtrai o elemento de A do correspondente em B
    }

    // Exibe o resultado das subtrações realizadas
    cout << "\nResultado das subtrações acumuladas: " << resultado << endl;

    return 0;
}
