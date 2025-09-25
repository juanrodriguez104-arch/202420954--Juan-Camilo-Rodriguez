#include <iostream>
using namespace std;

int mayorDeTres(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
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
