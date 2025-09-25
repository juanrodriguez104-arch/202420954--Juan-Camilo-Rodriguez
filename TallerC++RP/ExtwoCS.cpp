#include <iostream>
using namespace std;

void clasificarNumero(int number) {
    if (number > 0) {
        cout << "Positivo" << endl;
    } else if (number < 0) {
        cout << "Negativo" << endl;
    } else {
        cout << "Cero" << endl;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    clasificarNumero(num);

    return 0;
}
