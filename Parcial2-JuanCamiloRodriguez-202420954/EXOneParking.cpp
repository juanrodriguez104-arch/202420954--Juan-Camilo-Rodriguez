#include <iostream>
#include <string>
using namespace std;

// Función que calcula el total a pagar por hora 
int calculateTotal(int hours, int rate) {
    return hours * rate;
}

// Función que da el valor total de la tarifa 
void printInvoice(string plate, int hours, int rate) {
    int total = calculateTotal(hours, rate);
    cout << "Vehiculo " << plate 
         << ", horas: " << hours 
         << ", tarifa: " << rate 
         << ", total: " << total 
         << endl;
}

int main() {
    string plate;
    int hours, rate;

    cout << "Ingrese la placa del vehiculo: ";
    cin >> plate;
    cout << "Ingrese las horas de parqueo: ";
    cin >> hours;
    cout << "Ingrese la tarifa por hora: ";
    cin >> rate;

    printInvoice(plate, hours, rate);

    return 0;
}
