/*
3) Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá
preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
■ se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;
■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;
■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;
■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.
*/

#include <iostream>

using namespace std;

int main() {
    const int MAX_PRODUTOS = 10;  // Número máximo de produtos
    int codigos[MAX_PRODUTOS];     // Vetor para os códigos dos produtos
    int estoques[MAX_PRODUTOS];    // Vetor para as quantidades em estoque

    // Preenchendo os vetores com códigos de produtos e seus respectivos estoques
    cout << "Preencha o estoque de 10 produtos:\n";
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        cout << "Código do produto " << i + 1 << ": ";
        cin >> codigos[i];
        cout << "Quantidade em estoque do produto " << codigos[i] << ": ";
        cin >> estoques[i];
    }

    // Processando pedidos dos clientes
    while (true) {
        int codigoCliente, codigoProduto, quantidade;

        cout << "\nDigite o código do cliente (0 para sair): ";
        cin >> codigoCliente;
        
        // Verifica se o cliente deseja sair
        if (codigoCliente == 0) {
            break;
        }

        cout << "Digite o código do produto que deseja comprar: ";
        cin >> codigoProduto;
        cout << "Digite a quantidade desejada: ";
        cin >> quantidade;

        // Verifica se o código do produto existe
        bool produtoEncontrado = false;
        bool estoqueSuficiente = false;

        for (int i = 0; i < MAX_PRODUTOS; i++) {
            if (codigos[i] == codigoProduto) {
                produtoEncontrado = true;
                if (estoques[i] >= quantidade) {
                    estoqueSuficiente = true;
                    estoques[i] -= quantidade;  // Atualiza o estoque
                }
                break;
            }
        }

        // Mensagens de resposta
        if (!produtoEncontrado) {
            cout << "Código inexistente.\n";
        } else if (!estoqueSuficiente) {
            cout << "Não temos estoque suficiente dessa mercadoria.\n";
        } else {
            cout << "Pedido atendido. Obrigado e volte sempre.\n";
        }
    }

    // Exibindo o estoque atualizado
    cout << "\nEstoque atualizado:\n";
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        cout << "Código do produto: " << codigos[i] << ", Estoque: " << estoques[i] << endl;
    }

    return 0;
}
