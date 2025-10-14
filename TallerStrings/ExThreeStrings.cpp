#include <iostream>
using namespace std;

int commonLetter(string One, string Two) {
    int total = 0;
    for (int i = 0; i < One.size(); i++)
        for (int j = 0; j < Two.size(); j++)
            if (tolower(One[i]) == tolower(Two[j])) {
                total++;
                break;
            }
    return total;
}

int main() {
    string uno, dos;
    cout << "Palabra 1: "; cin >> uno;
    cout << "Palabra 2: "; cin >> dos;
    cout << "Comunes: " << commonLetter(uno, dos);
    return 0;
}