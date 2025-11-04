#include <iostream>
using namespace std;

void showPrices() {
    float prices[5] = {2500, 3800, 1900, 4200, 3100};
    float total = 0;
    float highest = prices[0];
    float lowest = prices[0];

    cout << "Lista de precios:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Precio " << i + 1 << ": $" << prices[i] << endl;
        total += prices[i];

        if (prices[i] > highest) {
            highest = prices[i];
        }
        if (prices[i] < lowest) {
            lowest = prices[i];
        }
    }

    cout << "Suma total de precios: $" << total << endl;
    cout << "Precio mas alto: $" << highest << endl;
    cout << "Precio mas bajo: $" << lowest << endl;
}

int main() {
    showPrices(); 
    return 0;
}
