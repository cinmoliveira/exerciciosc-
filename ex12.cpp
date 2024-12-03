/*
15) Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir.
Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor
corrigido após um mês de investimento, de acordo com o tipo de investimento.
*/
#include <iostream>

using namespace std;

int main()
{

int tipo_investimento;
float valor_investimento;

cout <<"Entre com o tipo do investimento:\n"
        "1: Poupança.\n" 
        "2: Fundos de renda fixa.";
cin >> tipo_investimento;
    
cout <<"Entre o valor que deseja investir: ";
cin >> valor_investimento;

if (tipo_investimento == 1){
    valor_investimento = valor_investimento + ((valor_investimento*3)/100);
} else {
    valor_investimento = valor_investimento + ((valor_investimento*4)/100);
}

cout <<"Após um mês de rendimento, seu valor rendeu: "<< valor_investimento << endl;
    return 0;
}