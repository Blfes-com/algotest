/*    ### 5. Catálogo de Carros Usados (Filtro por Valor)
    Contexto: Uma concessionária quer ajudar clientes a encontrar carros por preço.
    
    * Struct: Carro (Código, Ano, Preço).
    * Menu:
        1. Cadastrar carro.
        2. Buscar por preço: O usuário digita um valor máximo, e o programa mostra todos os carros mais baratos que esse valor.
        3. Sair.*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;
typedef struct {
    string codigo, ano;
    double preco;
} Carro;

int main() {
    vector<Carro> catalogo;
    int opcao;
    double preco;
    string codigo, ano;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar carro\n";
        cout << "2 - Buscar por preço\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o código: ";
                getline(cin, codigo);
                cout << "Digite o ano: ";
                getline(cin, ano);
                cout << "Digite o preço: ";
                cin >> preco;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                catalogo.push_back({codigo, ano, preco});

                break;

            case 2:
             cout << "Digite o preço máximo: ";
                cin >> preco;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
                cout << "\nCarros abaixo de R$ " << preco << ":\n" << endl;
                for (const auto& carro : catalogo) {
                    if (carro.preco < preco) {
                        cout << "Carro [" << carro.codigo << "] - Ano: " << carro.ano << " - Preço: R$ " << carro.preco << endl;
                    }
                }
                cout << "\n" << endl;
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