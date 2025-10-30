#include <iostream>
using namespace std;

void showMaximum() {
    int values[6] = {10, 25, 7, 30, 18, 12};
    int highest = values[0]; 

    
    for (int i = 1; i < 6; i++) {
        if (values[i] > highest) {
            highest = values[i];
        }
    }

    cout << "El número más alto es: " << highest << endl;
}

int main() {
    showMaximum(); 
    return 0;
}
