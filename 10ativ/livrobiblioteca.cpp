/*  ### 4. Gerenciador de Biblioteca
    Contexto: Uma biblioteca comunitária quer catalogar seus livros.
    
    * Struct: Livro (Código, Ano de Publicação, Quantidade Páginas).
    * Menu:
        1. Cadastrar livro.
        2. Filtrar livros: Exibir apenas os livros publicados após o ano 2020.
        3. Sair.
    */

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;
typedef struct {
    string codigo, anoPublicacao;
    int paginas;
} Livro;

int main() {
    vector<Livro> biblioteca;
    int opcao, paginas;
    string codigo, anoPublicacao, filtro;
    char * pEnd;
    
    do {
        cout << "Menu de opcoes:\n";
        cout << "1 - Cadastrar livro\n";
        cout << "2 - Filtrar livros\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "Digite o código do livro: ";
                getline(cin, codigo);
                cout << "Digite o ano de publicação: ";
                getline(cin, anoPublicacao);
                cout << "Digite a quantidade de páginas: ";
                cin >> paginas;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                biblioteca.push_back({codigo, anoPublicacao, paginas});

                break;

            case 2:
             cout << "Digite o ano minimo de publicacao: ";
                getline(cin, filtro);
                cout << "\nLivros publicados após :" << filtro << "\n" << endl;
                for (const auto& livro : biblioteca) {
                    if (livro.anoPublicacao > filtro) {
                        cout << "Livro [" << livro.codigo << "] - Ano: " << livro.anoPublicacao << " - Páginas: " << livro.paginas << endl;
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