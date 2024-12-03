/*
5) Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.
*/

#include <iostream>
using namespace std;
int main(){

    //declarando as variáveis:
    int logica[15], programacao[10], count_comuns = 0, matriculas_comuns[10];

    //pedindo os valores de matrícula de logica com laço:
    for(int i =0;i<15;i++){
        cout <<"Digite as matrículas dos alunos que frequentam Lógica: ";
        cin >> logica[i];
    }
    cout<<endl;

    //pedindo os valores de matrícula de programacao com laço:
    for(int i =0;i<10;i++){
        cout <<"Digite as matrículas dos alunos que frequentam Linguagem de Programação: ";
        cin >> programacao[i];
    }

    // Checando as presentes em  ambos os vetores e armazenando em vetor matrículas comuns com 10 posições que são o máximo:
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            if (logica[i] == programacao[j]) {
                matriculas_comuns[count_comuns] = logica[i];
                count_comuns++;
            }
        }
    }

    // Exibe o resultado
    if (count_comuns == 0) {
        cout << "\nNão há alunos cursando simultaneamente as disciplinas de Lógica e Linguagem de Programação." << std::endl;
    } else {
        cout << "\nAlunos que cursam simultaneamente Lógica e Linguagem de Programação: " << std::endl;
        for (int i = 0; i < count_comuns; i++) {
            cout << "Matrícula: " << matriculas_comuns[i] << std::endl;
        }
    }

    return 0;
}