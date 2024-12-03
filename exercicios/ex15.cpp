/*
18) Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
*/
#include <iostream>

using namespace std;

int main()
{
    int idade;
    
    cout <<"Insira a sua idade: ";
    cin >> idade;
    
    if (idade >= 18){
        cout <<"Maior de idade.";
    } else {
        cout <<"Menor de idade.";
    }

    return 0;
}