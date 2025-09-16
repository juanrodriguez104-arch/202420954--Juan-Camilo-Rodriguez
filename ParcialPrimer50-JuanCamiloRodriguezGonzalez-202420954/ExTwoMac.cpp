#include <iostream>
using namespace std;

// Función que imprime los turnos trabajados
void showShifts(int start, int end) {
    if (start > end) {
        cout << "Error: el turno inicial no puede ser mayor que el final." << endl;
        return;
    }

    cout << "La máquina trabajó en los turnos: ";
    int turno = start;
    while (turno <= end) {
        cout << turno << " ";
        turno++;
    }
    cout << endl;
}

int main() {
    int inicio, fin;
    cout << "Ingrese el turno inicial: ";
    cin >> inicio;
    cout << "Ingrese el turno final: ";
    cin >> fin;

    showShifts(inicio, fin);

    return 0;
}
