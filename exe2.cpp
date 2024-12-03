/*
Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■ os números múltiplos de 2;
■ os números múltiplos de 3;
■ os números múltiplos de 2 e de 3.
*/

#include <iostream>

using namespace std;
int main(){
    int vetor[7], i;

    //Receber os valores:
    for(i=0;i<7;i++){
        cout<<"Digite 7 valores inteiros: ";
        cin>> vetor[i];
    }

    //multiplos de 2:
    cout<<"Os múltiplos de 2 são: ";
    //laço para múltiplos de 2:
    for(i=0;i<7;i++){
        if (vetor[i] % 2 ==0){
            cout << vetor[i] <<", ";
        }
    }

    cout<<endl; //pular linha
    //multilplos de 3:
    cout<<"Os múltiplos de 3 são: ";
    //laço para múltiplos de 3:
    for(i=0;i<7;i++){
        if (vetor[i] % 3 == 0){
            cout << vetor[i] <<", ";
        }
    }

    cout<<endl; //pular linha
    //multilplos de 2 e 3:
    cout<<"Os múltiplos de 2 e 3 são: ";
    //laço para múltiplos de 2 e 3:
    for(i=0;i<7;i++){
        if (vetor[i] % 3 == 0){
            if (vetor[i]%2==0){
                cout << vetor[i] <<", ";
            }
        }
    }




    return 0;
}