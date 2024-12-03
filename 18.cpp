/*
Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
*/

#include <iostream>
using namespace std;

int main() {
    int opcao;
    
    do {
        // Exibe o menu de opções
        cout << "\nMenu de opções:\n";
        cout << "1. Média aritmética\n";
        cout << "2. Média ponderada\n";
        cout << "3. Sair\n";
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                // Opção 1: Média aritmética
                double nota1, nota2, mediaAritmetica;
                cout << "Digite a primeira nota: ";
                cin >> nota1;
                cout << "Digite a segunda nota: ";
                cin >> nota2;

                mediaAritmetica = (nota1 + nota2) / 2.0;
                cout << "Média aritmética: " << mediaAritmetica << endl;
                break;
            }
            case 2: {
                // Opção 2: Média ponderada
                double nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;
                cout << "Digite a primeira nota: ";
                cin >> nota1;
                cout << "Digite o peso da primeira nota: ";
                cin >> peso1;

                cout << "Digite a segunda nota: ";
                cin >> nota2;
                cout << "Digite o peso da segunda nota: ";
                cin >> peso2;

                cout << "Digite a terceira nota: ";
                cin >> nota3;
                cout << "Digite o peso da terceira nota: ";
                cin >> peso3;

                mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
                cout << "Média ponderada: " << mediaPonderada << endl;
                break;
            }
            case 3:
                // Opção 3: Sair
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }

    } while(opcao != 3);

    return 0;
}
