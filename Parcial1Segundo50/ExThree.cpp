
#include <iostream>
using namespace std;

void showFinesByCity() {
    string plates[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "RTY987"};
    float fines[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string cities[6] = {"Tunja", "Bogota", "Tunja", "Medellin", "Cali", "Tunja"};

    string searchCity;
    cout << "Ingrese la ciudad a consultar: ";
    cin >> searchCity;

    float total = 0;
    bool found = false;

    cout << "Multas registradas en " << searchCity << ":" << endl;

    for (int i = 0; i < 6; i++) 
        {
            if (cities[i] == searchCity) 
                {
                    cout << "Placa: " << plates[i] << " - Valor: $" << fines[i] << endl;
                    total += fines[i];
                    found = true;
                }
        }

    if (found) 
        {
            cout << "Total de multas en " << searchCity << ": $" << total << endl;
        } else {
            cout << "No hay multas registradas en esa ciudad." << endl;
        }
}

int main() {
showFinesByCity();
return 0;
}
