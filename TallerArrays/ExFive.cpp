#include <iostream>
using namespace std;

void showItems() {
    string items[3] = {"Arroz", "Huevos", "Café"};
    float costs[3] = {2800, 13500, 9800};

    cout << "Lista de artículos y sus precios:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << items[i] << " - $" << costs[i] << endl;
    }
}

int main() {
    showItems();
    return 0;
}
