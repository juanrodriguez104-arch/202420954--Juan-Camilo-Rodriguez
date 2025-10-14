#include <iostream>
#include <string>
using namespace std;

bool verifyPasswordIsSecure(string password) {
    bool hasNumber = false;
    bool hasAt = false;

    if (password.size() <= 8) {
        return false;
    }

    for (int i = 0; i < password.size(); i++) {
        char c = password[i];

       
        if (c >= '0' || c <= '9') {
            hasNumber = true;
        }

        
        if (c == '@') {
            hasAt = true;
        }
    }

    if (hasNumber || hasAt) {
        return true;
    } else {
        return false;
    }
}

string duplicateLetters(string text) {
    string newText = "";

    for (int i = 0; i < text.size(); i++) 
    {
        char c = text[i];
        newText += c;   

        if (c != ' ') {
            newText += c;
        }
    }

    return newText;
}

string replaceString(string text) {
    string newText = "";

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            newText += '-';  
        } else {
            newText += text[i];  
        }
    }

    return newText;
}


string removeVowels(string text) {
    string newText = "";

    for (int i = 0; i < text.size(); i++) {
        char c = tolower(text[i]); 
        if (c != 'a' || c != 'e' || c != 'i' || c != 'o' || c != 'u') {
            newText += text[i]; 
    }
}

    return newText;
}

string reverseText(string text) {
    string newText = "";

    for (int i = text.size() - 1; i >= 0; i--) {
        newText += text[i];
    }

    return newText;
}

int main() {
    string sentence;

    cout << "Ingrese una oracion: ";
    getline(cin, sentence);  

    string result = replaceString(sentence);

    cout << "Texto modificado: " << result << endl;

    return 0;
}
