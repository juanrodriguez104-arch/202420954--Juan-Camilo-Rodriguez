#include <iostream>
using namespace std;

// Función que verifica si se requiere mantenimiento
bool requiresMaintenance(int sheets, int interval) {
    if (sheets % interval == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int hojas, intervalo;
    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> hojas;
    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> intervalo;

    if (requiresMaintenance(hojas, intervalo)) {
        cout << "La máquina requiere mantenimiento." << endl;
    } else {
        cout << "La máquina no requiere mantenimiento." << endl;
    }

    return 0;
}
