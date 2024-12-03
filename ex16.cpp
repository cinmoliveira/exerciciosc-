/*
19) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes fórmulas (onde h é a altura):
*/
#include <iostream>

using namespace std;

int main()
{
    string sexo;
    float altura, peso_ideal;
    
    cout <<"Insira seu sexo: \n"
            "F: Feminino. \n"
            "M: Masculino.";
    cin >> sexo;
    
    cout <<"Insira sua altura: ";
    cin >> altura;
    
    if (sexo == "F"){
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        peso_ideal = (72.7 * altura) - 58;
    }
    
    cout <<"Seu peso ideal é: " << peso_ideal << endl;

    return 0;
}