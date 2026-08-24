#include <iostream>
#include <string>
#include <vector>
#include <limits>

/*  ### 3. Diário de Notas Acadêmicas
    Contexto: Um professor precisa calcular médias da turma.
    
    * Struct: Aluno (matricula, nota1, nota2).
    * Menu:
        1. Cadastrar aluno e suas duas notas.
        2. Listar alunos mostrando a matrícula e a média aritmética das duas notas.
        3. Sair.
*/

using namespace std;
typedef struct {
    string matricula;
    double nota1, nota2;
} Aluno;

int main() {
    vector<Aluno> turma;
    int opcao;
    double nota1, nota2;
    string matricula;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar aluno\n";
        cout << "2 - Listar alunos\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite a matricula do aluno: ";
                getline(cin, matricula);
                cout << "Digite a primeira nota: ";
                cin >> nota1;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
                cout << "Digite a segunda nota: ";
                cin >> nota2;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                turma.push_back({matricula, nota1, nota2});

                break;

            case 2:
                cout << "\nAlunos cadastrados:\n";
                for (const auto& aluno : turma) {
                    double media = (aluno.nota1 + aluno.nota2)/2;
                    cout << "Aluno [" << aluno.matricula << "] - Média: " << media << endl;
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