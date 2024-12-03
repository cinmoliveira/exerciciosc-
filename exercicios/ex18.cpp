/*
21) Faça um programa que receba o preço de um produto e seu código de origem e mostre sua
procedência. A procedência obedece à tabela a seguir.
*/
#include <iostream>

using namespace std;

int main()
{
    float preco_produto;
    int codigo_origem;
    
    cout <<"Insira o preço do produto: ";
    cin >> preco_produto;
    
    cout <<"Insira o código de origem de 1 a 30: ";
    cin >> codigo_origem;
    
    if (codigo_origem == 1){
        cout <<"Procedência: Sul.";
    } else if (codigo_origem == 2){
        cout <<"Procedência: Norte.";
    } else if (codigo_origem ==3){
        cout <<"Procedência: Leste.";
    } else if (codigo_origem ==4){
        cout <<"Procedência: Oeste.";
    } else if (codigo_origem ==5 or codigo_origem ==6){
        cout <<"Procedência: Nordeste.";
    } else if (codigo_origem ==7 or codigo_origem ==8 or codigo_origem ==9){
        cout <<"Procedência: Sudeste.";
    } else if (codigo_origem ==10 or codigo_origem ==20){
        cout <<"Procedência: Centro-oeste.";
    } else {
        cout <<"Procedência: Nordeste.";
    }
        
    return 0;
}