/*    ### 9. Controle de Pontuação de Jogadores
    Contexto: Um campeonato de eSports precisa monitorar o placar.
    
    * Struct: Jogador (ID do Jogador, Pontos).
    * Menu:
        1. Cadastrar jogador.
        2. Buscar jogador por ID: O usuário digita o ID, o programa varre o vetor e mostra os pontos dele (ou diz que não foi encontrado).
        3. Sair.*/
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

typedef struct {
    string id;
    int pontos;
    string horaEntrada;
} Jogador;

int main() {
    vector<Jogador> campeonato;
    int opcao, pontos;
    string id;
    long int li1, li2, li3, li4;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Adicionar jogador\n";
        cout << "2 - Buscar jogador\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o ID do jogador: ";
                getline(cin, id);
                cout << "Digite os pontos do jogador: ";
                cin >> pontos;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                campeonato.push_back({id, pontos});

                break;
            case 2:
                cout << "\nDigite o ID do jogador: ";
                getline(cin, id);
                for (const auto& jogador : campeonato) {
                    if (jogador.id == id) {
                        cout << "ID: " << jogador.id << ", Pontos: " << jogador.pontos << endl;
                        break;
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








