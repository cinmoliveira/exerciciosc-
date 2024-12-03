/*
Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.
*/

#include <iostream>

using namespace std;

int main(){

    //Declarando as variáveis:
    int i, numeros, quantidade_primos = 0;

        for (i=0; i<10; i++){

            //Recebendo os 10 números inteiros:
            cout <<"Digite um número inteiro: ";
            cin >> numeros;

            if (numeros % 2 != 0){
                quantidade_primos ++;
            }
        }

        cout <<"A quantidade de números primos dentre os 10 digitados é de: "<< quantidade_primos;

    return 0;

}