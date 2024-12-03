/*
6) Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■ o total das vendas de todos os vendedores;
■ o maior valor a receber e o nome de quem o receberá;
■ o menor valor a receber e o nome de quem o receberá.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_VENDEDORES = 10;  // Número de vendedores
    double vendas[NUM_VENDEDORES];  // Vetor para armazenar as vendas
    double comissoes[NUM_VENDEDORES]; // Vetor para armazenar os percentuais de comissão
    string nomes[NUM_VENDEDORES];    // Vetor para armazenar os nomes dos vendedores

    // Entrada dos dados dos vendedores
    cout << "Digite os dados dos vendedores:\n";
    for (int i = 0; i < NUM_VENDEDORES; i++) {
        cout << "Nome do vendedor " << (i + 1) << ": ";
        cin >> nomes[i];
        cout << "Total de vendas de " << nomes[i] << ": ";
        cin >> vendas[i];
        cout << "Percentual de comissão de " << nomes[i] << ": ";
        cin >> comissoes[i];
    }

    // Variáveis para cálculos
    double totalVendas = 0;
    double maiorComissao = 0;
    double menorComissao = 0;
    string vendedorMaiorComissao;
    string vendedorMenorComissao;

    // Relatório das comissões e cálculos
    cout << fixed << setprecision(2);
    cout << "\nRelatório de Comissões:\n";
    for (int i = 0; i < NUM_VENDEDORES; i++) {
        double valorComissao = vendas[i] * (comissoes[i] / 100);
        cout << "Vendedor: " << nomes[i] << ", Comissão: R$ " << valorComissao << endl;

        // Atualiza total de vendas
        totalVendas += vendas[i];

        // Verifica maior e menor comissão
        if (i == 0 || valorComissao > maiorComissao) {
            maiorComissao = valorComissao;
            vendedorMaiorComissao = nomes[i];
        }
        if (i == 0 || valorComissao < menorComissao) {
            menorComissao = valorComissao;
            vendedorMenorComissao = nomes[i];
        }
    }

    // Exibindo resultados finais
    cout << "\nTotal das vendas de todos os vendedores: R$ " << totalVendas << endl;
    cout << "Maior valor a receber: R$ " << maiorComissao << " - Vendedor: " << vendedorMaiorComissao << endl;
    cout << "Menor valor a receber: R$ " << menorComissao << " - Vendedor: " << vendedorMenorComissao << endl;

    return 0;
}
