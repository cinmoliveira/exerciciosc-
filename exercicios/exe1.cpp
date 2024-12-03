/*
1) Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■ todos os números pares;
■ a quantidade de números pares;
■ todos os números ímpares;
■ a quantidade de números ímpares.
*/

#include <iostream>

 using namespace std;

 int main(){

    int vetor[6], n_pares = 0, n_impares = 0;

    //Entrando com o laço para interar os valores:
    for (int i=0; i<6; i++){
        cout <<"Digite um valor: ";
        cin >> vetor[i];
    }

    //Interando pares:
    cout <<"Os valores de pares é: ";
    for(int i=0; i<6; i++){
        if (vetor[i] % 2 == 0){
            cout << vetor[i] << ", ";
            n_pares ++;
        }
        }
    cout <<endl;
    cout<<"A quandidade de números pares é: " << n_pares << endl;

    //Interando ímpares:
    cout <<"Os valores ímpares são: ";
    for(int i=0; i<6; i++){
        if (vetor[i] % 2 == 0){
            cout << vetor[i] << ", ";
            n_impares ++;
        }
        }
    }
    cout <<endl;
    cout<<"A quandidade de números ímpares é: " << n_impares << endl;

    return 0;
 }