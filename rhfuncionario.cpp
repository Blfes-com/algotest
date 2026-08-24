/*    ### 10. Sistema de RH (Filtro Condicional Duplo)
    Contexto: O departamento de recursos humanos quer analisar a folha de pagamento.
    
    * Struct: Funcionario (Código, Idade, Salário).
    * Menu:
        1. Cadastrar funcionário.
        2. Contar e exibir quantos funcionários têm mais de 40 anos e ganham mais de R$ 5.000,00.
        3. Sair.*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>

// lembrei disso aqui agora
#define ANOS 40
#define MINIMO 5000.00

using namespace std;

typedef struct {
    string codigo;
    int idade;
    double salario;
} Funcionario;

int main() {
    vector<Funcionario> rh;
    int opcao, idade;
    double salario;
    string codigo;
    long int li1, li2, li3, li4;
    char * pEnd;
    
    do {
        cout << "\nMenu de opcoes:\n";
        cout << "1 - Adicionar funcionario\n";
        cout << "2 - Contar funcionarios têm mais de 40 anos e ganham mais de R$ 5.000,00.\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o código do funcionário: ";
                getline(cin, codigo);
                cout << "Digite a idade do funcionário: ";
                cin >> idade;
                cout << "Digite o salário do funcionário: ";
                cin >> salario;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
                rh.push_back({codigo, idade, salario});

                break;
            case 2:{
                int count = 0;
                cout << "Funcionarios que encaixam: " << endl;
                for (const auto& funcionario : rh) {
                    if (funcionario.idade > ANOS && funcionario.salario > MINIMO) { // o define muda aqui
                        cout << "Codigo: " << funcionario.codigo << ", Idade: " << funcionario.idade << ", Salario: " << funcionario.salario << endl;
                        count++;
                    }
                }
                cout << "Total de funcionarios que encaixam: " << count << "\n" << endl;
                break;}
            case 3:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                break;
        }
    } while (opcao != 3);
    return 1;
}