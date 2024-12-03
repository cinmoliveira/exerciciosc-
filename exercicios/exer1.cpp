/* 1) Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números
inteiros existentes entre o número 1 e N (inclusive). */

#include <iostream>
using namespace std;

int recebeNumero(int N){
  int soma = 0;
  
  for(int i=0;i<=N;i++){
      soma = soma + i;
  }
    return soma;
}

int main()
{
    int numero, resultado;
    cout <<"Digite um número inteiro e positivo: ";
    cin >> numero;
    
    resultado = recebeNumero(numero);
    cout <<"A soma de 1 até o número escolhido é: " << resultado;
return 0;
}