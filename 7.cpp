/*
7) Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■ a quantidade de pessoas com idade superior a 50 anos;
■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
*/

#include <iostream>

using namespace std;

int main()
{
    int idade, i, contador_altura_10_20 =0, contador_quantidade_pessoas_idade_maior_50=0, somatorio_media_altura_pessoas_10_20_anos=0, contador_porcentagem_pessoas_peso_inferior_40=0;
    float altura, media_altura, peso, porcentagem;

    for (i=0; i<=5; i++){

    cout <<"Insira sua idade: ";
    cin >> idade;

    cout <<"Insira sua altura: ";
    cin >> altura;

    cout <<"Insira seu peso: ";
    cin >> peso;

    // a quantidade de pessoas com idade superior a 50 anos:
        if (idade > 50){
            contador_quantidade_pessoas_idade_maior_50 += 1;
        }
    
    //a média das alturas das pessoas com idade entre 10 e 20 anos:
        if (idade >=10 && idade <=20){
            somatorio_media_altura_pessoas_10_20_anos = altura + somatorio_media_altura_pessoas_10_20_anos;
            contador_altura_10_20 += 1;
        }
    //a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas:
        if (peso < 40){
            contador_porcentagem_pessoas_peso_inferior_40 += 1;
        }
    }

    media_altura = somatorio_media_altura_pessoas_10_20_anos/contador_altura_10_20;
    porcentagem = contador_porcentagem_pessoas_peso_inferior_40 *100/5;

    //Imprimindo na tela:
        cout <<"A quantidade de pessoas com idade superior a 50 é de: " << contador_quantidade_pessoas_idade_maior_50;
        cout <<" A média das alturas das pessoas com idade entre 10 e 20 anos é de: " << media_altura << endl;
        cout <<"A porcentagem de pessoas com peso inferior a 40 kg é de: "<< porcentagem <<endl;

    return 0;
}