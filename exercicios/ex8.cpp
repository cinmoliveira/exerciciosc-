/*
11) Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir,
calcule e mostre o valor do aumento e o novo salário.
*/

#include <iostream>

using namespace std;

int main()
{
    
    float salario_atual, salario_novo_1, salario_novo_2, salario_novo_3;
    
    cout << "Insira o seu salário atual: ";
    cin >> salario_atual;
    
    if (salario_atual <= 300){
        salario_novo_1 = salario_atual + ((salario_atual *15)/100);
        cout <<"Seu salário obteve aumento de 15%, ficando: " << salario_novo_1 << endl;
    } else if (salario_atual > 300 && salario_atual < 600){
        salario_novo_2 = salario_atual + ((salario_atual *10)/100);
        cout <<"Seu salário obteve aumento de 10%, ficando: " << salario_novo_2 << endl;
    } else if (salario_atual >= 600 && salario_atual <= 900){
        salario_novo_3 = salario_atual + ((salario_atual *5)/100);
        cout <<"Seu salário obteve aumento de 5%, ficando: " << salario_novo_3 << endl;
    } else {
        cout <<"Seu salário não obteve aumento, portanto é: " << salario_atual << endl;
    }

    return 0;
}