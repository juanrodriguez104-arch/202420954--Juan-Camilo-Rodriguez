#include <iostream>
using namespace std;


void showAdults() {
    string names[6] = {"Ana", "Luis", "María", "Carlos", "Elena", "Javier"};
    int ages[6] = {17, 20, 15, 22, 18, 16};

    cout << "Lista de personas mayores de edad:" << endl;

    for (int i = 0; i < 6; i++) {
        if (ages[i] >= 18) {
            cout << names[i] << " - Edad: " << ages[i] << endl;
        }
    }
}

int main() {
    showAdults(); 
    return 0;
}
