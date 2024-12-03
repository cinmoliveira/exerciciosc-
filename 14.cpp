/*
Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando
idade igual a zero.
*/

#include <iostream>

using namespace std;

int main(){

    int idades, contador_idades = 0, somatoria_idades = 0;
    float media_idades;

    do {
        //Recebendo as idades:
        cout <<"Insira a sua idade: ";
        cin >> idades;

        //Contador das idades:
        contador_idades ++;
        somatoria_idades += idades;

    } while (idades != 0);

    //Calculo da média das idades:
    media_idades = somatoria_idades/contador_idades;

    //Imprimindo o resultado:
    cout <<"A média das idades digitadas é de: "<< media_idades;

    return 0;
}