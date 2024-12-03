/*
25) Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número
de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio
é obtido pela consulta à tabela que se segue, na qual:
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int horas_extras, horas_faltas, H;
    float premio;

    cout << "Digite o número de horas extras: ";
    cin >> horas_extras;
    cout << "Digite o número de horas faltas: ";
    cin >> horas_faltas;

    H = horas_extras - (2.0/3.0) * horas_faltas;

    if (H >= 2400) {
        premio = 500;
    } else if (H >= 1800) {
        premio = 400;
    } else if (H >= 1200) {
        premio = 300;
    } else if (H >= 600) {
        premio = 200;
    } else {
        premio = 100;
    }

    cout << "O prêmio é de: " << premio << endl;

    return 0;
}