    // um metodo que receba um email e retorne o primeiro nome (nome.sobrenome@gmail)
    #include <iostream>
    #include <string>
    using namespace std;

    void checarEmail(string email) {
        //string to int / stoi
        string nome;
        for (int i = 0; i < email.length(); i++) {
            if (email[i] == '.') {
                break;
            }
            nome.push_back(email[i]);
        }
            cout << nome;
        }
    int main() {
        string email;

        cout << "Digite o email (nome.sobrenome@ufn.edu.br): ";
        cin >> email;
        checarEmail(email);
    }
