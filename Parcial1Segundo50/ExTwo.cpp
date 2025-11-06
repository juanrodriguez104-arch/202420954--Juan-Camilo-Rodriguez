#include <iostream>
using namespace std;

void showCitiesByTemperature() {
    string cities[10] = {"Bogota", "Medellin", "Cali", "Cartagena", "Pereira",
    "Manizales", "Tunja", "Santa Marta", "Villavicencio", "Bucaramanga"};
    float temps[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    float minTemp, maxTemp;
    cout << "Ingrese la temperatura minima: ";
    cin >> minTemp;
    cout << "Ingrese la temperatura maxima: ";
    cin >> maxTemp;

    float sum = 0;
    int count = 0;

    cout << "Ciudades dentro del rango de tempetarura (" << minTemp << " - " << maxTemp << " °C):" << endl;

for (int i = 0; i < 10; i++) 
    {
        if (temps[i] >= minTemp && temps[i] <= maxTemp) 
            {
                cout << cities[i] << " - " << temps[i] << " °C" << endl;
                sum += temps[i];
                count++;
            }
    }

if (count > 0) 
    {
        float average = sum / count;
        cout << "Promedio de temperaturas dentro del rango: " << average << " °C" << endl;
    } 
    else 
    {
        cout << "No hay ciudades dentro del rango indicado." << endl;
    }
}

int main() {
showCitiesByTemperature();
return 0;
}
