/*
14) Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■ a quantidade de produtos com preço inferior a R$ 50,00;
■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
■ a média dos preços dos produtos com preço superior a R$ 100,00.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string produtos[5];  // Vetor para armazenar os nomes dos produtos
    float precos[5];     // Vetor para armazenar os preços dos produtos
    int count_inferior_50 = 0;  // Contador de produtos com preço inferior a R$ 50,00
    float soma_superior_100 = 0; // Soma dos preços dos produtos com preço superior a R$ 100,00
    int count_superior_100 = 0;  // Contador de produtos com preço superior a R$ 100,00

    // Entrada dos nomes e preços dos produtos
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome do " << i + 1 << "º produto: ";
        cin >> produtos[i];
        cout << "Digite o preço do " << produtos[i] << ": R$ ";
        cin >> precos[i];
    }

    // Exibe os resultados solicitados
    cout << "\nProdutos com preço inferior a R$ 50,00:\n";
    for (int i = 0; i < 5; i++) {
        if (precos[i] < 50.0) {
            count_inferior_50++;
        }
    }
    cout << "Quantidade de produtos com preço inferior a R$ 50,00: " << count_inferior_50 << endl;

    cout << "\nProdutos com preço entre R$ 50,00 e R$ 100,00:\n";
    for (int i = 0; i < 5; i++) {
        if (precos[i] >= 50.0 && precos[i] <= 100.0) {
            cout << produtos[i] << endl;
        }
    }

    cout << "\nMédia dos preços dos produtos com preço superior a R$ 100,00:\n";
    for (int i = 0; i < 5; i++) {
        if (precos[i] > 100.0) {
            soma_superior_100 += precos[i];
            count_superior_100++;
        }
    }

    if (count_superior_100 > 0) {
        float media_superior_100 = soma_superior_100 / count_superior_100;
        cout << "Média dos preços dos produtos superiores a R$ 100,00: R$ " << media_superior_100 << endl;
    } else {
        cout << "Nenhum produto com preço superior a R$ 100,00." << endl;
    }

    return 0;
}
