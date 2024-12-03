/*
Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.
*/
#include <iostream>

using namespace std;

int main(){

    //Declarando as variáveis:
    int i, idade, contador_1 = 0, contador_2 = 0, contador_3 = 0, contador_4 = 0;
    float peso, media_peso_faixa1,somatorio_1 = 0, media_peso_faixa2,somatorio_2 = 0, media_peso_faixa3,somatorio_3 = 0, somatorio_4 = 0, media_peso_faixa4;

    for (i=0;i<15;i++){

        //Recebendo idade e peso:
        cout <<"Digite sua idade: ";
        cin >> idade;

        cout<<"Digite seu peso: ";
        cin >> peso;

        //Condição para validar e somar idade e contador de cada faixa:
        if (idade >= 1 && idade <=10){
            contador_1 ++;
            somatorio_1 += peso;
        } else if (idade >=11 && idade <=20) {
            contador_2 ++;
            somatorio_2 += peso;
        } else if (idade >= 21 && idade <=30){
            contador_3 ++;
            somatorio_3 += peso;
        } else if (idade >=31){
            contador_4 ++;
            somatorio_4 += peso;
        } else {
            cout<<"Digite uma idade válida.";
        }
    }

    //Condição para cálculo de média das faixas:
    if (idade >= 1 && idade <=10){
        media_peso_faixa1 = somatorio_1/contador_1;
    } else if (idade >=11 && idade <=20) {
        media_peso_faixa2 = somatorio_2/contador_2;
    } else if (idade >= 21 && idade <=30){
        media_peso_faixa3 = somatorio_3/contador_3;
    } else {
        media_peso_faixa4 = somatorio_4/contador_4;
    }
    
    //Imprimindo o resultado das médias de cada faixa:
    cout<<"A média do peso das pessoas entre 1 a 10 anos é de: " << media_peso_faixa1 <<endl;
    cout<<"A média do peso das pessoas entre 11 a 20 anos é de: "<< media_peso_faixa2 <<endl;
    cout<<"A média do peso das pessoas entre 21 a 30 anos é de: "<< media_peso_faixa3 <<endl;
    cout<<"A média do peso das pessoas acima de 31 anos é de: "<< media_peso_faixa4 <<endl;

    return 0;
}

