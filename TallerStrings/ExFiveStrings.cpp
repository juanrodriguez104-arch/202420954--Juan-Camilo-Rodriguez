#include <iostream>
using namespace std;

bool verify(string text) {
    int i = 0, j = text.size() - 1;
    while (i < j) {
        if (tolower(text[i]) != tolower(text[j]))
            return false;
        i++; j--;
    }
    return true;
}

int main() {
    string text;
    cout << "Ingrese palabra: ";
    cin >> text;
    cout << (verify(text) ? "Es palindromo" : "No es palindromo");
    return 0;
}
