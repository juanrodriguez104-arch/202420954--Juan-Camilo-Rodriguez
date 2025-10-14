#include <iostream>
using namespace std;

int contarPalabras(int n) {
    string palabra;
    int c = 0;
    for (;;) {
        cin >> palabra;
        if (palabra == "fin") break;
        if (palabra.size() > n) c++;
    }
    return c;
}

int main() {
    int n;
    cout << "Numero: "; cin >> n;
    cout << "Resultado: " << contarPalabras(n);
    return 0;
}
