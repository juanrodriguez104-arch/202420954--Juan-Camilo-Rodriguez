#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return firstNumber;
    } else {
        return secondNumber;
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
