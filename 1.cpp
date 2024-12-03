#include <iostream>
#include <algorithm> // Para as funções sort e reverse
using namespace std;

int main() {
    const int grupos = 5;
    const int valoresPorGrupo = 4;
    int valores[grupos][valoresPorGrupo];

    // Leitura dos valores
    for (int i = 0; i < grupos; i++) {
        cout << "Digite os valores do grupo " << i + 1 << " (A, B, C, D): " << endl;
        for (int j = 0; j < valoresPorGrupo; j++) {
            cin >> valores[i][j];
        }
    }

    // Exibição dos valores na ordem lida
    cout << "\nValores na ordem lida:" << endl;
    for (int i = 0; i < grupos; i++) {
        cout << "Grupo " << i + 1 << ": ";
        for (int j = 0; j < valoresPorGrupo; j++) {
            cout << valores[i][j] << " ";
        }
        cout << endl;
    }

    // Ordenando e exibindo em ordem crescente
    cout << "\nValores em ordem crescente:" << endl;
    for (int i = 0; i < grupos; i++) {
        sort(valores[i], valores[i] + valoresPorGrupo); // Ordena o grupo
        cout << "Grupo " << i + 1 << ": ";
        for (int j = 0; j < valoresPorGrupo; j++) {
            cout << valores[i][j] << " ";
        }
        cout << endl;
    }

    // Ordenando e exibindo em ordem decrescente
    cout << "\nValores em ordem decrescente:" << endl;
    for (int i = 0; i < grupos; i++) {
        reverse(valores[i], valores[i] + valoresPorGrupo); // Inverte a ordem do grupo
        cout << "Grupo " << i + 1 << ": ";
        for (int j = 0; j < valoresPorGrupo; j++) {
            cout << valores[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
