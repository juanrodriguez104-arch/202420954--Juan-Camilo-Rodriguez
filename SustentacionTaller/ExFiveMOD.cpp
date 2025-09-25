#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return firstNumber;
    } else if (secondNumber > firstNumber) {
        return secondNumber;
    } else {
        cout << "Los dos numeros son iguales." << endl;
        return firstNumber; // o secondNumber, son iguales
    }
}

int main() {
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "El mayor es: " << mayor(a, b) << endl;

    return 0;
}
