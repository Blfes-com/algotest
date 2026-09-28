//fazer um programa que tenha um método que receba uma 
//frase e retorne a quantidade de vogais presentes na frase.

#include <iostream>
#include <string>

using namespace std;

/*void paraMaiusculoVetorChar(char frase[]) { //para C
    int i;
    for (i = 0; i < strlen(frase); i++) {
        frase[i] = toupper(frase[i]); 
    }
}*/

int contarVogais(string frase) {
    int contador = 0;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            contador++; // nao conta acentos
        }
    }
    return contador;
}

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    int quantidadeVogais = contarVogais(frase);
    cout << "A quantidade de vogais na frase é: " << quantidadeVogais << endl;

    return 1;
}