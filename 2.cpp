#include <iostream>

using namespace std;

int main()
{
    float lucro, faturamento, ingresso = 5;
    int quantidade = 120; 

    while (ingresso >= 1){
    // Cálculos para saber os valores de faturamento (lucro em função do preço do ingresso) e lucro máximo
        faturamento = quantidade * ingresso;
        lucro = faturamento - 200;

    // Imprimir na tela os valores:
        cout <<"Ing \t |"<< ingresso <<" \t Qtde \t | "<< quantidade <<"\t Lucro" << lucro << endl;

    //Retirar o valor de 0.5 em 0.5 e somado a quantidade de 26 em 26
        ingresso -= 0.5;
        quantidade += 26;

}

return 0;
}