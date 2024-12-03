/*
2) Faça um programa que receba duas notas, calcule e mostre a média aritmética e a
mensagem que se encontra
na tabela a seguir:
*/
#include <iostream>

using namespace std;

int main() {
	//declarando as variaveis
	float nota_1, nota_2, media_aritmetica;

	cout << "Insira a primeira nota: ";
	cin >> nota_1;

	cout << "Insira a segunda nota: : ";
	cin >> nota_2;

	media_aritmetica = (nota_1 + nota_2)/2;

	if (media_aritmetica < 3) {
		cout << "Reprovado com nota: "<< media_aritmetica << endl;
	} else if (media_aritmetica < 7) {
		cout << "Exame com nota: "<< media_aritmetica << endl;
	} else {
		cout << "Aprovado com nota: "<< media_aritmetica << endl;
	}
	
	return 0;
}