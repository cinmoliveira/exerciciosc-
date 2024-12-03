/*
Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião
de quinze espectadores, calcule e mostre:
■ a média das idades das pessoas que responderam ótimo;
■ a quantidade de pessoas que responderam regular; e
■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.
*/

#include <iostream>

using namespace std;

int main(){

    int i, idade, opiniao, contador_idade_otimo = 0, somatorio_idade_otimo = 0, media_idade_otimo, contador_pessoas_regular = 0, contador_pessoas_bom=0, percentagem_pessoas_bom;

    for(i=0;i<15;i++){

        //Recebe as informações de idade e opinião:
        cout <<"Digite a sua idade: ";
        cin>> idade;
        cout << "Sua opinião com relação ao filme: \n"
                "Ótimo - 3\n"
                "Bom - 2\n"
                "Regular - 1" << endl;
        cin >> opiniao;

        //Recebendo o contador e somatorio de idade de pessoas que receberam ótimo
        switch (opiniao)
        {
        case 3:
            contador_idade_otimo ++;
            somatorio_idade_otimo += idade;
            break;
        case 1:
            contador_pessoas_regular ++;
            break;
        case 2:
            contador_pessoas_bom ++;
            break;
        }
    }
        //Cálculo da media da idade de pessoas que responderam ótimo:
        media_idade_otimo = somatorio_idade_otimo/contador_idade_otimo;

        //Cálculo de percentagem de pessoas que responderam bom:
        percentagem_pessoas_bom = contador_pessoas_bom *100/15;

        //Imprimindo os resultados:
        cout <<"A média das idades das pessoas que responderam ótimo é de: "<<media_idade_otimo <<endl;
        cout<<"A quantidade de pessoas que responderam regular é de: "<<contador_pessoas_regular <<endl;
        cout<<"A percentagem de pessoas que responderam bom: "<< percentagem_pessoas_bom <<endl;

    return 0;
}