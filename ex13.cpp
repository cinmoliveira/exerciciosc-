/*
16) Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir.
Faça um programa que receba o preço atual de um produto e seu código, calcule e mostre
o valor do desconto e o novo preço.
*/

#include <iostream>

using namespace std;

int main()
{
    float preco_atual, desconto;
    int codigo;
    
    cout <<"Digite o preço atual: ";
    cin >> preco_atual;
    
    cout <<"Digite o código do produto: ";
    cin >> codigo;
    
    if (preco_atual < 30){
        desconto = (preco_atual *0)/100;
        preco_atual = preco_atual + desconto;
    } else if (preco_atual >= 30 && preco_atual < 100){
        desconto = (preco_atual *10)/100;
        preco_atual = preco_atual + desconto;
    } else {
        desconto = (preco_atual *15)/100;
        preco_atual = preco_atual + desconto;
    }
    
    cout << "O desconto foi de: " << desconto << endl;
    cout << "Assim, o preço com desconto é de: "<< preco_atual << endl;
    

    return 0;
}