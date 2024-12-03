/*
23) Faça um programa que receba:
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int codigo, quantidade;
    float valor_1, valor_2;
    int multiplicador; 
    float multiplicador_2;

    cout << "Insira o codigo do produto: ";
    cin >> codigo;

    cout << "Insira a quantidade de produtos: ";
    cin >> quantidade;

    if (codigo >= 1 && codigo <= 10){
            multiplicador = 10;

    }else if (codigo >= 11 && codigo <= 20){
            multiplicador = 15;

    }else if (codigo >= 21 && codigo <= 30){
            multiplicador = 20;

    }else if (codigo >= 31 && codigo <= 40){
           multiplicador = 30;
    }

    valor_1 = quantidade * multiplicador;

    cout << "Preco unitario: " << multiplicador << endl;
    cout << "Valor total da compra: " << valor_1 << endl;

    if (valor_1 < 250){      
            multiplicador_2 = 0.05;

    }else if (valor_1 >= 250 && valor_1 <= 500){
            multiplicador_2 = 0.10;

    }else if (valor_1 > 500){
            multiplicador_2 = 0.15;
    }
    valor_2 = valor_1 * (valor_1 * multiplicador_2);
    cout << "Desconto: " << (multiplicador_2 * 100) << endl;
    cout << "Valor com desconto: " << valor_2 << endl;
    return 0;
}