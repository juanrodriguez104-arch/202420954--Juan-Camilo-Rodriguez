#include <iostream>
using namespace std;

// Función que imprime los paquetes revisados
void checkPackages(int n) {
    cout << "Paquetes revisados: ";
    if (n % 2 == 0) { // Si n es par
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
    } else { // Si n es impar
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de paquetes: ";
    cin >> n;

    checkPackages(n);

    return 0;
}
