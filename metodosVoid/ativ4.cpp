//fazer um programa que tenha um método
// que receba uma frase e retorne essa frase
// totalmente em maiúscula.
// USAR toupper

#include <iostream>
#include <string>

using namespace std;
string paraMaiuscula(string frase) {
    for (int i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    string fraseMaiuscula = paraMaiuscula(frase);
    cout << "A frase em maiúscula é: " << fraseMaiuscula << endl;

    return 1;
}