#include <iostream>
using namespace std;

// Função para calcular o fatorial de um número inteiro positivo
int calcular_fatorial(int numero) {
    int fatorial = 1;

    // Calcula o fatorial multiplicando de 1 até o número
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int valor;
    
    // Solicita ao usuário que insira um número positivo
    cout << "Digite um número inteiro e positivo: ";
    cin >> valor;

    // Verifica se o valor é positivo antes de calcular o fatorial
    if (valor < 0) {
        cout << "O número deve ser inteiro e positivo." << endl;
    } else {
        // Chama a função para calcular o fatorial e exibe o resultado
        int resultado = calcular_fatorial(valor);
        cout << "O fatorial de " << valor << " é: " << resultado << endl;
    }

    return 0;
}
