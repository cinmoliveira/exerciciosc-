/*
20) Faça um programa que receba a idade de um nadador e mostre sua categoria,
usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
*/
#include <iostream>

using namespace std;

int main()
{
    
    int idade;
    
    cout <<"Insira a idade: ";
    cin >> idade;
    
    if (idade < 5){
        cout <<"Idade não se encaixa na faixa de categoria.";
    } else if (idade >=5 && idade <=7){
        cout <<"Categoria infantil.";
    } else if (idade >= 8 && idade <= 10){
        cout <<"Categoria juvenil.";
    } else if (idade >= 11 && idade <= 15){
        cout <<"Categoria adolescente.";
    } else if (idade >=16 && idade <=30){
        cout <<"Categoria adulto.";
    } else {
        cout <<"Categoria sênior.";
    }
    return 0;
}