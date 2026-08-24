/*    ### 8. Gestão de Consumo de Energia
    Contexto: Uma empresa de energia quer identificar residências com alto consumo.
    
    * Struct: Imóvel (Número da Casa, Consumo kWh).
    * Menu:
        1. Cadastrar imóvel.
        2. Calcular a média de consumo geral da rua.
        3. Listar imóveis que consomem acima da média calculada.
        4. Sair.
    */
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

typedef struct {
    string numero;
    double consumo;
} Imovel;

int main() {
    vector<Imovel> imoveis;
    int opcao;
    string numero;
    double consumo, media = 0;
    char * pEnd;
    
    do {
        cout << "\nMenu de opcoes:\n";
        cout << "1 - Cadastrar imovel\n";
        cout << "2 - Calcular media de consumo\n";
        cout << "3 - Listar imoveis acima da media\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cout << "\nDigite o numero da casa: ";
                getline(cin, numero);
                cout << "\nDigite o consumo em kWh: ";
                cin >> consumo;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada

                imoveis.push_back({numero, consumo});
                break;
            case 2:
            if (imoveis.size() > 0) {
                cout << "\nCalculando media de consumo...\n";
                double soma = 0;
                for (const auto& imovel : imoveis) {
                    soma += imovel.consumo; 
                }
                media = (soma / imoveis.size()); // media
                cout << "Media de consumo: " << media << " kWh\n";
            } else {
                cout << "\n Nenhum imovel cadastrado!\n";
            }
                break;
            case 3:
            if (media != 0) {
                cout << "\nImoveis acima da media (" << media << " kWh):\n";
                for (const auto& imovel : imoveis) {
                    if (imovel.consumo > media) {
                        cout << "Numero da Casa: " << imovel.numero << ", Consumo: " << imovel.consumo << " kWh\n";
                    }
                }}
            else {
                cout << "\nMedia ainda nao declarada.\n";
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




