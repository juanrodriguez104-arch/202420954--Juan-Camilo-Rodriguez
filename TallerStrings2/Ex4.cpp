#include <iostream>
using namespace std;

int getWordCount(string text) {
    int count = 0, i = 0;
    while(i < text.size()) {
        if(text[i] != ' ') {
            count++;
            while(i < text.size() && text[i] != ' ')
                i++;
        }
        i++;
    }
    return count;
}

int getPunctuationCount(string text) {
    int count = 0, i = 0;
    while(i < text.size()) {
        char c = text[i];
        if(c=='.'||c==','||c==';'||c==':'||c=='?'||c=='!')
            count++;
        i++;
    }
    return count;
}

bool checkEndDot(string text) {
    return (text[text.size()-1] == '.');
}

int main() {
    string text;
    cout << "Ingrese una frase: ";
    getline(cin, text);

    cout << "Cantidad de palabras: " << getWordCount(text) << endl;
    cout << "Signos de puntuacion: " << getPunctuationCount(text) << endl;
    cout << "¿Termina con punto?: " << (checkEndDot(text) ? "SI" : "NO") << endl;

    return 0;
}
