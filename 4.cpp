#include <iostream>

using namespace std;
int main (){

    int tabuada, i, calculo, contador_tabuada=0;

    cout <<"Escolha um número: ";
    cin >> tabuada;

    for (i=0;i<=10;i++){

        calculo = tabuada * contador_tabuada;
        cout << tabuada << " * " << contador_tabuada << " = " << calculo << endl;

        contador_tabuada +=1;
    }


    return 0;
}