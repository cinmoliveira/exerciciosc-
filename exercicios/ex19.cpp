/*
22) Faça um programa que receba a idade e o peso de uma pessoa.
De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.
*/
#include <iostream>

using namespace std;

int main()
{
    int idade, risco;
    float peso;
    
    cout <<"Insira sua idade: ";
    cin >> idade;
    
    cout <<"Insira seu peso: ";
    cin >> peso;
    
    if (idade < 20) {
        if (peso <= 60) {
            risco = 9;
        } else if (peso <= 90) {
            risco = 8;
        } else {
            risco = 7;
        }
    } else if (idade <= 50) {
        if (peso <= 60) {
            risco = 6;
        } else if (peso <= 90) {
            risco = 5;
        } else {
            risco = 4;
        }
    } else {
        if (peso <= 60) {
            risco = 3;
        } else if (peso <= 90) {
            risco = 2;
        } else {
            risco = 1;
        }
    }

    cout << "Grupo de risco: " << risco << endl;


    return 0;
}