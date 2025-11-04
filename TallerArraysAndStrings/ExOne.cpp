#include <iostream>
using namespace std;

int countTotal(string text) {
    int total = 0;
    for (int i = 0; i < text.length(); i++) {
        total++;
    }
    return total;
}

int countWithoutSpaces(string text) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            count++;
        }
    }
    return count;
}

void showCharacterCount() {
    string text;

    cout << "Ingrese un texto: ";
    getline(cin, text); 

    int total = countTotal(text);
    int withoutSpaces = countWithoutSpaces(text);

    cout << "Texto original: " << text << endl;
    cout << "Total de caracteres: " << total << endl;
    cout << "Total sin espacios: " << withoutSpaces << endl;
}

int main() {
    showCharacterCount(); 
    return 0;
}
