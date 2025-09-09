#include <iostream>

using namespace std;

int main() {
    int userNumber, numberPc; 
    cout << "ingrese el numero a adivinar: " << endl;
    cin >> numberPc;

    while (userNumber != numberPc) 
    { 
        cout << "ingresa tu numero:" << endl;
        cin >> userNumber;

        if (userNumber < numberPc); 
        {
            cout << "tu numero es menor al adivinar" << endl; 
        }
        if (userNumber > numberPc)
        {
            cout << "tu nunmero es mayor al adivinar" << endl; 
        }

    }
    cout << "felicitaciones, no eres pendejo" << endl; 

    return 0;
}