#include <iostream>   // Librería para entrada y salida de datos
using namespace std;

int main() {
    int numero1, numero2, suma;

    // Pedir datos al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Operación
    suma = numero1 + numero2;

    // Mostrar resultado
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

    return 0;
}
