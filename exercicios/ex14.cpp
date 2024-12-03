/*
17) Faça um programa que verifique a validade de uma senha fornecida pelo usuário.
A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.
*/
#include <iostream>

using namespace std;

int main()
{
    
int senha;

cout <<"Digite a senha: ";
cin >> senha;

if (senha == 4531){
    cout <<"Acesso permitido.";
} else {
    cout <<"Acesso negado, forneça a senha correta. ";
}
    return 0;
}