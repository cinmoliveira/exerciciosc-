/*
Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1o aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2o aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomes[8];    // Vetor para armazenar os nomes dos alunos
    float notas[8];     // Vetor para armazenar as notas dos alunos
    float soma = 0;     // Variável para acumular a soma das notas
    float media = 0;    // Variável para armazenar a média da turma

    // Entrada dos nomes e notas dos alunos
    for (int i = 0; i < 8; i++) {
        cout << "Digite o nome do " << i + 1 << "o aluno: ";
        cin >> nomes[i];
        cout << "Digite a nota do " << nomes[i] << ": ";
        cin >> notas[i];
        soma += notas[i];  // Acumula a soma das notas
    }

    // Calcula a média da classe
    media = soma / 8;

    // Exibe o relatório de notas
    cout << "\nRelatório de notas\n";
    for (int i = 0; i < 8; i++) {
        cout << nomes[i] << " " << notas[i] << endl;
    }

    // Exibe a média da classe
    cout << "Média da classe = " << media << endl;

    return 0;
}
