/*
Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’.
*/

#include <iostream>
using namespace std;

int main() {
    char tipoAcao;
    double precoCompra, precoVenda, lucroAcao, lucroTotal = 0;
    int acoesComLucroMaior1000 = 0, acoesComLucroMenor200 = 0;

    // Loop até que o usuário insira 'F' como tipo de ação
    while (true) {
        cout << "Digite o tipo da ação (ou 'F' para finalizar): ";
        cin >> tipoAcao;

        if (tipoAcao == 'F' || tipoAcao == 'f') {
            break; // Termina o loop se a ação for 'F'
        }

        cout << "Digite o preço de compra da ação: ";
        cin >> precoCompra;

        cout << "Digite o preço de venda da ação: ";
        cin >> precoVenda;

        // Calcula o lucro da ação
        lucroAcao = precoVenda - precoCompra;
        cout << "Lucro da ação " << tipoAcao << ": R$ " << lucroAcao << endl;

        // Soma ao lucro total
        lucroTotal += lucroAcao;

        // Verifica se o lucro da ação é superior a R$ 1.000,00
        if (lucroAcao > 1000) {
            acoesComLucroMaior1000++;
        }

        // Verifica se o lucro da ação é inferior a R$ 200,00
        if (lucroAcao < 200) {
            acoesComLucroMenor200++;
        }
    }

    // Exibe os resultados finais
    cout << "Quantidade de ações com lucro superior a R$ 1.000,00: " << acoesComLucroMaior1000 << endl;
    cout << "Quantidade de ações com lucro inferior a R$ 200,00: " << acoesComLucroMenor200 << endl;
    cout << "Lucro total da empresa: R$ " << lucroTotal << endl;

    return 0;
}
