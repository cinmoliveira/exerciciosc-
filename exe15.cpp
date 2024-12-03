/*
15) Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo
os elementos dos dois vetores anteriores ordenados de maneira decrescente.
*/

#include <iostream>
#include <algorithm> // Para usar a função sort()

using namespace std;

int main() {
    int vetor1[10], vetor2[10], vetor3[20];  // Dois vetores de 10 posições e um vetor combinado de 20 posições

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

    // Combina os dois vetores no terceiro vetor
    for (int i = 0; i < 10; i++) {
        vetor3[i] = vetor1[i];           // Copia elementos do primeiro vetor para o terceiro
        vetor3[i + 10] = vetor2[i];       // Copia elementos do segundo vetor para o terceiro
    }

    // Ordena o terceiro vetor em ordem decrescente
    sort(vetor3, vetor3 + 20, greater<int>());  // Usando a função sort com o comparador greater<int>()

    // Exibe o terceiro vetor ordenado de maneira decrescente
    cout << "\nTerceiro vetor (ordenado em ordem decrescente):\n";
    for (int i = 0; i < 20; i++) {
        cout << vetor3[i] << " ";
    }
    cout << endl;

    return 0;
}
