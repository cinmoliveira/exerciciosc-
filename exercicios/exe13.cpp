/*
13) Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string clientes[8];     // Vetor para armazenar os nomes dos clientes
    int locacoes[8];        // Vetor para armazenar a quantidade de DVDs locados por cada cliente
    int locacoes_gratis[8]; // Vetor para armazenar a quantidade de locações grátis de cada cliente

    // Entrada dos nomes dos clientes e das locações
    for (int i = 0; i < 8; i++) {
        cout << "Digite o nome do " << i + 1 << "º cliente: ";
        cin >> clientes[i];
        cout << "Digite a quantidade de DVDs locados por " << clientes[i] << " em 2011: ";
        cin >> locacoes[i];

        // Calcula a quantidade de locações grátis (para cada 10 locações, 1 grátis)
        locacoes_gratis[i] = locacoes[i] / 10;
    }

    // Exibe o nome dos clientes e a quantidade de locações grátis a que têm direito
    cout << "\nRelatório de locações grátis:\n";
    for (int i = 0; i < 8; i++) {
        cout << clientes[i] << " tem direito a " << locacoes_gratis[i] << " locações grátis." << endl;
    }

    return 0;
}
