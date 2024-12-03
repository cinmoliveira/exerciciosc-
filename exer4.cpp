/*
4) Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3.
*/

#include <iostream>
#include <cmath>

using namespace std;

float raio_esfera(float raio){
    float volume;
    
    volume = (4.0 /3.0) * M_PI * pow(raio, 3); // M_PI: representa o valor de pi.
    return volume;
}

 int main(){
     float raio, resultado;
     
     cout <<"Insira o raio: ";
     cin >> raio;
     
     resultado = raio_esfera(raio);
     
     cout <<"O volume de uma esfera com raio " << raio << " é de: "<< resultado << endl;
     
     return 0;
 }