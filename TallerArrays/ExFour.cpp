#include <iostream>
using namespace std;

void countEvenNumbers() {
    int numbers[8] = {3, 12, 9, 18, 22, 5, 14, 7};
    int counter = 0;

   
    for (int i = 0; i < 8; i++) {
        if (numbers[i] % 2 == 0) {
            counter++;
        }
    }

    cout << "Cantidad de números pares: " << counter << endl;
}

int main() {
    countEvenNumbers(); 
    return 0;
}
