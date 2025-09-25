#include <iostream>
using namespace std;

void mostrarTabla(int number) {
    int i = 1; // inicio del contador
    while (i <= 10) {
        cout << number << " x " << i << " = " << number * i << endl;
        i++; // incremento
    }
}

int main() {
    int num;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> num;

    mostrarTabla(num);

    return 0;
}
