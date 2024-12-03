/*
3) Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
*/

#include <iostream>

using namespace std;
int main(){
    //Declarando as variáveis:
    int i, idade, quantidade_faixa_etaria = 0, quantidade_primeira_faixa = 0, quantidade_ultima_faixa = 0;
    float porcentagem_primeira_faixa, porcentagem_ultima_faixa;

    //Laço para receber a idade e contador:
    for (i=0;i<8;i++){

        //Recebendo os valores das idades:
        cout <<"Digite a sua idade: ";
        cin >> idade;

        //Contador para qualquer faixa:
        quantidade_faixa_etaria ++;

        //Validando a idade:
        if (idade <= 15){
            quantidade_primeira_faixa ++;
        } else if (idade > 60){
            quantidade_ultima_faixa ++;
        }
    }
    //Cálculo da porcentagem de pessoas na primeira faixa etária:
    porcentagem_primeira_faixa = quantidade_primeira_faixa*100/quantidade_faixa_etaria;

    //Cálculo da porcentagem de pessoas na última faixa etária:
    porcentagem_ultima_faixa = quantidade_ultima_faixa*100/quantidade_faixa_etaria;

    //Imprimindo os resultados:
    cout <<"A quantidade de pessoas em cada faixa etária é de: "<< quantidade_faixa_etaria << endl;
    cout <<"A porcentagem de pessoas na primeira faixa etária: "<< porcentagem_primeira_faixa << endl;
    cout <<"A porcentagem de pessoas na última faixa etária: "<< porcentagem_ultima_faixa << endl;

    return 0;
}