/*
11) Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
*/

#include <iostream>
using namespace std;

// Função para calcular a soma S com N parcelas
double calcular_soma(int n) {
    double soma = 0.0;

    // Loop para calcular cada parcela e adicioná-la à soma
    for (int i = 1; i <= n; i++) {
        // Calcula o numerador como i^2 + 1 e o denominador como i + 3
        double numerador = i * i + 1;
        double denominador = i + 3;
        
        // Adiciona a parcela (numerador/denominador) à soma
        soma += numerador / denominador;
    }

    return soma;  // Retorna o valor total da soma
}

int main() {
    int n;
    
    // Solicita ao usuário que insira a quantidade de parcelas N
    cout << "Digite um número inteiro e positivo (N >= 1) para a quantidade de parcelas: ";
    cin >> n;

    // Verifica se o valor de N é válido (positivo e maior ou igual a 1)
    if (n < 1) {
        cout << "O valor de N deve ser maior ou igual a 1." << endl;
    } else {
        // Chama a função para calcular a soma e exibe o resultado
        double resultado = calcular_soma(n);
        cout << "O valor da soma S com " << n << " parcelas é: " << resultado << endl;
    }

    return 0;
}
