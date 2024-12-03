/*
5) Faça um programa que receba dois números e execute as operações listadas a seguir,
de acordo com a escolha do usuário.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num_1, num_2, media, diferenca, produto, divisao, operacao;

    cout << "Informe dois números: ";
    cin >> num_1 >> num_2;
    
    cout <<"Informe a operação matemática desejada \n"
            "1: Média entre os números digitados \n"
            "2: Diferença do maior pelo menor \n"
            "3: Produto entre os números digitados \n"
            "4: Divisão do primeiro pelo segundo \n";
            
    cin >> operacao;
    
    switch (operacao){
        case 1: 
            media = (num_1 + num_2)/2;
            cout << "A média é de: " << media << endl;
            break;
        case 2:
            diferenca = num_1 - num_2;
            cout << "A diferença é de: " << diferenca << endl;
            break;
        case 3:
            produto = num_1 * num_2;
            cout << "O produto é de: " << produto << endl;
            break;
        case 4:
            divisao = num_1 / num_2;
            cout << "A divisão é de: " << divisao << endl;
            break;
        default:
            cout << "ERROR!!! Operação digitada inválida." << endl;
            break;
    }

    return 0;
}