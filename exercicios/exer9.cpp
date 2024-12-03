/*
9) Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.
*/

#include <iostream>
using namespace std;

// Função para calcular a soma dos divisores de um número inteiro positivo
int soma_divisores(int numero) {
    int soma = 0;

    // Verifica todos os números de 1 até o valor de 'numero'
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) { // Se 'i' é divisor de 'numero'
            soma += i;         // Adiciona 'i' à soma
        }
    }

    return soma;
}

int main() {
    int valor;
    
    // Solicita ao usuário que insira um número positivo
    cout << "Digite um número inteiro e positivo: ";
    cin >> valor;

    // Verifica se o valor é positivo antes de calcular a soma dos divisores
    if (valor <= 0) {
        cout << "O número deve ser inteiro e positivo." << endl;
    } else {
        // Chama a função para calcular a soma dos divisores e exibe o resultado
        int resultado = soma_divisores(valor);
        cout << "A soma dos divisores de " << valor << " é: " << resultado << endl;
    }

    return 0;
}
