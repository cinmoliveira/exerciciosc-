/*
7) Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.
*/

#include <iostream>

using namespace std;

int main() {
    
    float salario, calculo_1, calculo_2;

    cout << "Informe o seu salário ";
    cin >> salario;
    
    if (salario <= 300) {
        calculo_1 = salario + ((salario*35)/100);
        cout << "O seu salário reajustado é de: " << calculo_1 << endl;
    } else {
        calculo_2 = salario + ((salario*15)/100);
        cout << "O seu salário reajustado é de: " << calculo_2 << endl;
    }
    return 0;
}