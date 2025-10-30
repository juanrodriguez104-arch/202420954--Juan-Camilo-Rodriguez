#include <iostream>
using namespace std;


void showAverage() {
    float scores[5] = {4.5, 3.8, 4.0, 2.9, 3.7};
    float total = 0;

    
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }

    float average = total / 5;

    cout << "El promedio de notas es: " << average << endl;
}

int main() {
    showAverage(); 
    return 0;
}
