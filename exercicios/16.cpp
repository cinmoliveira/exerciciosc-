/*
Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F)
e salário. Faça um programa que calcule e mostre:
■ a média dos salários do grupo;
■ a maior e a menor idade do grupo;
■ a quantidade de mulheres com salário até R$ 200,00;
■ a idade e o sexo da pessoa que possui o menor salário.
Finalize a entrada de dados ao ser digitada uma idade negativa.
*/

#include <iostream>
using namespace std;

int main(){
    //Declarando as variáveis:
    int idade, cont_maior_idade = 0, cont_salario_todos = 0, conta_menor_idade = 0, cont_mulher_salario_200;
    string sexo;
    float salario, media_salario, somatorio_salario_todos;

    do {
        //Recebendo sexo, idade e salário:
        cout <<"Insira o seu sexo: ";
        cin >> sexo;

        cout <<"Insira a sua idade: ";
        cin >> idade;

        cout <<"Salário: ";
        cin >> salario;

        //Contador de pessoas no total e somatória do salário total:
        cont_salario_todos ++;
        somatorio_salario_todos += salario;

        //Contador de mulheres com salário até 200:
        if (sexo == "Feminino" || sexo == "feminino"){
            if (salario <= 200){
                cont_mulher_salario_200 ++;
            }
        }
    } while (idade >= 0);
    
    //Calculo da media do grupo todo:
    media_salario = somatorio_salario_todos/cont_salario_todos;

    //Imprimindo:
    cout <<"A média salarial do grupo é de: "<<media_salario<<"R$"<<endl;

    //Maior e menor idade do grupo:
    cout <<"A maior idade do grupo é de: "<< max(idade) <<endl;
    cout <<"A menor idade do grupo é de: "<< min(idade) <<endl;



    //a idade e o sexo da pessoa que possui o menor salário:

    return 0;
}