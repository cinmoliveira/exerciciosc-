/*
10) Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determine
o valor da sequência S:
*/

#include <iostream>
using namespace std;

// Função para calcular o valor da sequência harmônica S
double calcular_sequencia(int n) {
    double soma = 0.0;

    // Percorre todos os valores de 1 até N para calcular a soma
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;  // Adiciona o termo 1/i à soma
    }

    return soma;  // Retorna o valor total da sequência
}

int main() {
    int n;
    
    // Solicita ao usuário que insira um número inteiro positivo
    cout << "Digite um número inteiro e positivo (N >= 1): ";
    cin >> n;

    // Verifica se o valor de N é maior ou igual a 1
    if (n < 1) {
        cout << "O valor de N deve ser maior ou igual a 1." << endl;
    } else {
        // Chama a função para calcular a sequência e exibe o resultado
        double resultado = calcular_sequencia(n);
        cout << "O valor da sequência S com " << n << " parcelas é: " << resultado << endl;
    }

    return 0;
}
