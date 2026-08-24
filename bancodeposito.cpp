/*    ### 7. Conta Bancária Simplificada (Alteração de Dados)
    Contexto: Um banco precisa atualizar saldos.
    
    * Struct: Conta (Número da Conta, Saldo).
    * Menu:
        1. Cadastrar conta (saldo inicial).
        2. Depositar: O usuário escolhe uma posição do vetor (índice) e soma um valor ao saldo existente.
        3. Mostrar todas as contas.
        4. Sair.*/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

typedef struct {
    string numero;
    double saldo;
} Conta;

int main() {
    vector<Conta> banco;
    int opcao;
    string numero, acesso;
    double saldo, deposito;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar conta\n";
        cout << "2 - Depositar\n";
        cout << "3 - Mostrar contas\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "\nDigite o numero da conta: ";
                getline(cin, numero);
                cout << "\nDigite o saldo inicial: ";
                cin >> saldo;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                banco.push_back({numero, saldo});
                break;
            case 2:
                cout << "\nDigite o numero da conta para depositar: ";
                cin >> acesso;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
                for (int i = 0; i < banco.size(); i++) {
                    if (banco[i].numero == acesso) {
                        cout << "\nDigite o valor a ser depositado: ";
                        cin >> deposito;
                        banco[i].saldo += deposito;
                        cout << "\nDeposito realizado. Saldo: " << banco[i].saldo << endl;
                    }
                }
                cout << "\n" << endl;
                break;

            case 3:
                cout << "Contas:\n";
                for (int i = 0; i < banco.size(); i++) {
                    cout << "Numero da Conta: " << banco[i].numero << ", Saldo: " << banco[i].saldo << endl;
                }
                break;
            case 4:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }

    } while (opcao != 4);
    return 1;
}






