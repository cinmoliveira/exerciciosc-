/*
5) Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.
*/
#include <iostream>
using namespace std;

// Função para verificar se o número é positivo ou negativo
void verificar_sinal(int numero) {
    if (numero > 0) {
        cout << "O número " << numero << " é positivo." << endl;
    } else if (numero < 0) {
        cout << "O número " << numero << " é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }
}

int main() {
    int valor;

    // Solicita ao usuário para inserir um número
    cout << "Digite um número inteiro: ";
    cin >> valor;

    // Chama a função para verificar se é positivo ou negativo
    verificar_sinal(valor);

    return 0;
}
