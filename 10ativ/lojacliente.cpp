#include <iostream>
#include <string>
#include <vector>
#include <limits>
/*
    ### 1. Cadastro de Clientes Simplificado
    Contexto: Uma loja precisa registrar seus clientes.
    
    * Struct: Cliente (Código, Idade, Telefone).
    * Menu:
        1. Cadastrar cliente (inserir no vetor).
        2. Listar todos os clientes cadastrados.
        3. Sair.*/

using namespace std;
typedef struct {
    string codigo;
    int idade; ;
    string telefone;
} Cliente;

int main() {
    vector<Cliente> cadastros;
    int opcao, tp1, tp2, idade;
    string codigo, telefone;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar cliente\n";
        cout << "2 - Listar clientes\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o codigo do cliente: ";
                getline(cin, codigo);
                cout << "Digite a idade do cliente: ";
                cin >> idade;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
                cout << "Digite o telefone do cliente: ";
                getline(cin, telefone);

                cadastros.push_back({codigo, idade, telefone});

                break;

            case 2:
                cout << "\nClientes cadastrados:\n";
                for (int i = 0; i < cadastros.size(); i++) {
                    cout << "Cliente "<< i+1 << " - Código: " << cadastros[i].codigo << ", Idade: " << cadastros[i].idade << ", Telefone: " << cadastros[i].telefone << endl;
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