//fazer um programa que tenha um método que receba um nome
// completo e retorne o primeiro nome desse nome completo.

#include <iostream>
#include <string>
using namespace std;

string primeiroNome (string nome){
    for (int i = 0; i < nome.length(); i++) {
        if (nome[i] == ' ') {
            return nome.substr(0, i);
            //firstWord = input.substr(0, input.find(" "));
        }
    }
    return nome;
}

int main() {
    string nomeCompleto;

    cout << "Digite seu nome: ";
    getline(cin, nomeCompleto);

    string primeiro = primeiroNome(nomeCompleto);
    cout << "O seu nome eh: " << primeiro << endl;

    return 1;
}