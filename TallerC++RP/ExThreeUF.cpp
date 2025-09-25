#include <iostream>
using namespace std;

void mostrarTabla(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> num;

    mostrarTabla(num);

    return 0;
}
