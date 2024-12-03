/*
24) Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 —
vestuário) e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não
necessitam de refrigeração).*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float preco, aumento, imposto, novoPreco;
    int categoria, situacao;

    cout << "Digite o preço do produto: ";
    cin >> preco;
    cout << "Digite a categoria do produto (1- limpeza, 2- alimentação, 3- vestuário): ";
    cin >> categoria;
    cout << "Digite a situação do produto (R- refrigerado, N- não refrigerado): ";
    cin >> situacao;

    if (preco <= 25) {
        if (categoria == 1) aumento = preco * 0.05;
        else if (categoria == 2) aumento = preco * 0.08;
        else aumento = preco * 0.12;
    } else {
        if (categoria == 1) aumento = preco * 0.15;
        else if (categoria == 2) aumento = preco * 0.18;
        else aumento = preco * 0.10;
    }

    if ((categoria == 2) || (situacao == 'R')) imposto = preco * 0.05;
    else imposto = preco * 0.08;

    novoPreco = preco + aumento - imposto;

    if (novoPreco <= 50) cout << "Classificação: Barato" << endl;
    else if (novoPreco <= 120) cout << "Classificação: Normal" << endl;
    else cout << "Classificação: Caro" << endl;

    cout << "Valor do aumento: " << aumento << endl;
    cout << "Valor do imposto: " << imposto << endl;
    cout << "Novo preço: " << novoPreco << endl;

    return 0;
}