/*
8) Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
■ o nome do aluno com maior média (desconsiderar empates);
■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomes[7];          // Vetor para armazenar os nomes dos alunos
    double medias[7];         // Vetor para armazenar as médias dos alunos

    // Entrada dos nomes e médias dos alunos
    cout << "Digite os nomes e as médias finais de 7 alunos:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Nome do aluno " << i + 1 << ": ";
        cin >> nomes[i];
        cout << "Média de " << nomes[i] << ": ";
        cin >> medias[i];
    }

    // Variáveis para encontrar o aluno com maior média
    double maior_media = medias[0];
    string aluno_maior_media = nomes[0];

    // Cálculo para encontrar o aluno com maior média
    for (int i = 1; i < 7; i++) {
        if (medias[i] > maior_media) {
            maior_media = medias[i];
            aluno_maior_media = nomes[i];
        }
    }

    // Exibe o nome do aluno com a maior média
    cout << "\nAluno com a maior média: " << aluno_maior_media << " com média " << maior_media << endl;

    // Cálculo da nota necessária para exame final
    cout << "\nNotas necessárias para aprovação (média mínima 5):\n";
    for (int i = 0; i < 7; i++) {
        if (medias[i] < 7) { // Aluno não aprovado
            double nota_necessaria = 5 * 2 - medias[i]; // Cálculo da nota necessária
            cout << "Aluno: " << nomes[i] << ", precisa tirar: " << nota_necessaria << " no exame final.\n";
        }
    }

    return 0;
}
