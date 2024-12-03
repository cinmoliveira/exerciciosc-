/*
6) Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■ o valor total das compras à vista;
■ o valor total das compras a prazo;
■ o valor total das compras efetuadas; e
■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
*/

#include <iostream>
using namespace std;

int main(){

//Declarando as variáveis:
float valor_compra, somatorio_vista = 0, somatorio_prazo = 0, somatorio_compras = 0, somatorio_primeira_prestacao = 0;
string codigo;

//Laço para receber os valores de 15 transações:
for (int i=0; i<5; i++){
    //Recebendo os valores das compras e os códigos (prazo ou vista):
    cout <<"Insira o valor da compra: ";
    cin >> valor_compra;

    cout << "Pagamento à vista ou à prazo?\n"
            "Vista - V\n"
            "Prazo - P\n";
    cin >> codigo;

    //Somatoria de todas as compras:
    somatorio_compras += valor_compra;
    
    //Condicional para se a compra for a vista ou a prazo, somar os valores que forem entrando:
    if (codigo == "V" || codigo =="v"){
        somatorio_vista += valor_compra;
    } else {
        somatorio_prazo += valor_compra;
        somatorio_primeira_prestacao += (valor_compra/3); //Primeira parcela somada de todas a prazo
    } 
}

cout <<"O valor total das compras à vista: "<< somatorio_vista << "R$"<< endl;
cout <<"O valor total das compras a prazo: "<< somatorio_prazo <<"R$"<< endl;
cout <<"O valor total das compras efetuadas: "<< somatorio_compras <<"R$"<< endl;
cout <<"O valor da primeira prestação das compras a prazo juntas: "<< somatorio_primeira_prestacao <<"R$"<< endl;

    return 0;
}