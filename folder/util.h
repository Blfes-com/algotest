#include <string>
#include <cctype>

using namespace std;

string paraMaiusculo(string frase) {
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]);
    }

    return frase;
}
