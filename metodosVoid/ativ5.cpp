//fazer um programa que tenha um método que receba um vetor
// de números inteiros, o tamanho desse vetor e retorne true
// se o vetor estiver ordenado ou 
//false se o vetor estiver desordenado.
#include <iostream>
#include <string>
using namespace std;
#define TAM 10;

bool estaOrdenado(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) { // Se i for maior que i+1 nao esta em ordem
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[TAM];

    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);

    if (estaOrdenado(vetor, TAM)) {
        cout << "O vetor está ordenado." << endl;
    } else {
        cout << "O vetor está desordenado." << endl;
    }

    return 1;
}