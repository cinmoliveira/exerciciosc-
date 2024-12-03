#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num, soma_pares = 0, soma_primos = 0;

    system("clear");    
    // 1) receber 10 números
    for (int i = 0; i < 10; i++) {
        cout << "Informe um valor: ";
        cin >> num;

        // 2) verificar se é par, se for somar
        if (num % 2 == 0) {
            soma_pares += num; // soma_pares = soma_pares + num
        }

        // 3) verificar se é primo, se for somar
        int d = 2;
        bool eh_primo = false;
        while (d <= num/2 and num % d != 0) {
            d++;
        }
        if (num % d != 0) {
            soma_primos += num;
        }
    }

    cout << "Soma dos pares: " << soma_pares << endl;
    cout << "Soma dos primos: " << soma_primos << endl;
    return 0;
}
