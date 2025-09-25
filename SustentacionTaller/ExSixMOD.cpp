#include <iostream>
using namespace std;

int mayorDeTres(int a, int b, int c) {
    // condición exacta con AND
    if (a > b && a > c) { 
        return a;
    } else if (b > a && b > c) {
        return b;
    } else if (c > a && c > b) {
        return c;
    } else {
        cout << "Hay al menos dos numeros iguales." << endl;
        if (a == b && a >= c) return a;
        if (a == c && a >= b) return a;
        if (b == c && b >= a) return b;
    }
    return a; // retorno por seguridad
}

int main() {
    int x, y, z;
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;
    cout << "Ingrese el tercer numero: ";
    cin >> z;

    cout << "El mayor de los tres es: " << mayorDeTres(x, y, z) << endl;

    return 0;
}
