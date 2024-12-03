/*
6) Faça um programa que receba dois números e execute uma das operações listadas a seguir,
de acordo com a escolha do usuário.
Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução doprograma.
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    
    int num_1, num_2;
    float raiz_quadrada_a, raiz_quadrada_b, raiz_cubica_a, raiz_cubica_b, potencia;
    string operacao;

    cout << "Informe dois números: ";
    cin >> num_1 >> num_2;
    
    cout <<"Informe a operação matemática desejada \n"
            "a: O primeiro número elevado ao segundo número. \n"
            "b: Raiz quadrada de cada um dos números. \n"
            "c: Raiz cúbica de cada um dos números. \n";
    cin >> operacao;
    
    //Queria usar switch/case mas deu errado e vi que c++ não aceita string nem char.
    if (operacao =="a"){
        potencia = pow(num_1, num_2);
        cout << "O primeiro número elevado ao segundo número: " << potencia << endl;
    } else if (operacao =="b"){
        raiz_quadrada_a = sqrt(num_1);
        raiz_quadrada_b = sqrt(num_2);
        cout << "A raiz quadrada do primeiro número é: " << raiz_quadrada_a << endl;
        cout << "A raiz quadrada do segundo número é: " << raiz_quadrada_b << endl;
    } else if (operacao =="c"){
        raiz_cubica_a = cbrt(num_1);
        raiz_cubica_b = cbrt(num_2);
        cout << "A raiz cúbica do primeiro número é: " << raiz_cubica_a << endl;
        cout << "A raiz cúbica do segundo número é: " << raiz_cubica_b << endl;
    } else {
        cout << "ERROR!!! Operação digitada inválida." << endl;
    }

    return 0;
}