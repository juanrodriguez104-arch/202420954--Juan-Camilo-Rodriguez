#include <iostream>
using namespace std;

int countVowels(string text) {
    int vowelCount = 0;

    for (int i = 0; i < text.size(); i++) {
        char c = tolower(text[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

void ForWithString() {
    cout << "-----" << endl;
    string exampleText = "Hello Wordl:";
    cout << "size():" << exampleText.size() << endl; 
    cout << "posicion 1:" << exampleText[1] << endl;
    cout << "--------" << endl;
    for (int i = 0; i < exampleText.size ()+1; i++)
    {
        char textCharacter = exampleText [i];
        if (textCharacter == 'a' || textCharacter == 'e' || textCharacter == 'i' || textCharacter == 'o' || textCharacter == 'u')
        {
            int totalvowels = countVowels(exampleText)
            cout << " se encontraron " Totalvowels "vocales" << endl; 
        }
        //cout <<"position:" << i << "-" << textCharacter << endl;
    }
}

int main() {
    ForWithString();
    return 0;
}