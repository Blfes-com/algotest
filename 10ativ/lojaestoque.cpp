#include <iostream>
#include <string>
#include <vector>
#include <limits>

/*  ### 2. Controle de Estoque de Mercado
    Contexto: Um minimercado quer controlar a quantidade de produtos.
    
    * Struct: Produto (Código, Quantidade, Preco).
    * Menu:
        1. Cadastrar produto.
        2. Exibir o valor total investido no estoque (soma de Quantidade * Preço de todos os itens).
        3. Sair.
*/

using namespace std;
typedef struct {
    string codigo;
    int quantidade;
    double preco;
} Produto;

int main() {
    vector<Produto> estoque;
    int opcao, quantidade;
    double preco, total;
    string codigo;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar produto\n";
        cout << "2 - Exibir valor total no estoque\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o codigo do produto: ";
                getline(cin, codigo);
                cout << "Digite as unidades do produto: ";
                cin >> quantidade;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
                cout << "Digite o preco do produto: ";
                cin >> preco;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                estoque.push_back({codigo, quantidade, preco});

                break;

            case 2:
                total = 0;
                for (const auto& produto : estoque) {
                    total += produto.quantidade * produto.preco;
                }
                cout << "\nValor total: R$ " << total << endl << "\n Quantidade de produtos: " << estoque.size() << endl;
                break;

            case 3:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }

    } while (opcao != 3);
    return 1;
}