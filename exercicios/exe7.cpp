/*
7) Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor.
*/

#include <iostream>
using namespace std;
int main(){

    int vetor[10], count_neg = 0, soma_positivos = 0;

    //laço for para receber os valores:
    for (int i = 0; i < 10; i++){
        cout <<"Valores: ";
        cin >> vetor[i];
    }

    //laço para receber a quantidade de negativos e imprimí-los:
    cout <<"\nOs negativos são: ";
    for (int i = 0; i <10; i++){
        if (vetor[i]<0){
            cout << vetor[i] << ", ";
            count_neg ++;
        }
    }

    //mostra quantos negativos:
    cout << "\nA quantidade de números negativos presentes é de: " << count_neg << endl;

    //laço para receber a quantidade de positivos e imprimí-los:
    cout <<"\nOs positivos são: ";
    for (int i = 0; i <10; i++){
        if (vetor[i]>= 0){
            cout << vetor[i] << ", ";
            soma_positivos += vetor[i];
        }
    }

    //imprimindo o total de positivos somados:
    cout << "\nO total de positivos somados é de: " << soma_positivos << endl;

    return 0;
}