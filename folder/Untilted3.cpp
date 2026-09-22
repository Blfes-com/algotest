#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "util.h"
// Versão 2


using namespace std;
int main() {
    
//rotina que le o arquivostopwords e converte pra maiusculo, depois colocar no vetor
    ifstream arquivoStopWords;
    vector<string> listaStopWords;
    arquivoStopWords.open("stopWords.txt");

    if (!arquivoStopWords){
        cout << "Arquivo de stopWords.txt não encontrado!" << endl;
        exit(0);
    }
    string line;
    while (!arquivoStopWords.eof()){
        getline(arquivoStopWords, line);
        line = paraMaiusculo(line);
        listaStopWords.push_back(line);
    }
    arquivoStopWords.close();

//rotina que exiba os stop words inseridos na lista
    for (int i = 0; i < listaStopWords.size(); i++){
        cout << listaStopWords[i] << ",";
    }
cout << "\n \n \n \n \n" << endl;

// abrir e comparar texto original
    ifstream arquivoTextoOriginal;

    string nomearquivo;
    cout << "Digite caminho e nome do arquivo: ";
    cin >>  nomearquivo;
    arquivoTextoOriginal.open(nomearquivo);
    if (!arquivoTextoOriginal){
        cout << "Arquivo do texto não encontrado!" << endl;
        exit(0);
    }
    ofstream arquivoTextoSemStopwords;
    arquivoTextoSemStopwords.open("arquivoTextoSemStopwords.txt");
// ciclo de comparação
    bool encontrou;
    string palavra;
    while (arquivoTextoOriginal >> palavra){
        palavra = paraMaiusculo(palavra);
        encontrou = false;
        for (int i = 0; i < listaStopWords.size(); i++){
            if (palavra == listaStopWords[i]){
                encontrou = true;
                break;
            }
        }
        if (!encontrou) {
            arquivoTextoSemStopwords << palavra << " ";
        }
    }
    arquivoTextoOriginal.close();
    arquivoTextoSemStopwords.close();
    return 1;
}