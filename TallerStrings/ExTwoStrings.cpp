#include <iostream>
using namespace std;

string convertASCII(string palabra) {
    int i = 0;
    while (i < palabra.length()) {
        if (i % 2 == 0)
            palabra[i] = toupper(palabra[i]);
        else
            palabra[i] = tolower(palabra[i]);
        i++;
    }
    return palabra;
}

int main() {
    string texto;
    cout << "Texto: ";
    cin >> texto;
    cout << convertASCII(texto);
    return 0;
}
