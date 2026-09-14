#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;
typedef struct {
    string nome;
} Nome;

int main() {
    vector<Nome> nomes;
    int numero;
    
        cout << "Quantidade de nomes: \n";
                cin >> numero;
                cin.ignore(); // Limpa o buffer de entrada
                for(int i = 0; i < numero; i++){
                    Nome pessoa;
                    cout << "Digite o nome[" << i+1 << "]:";
                    getline(cin, pessoa.nome);
                    nomes.push_back({pessoa});
                 }
                    for(const auto& pessoa : nomes) {
                        cout << pessoa.nome << "\n";
                    }


    return 1;
}
