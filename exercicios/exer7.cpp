/*
7) Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmética
desses valores. Terminar a entrada de dados com o valor zero.
*/

#include <iostream>
using namespace std;

// Sub-rotina que calcula a média de um número não determinado
double calcular_media() {
    int valor, soma = 0, contador = 0;
    
    do {
        cout << "Digite um valor positivo (0 para terminar): ";
        cin >> valor;
        
        if (valor > 0) {
            soma += valor;
            contador++;
        } else if (valor < 0) {
            cout << "Por favor, insira apenas valores positivos ou 0 para encerrar." << endl;
        }
        
    } while (valor != 0);

    // Retorna a média ou 0 caso nenhum valor positivo tenha sido inserido
    if (contador > 0) {
        return static_cast<double>(soma) / contador;  // Retorna a média calculada
    } else {
        return 0;  // Retorna 0 se nenhum valor positivo foi inserido
    }
}

int main() {
    double media = calcular_media();
    
    if (media > 0) {
        cout << "A média dos valores inseridos é: " << media << endl;
    } else {
        cout << "Nenhum valor positivo foi inserido." << endl;
    }
    
    return 0;
}
