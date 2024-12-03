/*
14) Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
*/
#include <iostream>

using namespace std;

int main()
{

    float salario_funcionario, aumento;

    cout << "Insira o salário do funcionário: ";
    cin >> salario_funcionario;

    if (salario_funcionario <= 300){
        aumento = salario_funcionario + ((salario_funcionario * 50) /100);
    } else if (salario_funcionario > 300 && salario_funcionario <= 500) {
        aumento = salario_funcionario + ((salario_funcionario * 40) /100);
    } else if (salario_funcionario > 500 && salario_funcionario <= 700) {
        aumento = salario_funcionario + ((salario_funcionario * 30) /100);
    } else if (salario_funcionario > 700 && salario_funcionario <= 800) {
        aumento = salario_funcionario + ((salario_funcionario * 20) /100);
    } else if (salario_funcionario > 800 && salario_funcionario <= 1000) {
        aumento = salario_funcionario + ((salario_funcionario * 10) /100);
    } else {
        aumento = salario_funcionario + ((salario_funcionario * 5) /100);
    }

    cout << "O novo salário é: " << aumento <<endl;

    return 0;
}