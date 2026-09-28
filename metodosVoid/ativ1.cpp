//fazer um programa e dentro dele um método que receba uma palavra (do tipo string) 
//e uma letra (do tipo char).
// O método deve contar quantas vezes a letra aparece na palavra e exibir essa quantidade;

#include <iostream>
#include <string>
using namespace std;

int contarLetra(string palavra, char letra) {
    int contador = 0;
    for (int i = 0; i < palavra.length(); i++) {
        if (palavra[i] == letra) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string palavra;
    char letra;

    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "Digite uma letra: ";
    cin >> letra;

    int quantidade = contarLetra(palavra, letra);
    cout << "A letra '" << letra << "' aparece " << quantidade << " vezes na palavra '" << palavra << endl;

    return 1;
}