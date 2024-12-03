/*
Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:
■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo);
e
■ calcule e mostre a porcentagem de audiência de cada canal.
Para encerrar a entrada de dados, digite o número do canal ZERO.
*/

#include <iostream>

using namespace std;
int main (){
    //Declarando as variáveis:
    int i =0, numero_canal, num_pessoas_assistindo, total_pessoas_assistindo = 0, cont_canal_4 = 0,cont_canal_5 = 0,cont_canal_7 = 0,cont_canal_12 = 0;
    float calculo4, calculo7, calculo5, calculo12;

    do {
        //Recebendo os canais e número de pessoas que assistem:
        cout <<"Número do canal (4 , 5, 7 ou 12): ";
        cin >> numero_canal;

        cout<<"Número de pessoas assistindo: ";
        cin >> num_pessoas_assistindo;

        //Verificador para o total de pessoas assistindo:
        total_pessoas_assistindo += num_pessoas_assistindo;

        //Contador para audiência de cada canal:
        switch (numero_canal){
            case 4:
                cont_canal_4 +=num_pessoas_assistindo;
                break;
            case 5:
                cont_canal_5 +=num_pessoas_assistindo;
                break;
            case 7:
                cont_canal_7 +=num_pessoas_assistindo;
                break;
            case 12:
                cont_canal_12 +=num_pessoas_assistindo;
                break;
        }

    } while (numero_canal != 0);

        //Cálculo da porcentagem da audiência de cada canal:
        calculo4 = cont_canal_4*100/total_pessoas_assistindo;
        calculo5 = cont_canal_5*100/total_pessoas_assistindo;
        calculo7 = cont_canal_7*100/total_pessoas_assistindo;
        calculo12 = cont_canal_12*100/total_pessoas_assistindo;

        //Imprimindo na tela:
        cout <<"A porcentagem da audiência do canal 4 é de: "<<calculo4<<"%"<<endl;
        cout <<"A porcentagem da audiência do canal 5 é de: "<<calculo5<<"%"<<endl;
        cout <<"A porcentagem da audiência do canal 7 é de: "<<calculo7<<"%"<<endl;
        cout <<"A porcentagem da audiência do canal 12 é de: "<<calculo12<<"%"<<endl;

    return 0;
}
