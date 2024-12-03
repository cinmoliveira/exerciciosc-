/*
Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto
lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados.
*/

#include <iostream>

using namespace std;

int main()
{

//Declarando as variáveis:
string sexo, resposta;
int i, contador_sim = 0, contador_nao = 0, contador_mulheres_sim = 0, porcentagem_homens_nao, contador_homens_nao = 0, contador_homens = 0;

for (i=0; i<5; i++){
    
    //Recebendo os dados de sexo e resposta:
    cout <<"Seu gênero é: \n"
            "Feminino\n"
            "Masculino\n";
    cin >> sexo;

    cout<<"Gostou do novo produto? \n"
            "Sim - S\n"
            "Não - N\n";
    cin >> resposta;

    //Verificando quantidade de homens no total:
    if (sexo == "Masculino" || "masculino"){
        contador_homens ++;
    }

    //Contando as pessoas que responderam sim e não:
    if (resposta == "S" || resposta == "s"){
        contador_sim ++;
        if (sexo =="Feminino" || sexo =="feminino"){
            contador_mulheres_sim++;
        }
    } else {
        contador_nao ++;
        if (sexo =="Masculino" || sexo =="masculino"){
            contador_homens_nao ++;
        }
    }
}

    //Calculo da porcentagem de homens que responderam não:
    porcentagem_homens_nao = contador_homens_nao * 100/contador_homens;

    //Imprime os resultados:
    cout <<"o número de pessoas que responderam sim: "<<contador_sim<< endl;
    cout <<"o número de pessoas que responderam não: "<<contador_nao<< endl;
    cout <<"o número de mulheres que responderam sim: "<<contador_mulheres_sim<< endl;
    cout <<"a percentagem de homens que responderam não: "<<porcentagem_homens_nao<<"%"<< endl;

    return 0;
}

