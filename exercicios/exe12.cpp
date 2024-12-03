/*
12) Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas:
ALUNO 1a PROVA 2a PROVA MÉDIA SITUAÇÃO
Carlos 8,0 9,0 8,5 Aprovado
Pedro 4,0 5,0 4,5 Reprovado
■ média da classe = ?
■ percentual de alunos aprovados = ?%
■ percentual de alunos de exame = ?%
■ percentual de alunos reprovados = ?%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomes[6];    // Vetor para armazenar os nomes dos alunos
    float nota1[6];     // Vetor para armazenar a 1ª nota dos alunos
    float nota2[6];     // Vetor para armazenar a 2ª nota dos alunos
    float media[6];     // Vetor para armazenar a média de cada aluno
    string situacao[6]; // Vetor para armazenar a situação (Aprovado, Exame, Reprovado) de cada aluno
    float soma_medias = 0;   // Variável para acumular a soma das médias
    int count_aprovados = 0, count_exame = 0, count_reprovados = 0;  // Contadores para aprovação, exame e reprovação

    // Entrada de dados dos 6 alunos
    for (int i = 0; i < 6; i++) {
        cout << "Digite o nome do " << i + 1 << "º aluno: ";
        cin >> nomes[i];
        cout << "Digite a 1ª nota do " << nomes[i] << ": ";
        cin >> nota1[i];
        cout << "Digite a 2ª nota do " << nomes[i] << ": ";
        cin >> nota2[i];

        // Calcula a média do aluno
        media[i] = (nota1[i] + nota2[i]) / 2;
        soma_medias += media[i];  // Acumula a média para calcular a média da classe

        // Determina a situação do aluno
        if (media[i] >= 7.0) {
            situacao[i] = "Aprovado";
            count_aprovados++;
        } else if (media[i] >= 5.0) {
            situacao[i] = "Exame";
            count_exame++;
        } else {
            situacao[i] = "Reprovado";
            count_reprovados++;
        }
    }

    // Calcula a média da classe
    float media_classe = soma_medias / 6;

    // Calcula os percentuais de alunos aprovados, de exame e reprovados
    float percentual_aprovados = (count_aprovados / 6.0) * 100;
    float percentual_exame = (count_exame / 6.0) * 100;
    float percentual_reprovados = (count_reprovados / 6.0) * 100;

    // Exibe o relatório de notas
    cout << "\nRelatório de Notas:" << endl;
    cout << "ALUNO        1a PROVA  2a PROVA  MÉDIA  SITUAÇÃO" << endl;
    for (int i = 0; i < 6; i++) {
        cout << nomes[i] << "        " << nota1[i] << "        " << nota2[i] << "        " << media[i] << "     " << situacao[i] << endl;
    }

    // Exibe as estatísticas da turma
    cout << "\nMédia da classe = " << media_classe << endl;
    cout << "Percentual de alunos aprovados = " << percentual_aprovados << "%" << endl;
    cout << "Percentual de alunos de exame = " << percentual_exame << "%" << endl;
    cout << "Percentual de alunos reprovados = " << percentual_reprovados << "%" << endl;

    return 0;
}
