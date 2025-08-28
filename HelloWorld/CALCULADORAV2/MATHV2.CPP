#include <iostream>
using namespace std;

int main() {
    int num1, num2, resultado;
    char operacion;

    // Entrada de datos
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese la operacion (+, -, *, /, %): ";
    cin >> operacion;

    // Switch para decidir la operación
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;

        case '*':
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "El resultado de la division es: " << (float)num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir entre 0." << endl;
            }
            break;

        case '%':
            if (num2 != 0) {
                resultado = num1 % num2;
                cout << "El resultado del modulo es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre 0." << endl;
            }
            break;

        default:
            cout << "Operacion no valida. Use +, -, *, / o %." << endl;
    }

    return 0;
}
