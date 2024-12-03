/*
4) Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram.
*/

#include <iostream>

using namespace std;

int main(){

    int vetor[15], i;

    //laço para pedir os valores:
    for(i = 0; i<15; i++){
        cout <<"Digite 15 elementos inteiros: ";
        cin >> vetor[i];
    }

    //Laço para checar se há elemento igual a 30, deve percorrer todo o vetor, por isso o laço:
    for (i = 0; i<15; i++){
        if(vetor[i] == 30){
            cout << vetor[i] <<" está presente entre os valores.";
        }
    }

    return 0;
}