// fazer um programa e dentro dele um método que receba o dia (string)
//, o mês (string) e o ano (string).
// O método deve escrever 'DATA VÁLIDA' ou 'DATA INVÁLIDA' para a situação das variáveis passadas.

#include <iostream>
#include <string>
using namespace std;

void validarData(string dia, string mes, string ano) {
    //string to int / stoi
    int diaI = stoi(dia);
    int mesI = stoi(mes);
    int anoI = stoi(ano);
    
        if (diaI < 1 || diaI > 31) {
        cout << "DATA INVÁLIDA: DIA INVÁLIDO" << endl;
    }
        else if (mesI < 1 || mesI > 12) {
        cout << "DATA INVÁLIDA: MÊS INVÁLIDO" << endl;
    }
        else if (anoI < 1 || anoI > 2100) {
        cout << "DATA INVÁLIDA: ANO INVÁLIDO" << endl;
    }


    else if ((mesI == 4 || mesI == 6 || mesI == 9 || mesI == 11) && diaI > 30) {
        cout << "DATA INVÁLIDA: DIA INVÁLIDO PARA O MÊS ESPECIFICADO" << endl;
    }

    else {
        cout << dia << "/" << mes << "/" << ano << " EH UMA DATA VÁLIDA" << endl;
    }
}

int main() {
    string dia, mes, ano;

    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mês: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;

    validarData(dia, mes, ano);

    return 1;
}