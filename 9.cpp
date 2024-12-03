/*
Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■ o preço final para compra à vista tem desconto de 20%;
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■ os percentuais de acréscimo encontram-se na tabela a seguir.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    float valor_carro, valor_final, acrescimo = 0;
    int n_parcelas = 0;

    system("cls");
    cout << "Informe o valor do veículo: ";
    cin >> valor_carro;

    cout << fixed << setprecision(2);
    cout << "Parc\t|\t-/+\t|\tValor\t|\n";
    for (int i = 0; i < 11; i++) {
        n_parcelas = i * 6;

        switch (n_parcelas) {
            case 0:
                valor_final = valor_carro - (valor_carro * 0.2);
                acrescimo = 0;
                break;
            case 6:
                acrescimo = 1.03;
                break;
            case 12:
                acrescimo = 1.06;
                break;
            case 18:
                acrescimo = 1.09;
            case 24:
                acrescimo = 1.12;
                break;
            case 30:
                acrescimo = 1.15;
                break;
            case 36:
                acrescimo = 1.18;
                break;
            case 42:
                acrescimo = 1.21;
                break;
            case 48:
                acrescimo = 1.24;
                break;
            case 54:
                acrescimo = 1.27;
                break;
            case 60:
                acrescimo = 1.30;
                break;
        }
        if (acrescimo > 0) {
            valor_final = valor_carro * acrescimo;
            cout << n_parcelas << "\t|\t" << (acrescimo-1)*100 << "%\t|\tR$ " << valor_final << endl; 
        } else {
            cout << "À vista\t|\t-20%\t|\tR$ " << valor_final << endl; 
        }
    }

    return 0;
}