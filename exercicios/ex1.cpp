/*
1) Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética
das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/
#include <iostream>

using namespace std;
int main()
{
    //declarando as variáveis
    double nota_1, nota_2, nota_3, nota_4, media_aritmetica;
    
    cout << "Insira a primeira nota: ";
    cin >> nota_1;
    
    cout << "Insira a segunda nota: : ";
    cin >> nota_2;
    
    cout << "Insira a terceira nota: : ";
    cin >> nota_3;
    
    cout << "Insira a quarta nota: : ";
    cin >> nota_4;
    
    media_aritmetica = (nota_1 + nota_2 + nota_3 + nota_4)/4;
    
    if (media_aritmetica >= 7)
        cout << "APROVADO com nota: "<< media_aritmetica <<endl;
    else 
        cout << "REPROVADO com nota: "<< media_aritmetica <<endl;
    
    return 0;
}