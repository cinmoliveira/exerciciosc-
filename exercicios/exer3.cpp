/* 3) Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
*/

#include <iostream>
using namespace std;

// Função para verificar divisibilidade e retornar o próximo divisor
int retornar_valor(int num1, int num2){
    
    if (num1 % num2 == 0){ // Retorna 0 se numero1 for divisível por numero2
        return 0;
    } else {
        //laço para procurar o numero divisível:
        for(int i = num2 + 1; i<=num1; i++){ // Procura o próximo divisor de numero1 a partir de numero2 + 1
            if (num1 % i == 0){
                return i; // Retorna o próximo divisor encontrado
            }
        }
    }
}

 int main(){
     int n1, n2, resultado;
     
     cout <<"Insira dois números: \n";
     cin >> n1 >> n2; // Solicita os números n1 e n2
     
     resultado = retornar_valor(n1, n2); // Chama a função
     
     cout <<"O resultado é: " << resultado;
     
     return 0;
 }
