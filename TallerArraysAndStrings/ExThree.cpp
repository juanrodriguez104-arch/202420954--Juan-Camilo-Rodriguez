#include <iostream>
using namespace std;

void showAverageAge() {
    int ages[6] = {18, 22, 19, 25, 30, 21};
    int total = 0;

    cout << "Lista de edades:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "Edad " << i + 1 << ": " << ages[i] << endl;
        total += ages[i];
    }

    float average = (float)total / 6;

    cout << "El promedio de edades es: " << average << endl;
}

int main() {
    showAverageAge(); 
    return 0;
}
