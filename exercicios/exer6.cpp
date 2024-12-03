/*
6) Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.
*/

#include <iostream>

using namespace std;

double calcula_peso_ideal(double altura, string sexo){
    double peso_ideal; 
    if (sexo == "M" || sexo == "m"){
        peso_ideal = 72.7 * altura - 58;
    } else if (sexo == "F" || sexo == "f"){
        peso_ideal = 62.1 * altura - 44.7;
    } else {
        return -1;
    }
    return peso_ideal;
}

int main(){
    string sexo;
    double altura, resp;

    cout <<"Digite sua altura: ";
    cin >> altura;

    cout <<" Digite seu sexo: \n"
            "F - Feminino, M - Masculino \n";
    cin >> sexo;

    resp = calcula_peso_ideal(altura, sexo);

    cout << "O peso ideal é de: " << resp << endl;
}