/*
12) Faça um programa que receba o salC!rio bruto de um funcionC!rio e, usando a tabela a seguir,
calcule e mostre o valor a receber. Sabe-se que este C) composto pelo salario bruto acrescido
de gratificacao e descontado o imposto de 7% sobre o salario.
*/
#include <iostream>

using namespace std;

int main()
{
	// acrescentando as variáveis

	float sal_bruto, sal_1, sal_2, sal_3, sal_4;

	cout << "Digite o salário bruto do funcionário: ";
	cin >> sal_bruto;

	if (sal_bruto <= 350) {
	    sal_1 = sal_bruto + 100 - ((sal_bruto*7)/100);
	    cout << "Seu salário líquido é: " <<sal_1 << endl;
	} else if (sal_bruto > 350 && sal_bruto < 600) {
	    sal_2 = sal_bruto + 75 - ((sal_bruto*7)/100);
	    cout << "Seu salário líquido é: " <<sal_2 << endl;
	} else if (sal_bruto >= 600 && sal_bruto <= 900) {
	    sal_3 = sal_bruto + 50 - ((sal_bruto*7)/100);
	    cout << "Seu salário líquido é: " <<sal_3 << endl;
	} else {
	    sal_4 = sal_bruto + 35 - ((sal_bruto*7)/100);
	    cout << "Seu salário líquido é: " <<sal_4 << endl;
	}
		return 0;
}