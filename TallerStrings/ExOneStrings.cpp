#include <iostream>
using namespace std;

string removeVowels(string text) {
    string newText = "";
    int i = 0;
    while (i < text.size()) {
        char c = tolower(text[i]);
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            newText += text[i];
        i++;
    }
    return newText;
}

int main() {
    string text;
    cout << "Ingrese palabra: ";
    cin >> text;
    cout << "Sin vocales: " << removeVowels(text) << endl;
    return 0;
}