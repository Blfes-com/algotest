/*   ### 6. Relatório de Altura e Peso (Maior e Menor)
    Contexto: Uma academia está avaliando o perfil físico dos alunos.
    
    * Struct: Perfil (Código, Peso, Altura).
    * Menu:
        1. Cadastrar aluno.
        2. Exibir o aluno mais alto cadastrado até o momento (busca de maior valor).
        3. Sair.*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;
typedef struct {
    string codigo;
    double peso;
    int altura;
} Perfil;

int main() {
    vector<Perfil> academia;
    int opcao, altura;
    double peso;
    string codigo;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar aluno\n";
        cout << "2 - Exibir aluno mais alto\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o código: ";
                getline(cin, codigo);
                cout << "Digite o peso: ";
                cin >> peso;
                cout << "Digite a altura (cm): ";
                cin >> altura;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                academia.push_back({codigo, peso, altura});

                break;

            case 2:
                if (academia.empty()) {
                    cout << "Nenhum cadastro\n";
                } else {
                    auto max_aluno = academia[0];
                    for (const auto& aluno : academia) {
                        if (aluno.altura > max_aluno.altura) {
                            max_aluno = aluno;
                        }
                    }
                    cout << "\nAluno mais alto:\n";
                    cout << "Código: " << max_aluno.codigo << " - Peso: " << max_aluno.peso << " - Altura: " << max_aluno.altura << "cm" << endl;
                }
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