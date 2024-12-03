/*
13) Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir,
o novo preço e a classificação.
*/
#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    float preco_antigo, preco_novo;
    string classificacao;
    
    cout <<"Digite o preço do produto: ";
    cin >> preco_antigo;
    
    if (preco_antigo < 50) {
        preco_novo = preco_antigo + ((preco_antigo*5)/100);
    } else if (preco_antigo >= 50 && preco_antigo <= 100) {
        preco_novo = preco_antigo + ((preco_antigo*10)/100);
    } else {
        preco_novo = preco_antigo + ((preco_antigo*15)/100);
    }

    if (preco_novo < 80){
        classificacao = "Barato";
    } else if (preco_novo >= 80 && preco_novo <=120){
        classificacao = "Normal";
    } else if (preco_novo >120 && preco_novo <=200){
        classificacao = "Caro";
    } else{
        classificacao = "Muito caro";
    }
    
    cout <<"O novo preço do produto é de R$" << preco_novo <<" como classificação: "<< classificacao << endl;

    return 0;
}