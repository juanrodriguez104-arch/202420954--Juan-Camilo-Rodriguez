#include <iostream>
using namespace std;

void showStaff() {
    string staff[4] = {"Carlos", "Elena", "Javier", "Sofía"};

    cout << "Lista del personal:" << endl;

    for (int i = 0; i < 4; i++) {
        cout << staff[i] << endl;
    }
}

int main() {
    showStaff(); 
    return 0;
}
