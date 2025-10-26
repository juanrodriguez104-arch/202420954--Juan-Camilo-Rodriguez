#include <iostream>
using namespace std;

int findVowels(string word) {
    int v = 0;
    for(int i = 0; i < word.length(); i++) {
        char c = tolower(word[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            v++;
    }
    return v;
}

int findConsonants(string word) {
    int con = 0;
    for(int i = 0; i < word.length(); i++) {
        char c = tolower(word[i]);
        if(c >= 'a' && c <= 'z') {
            if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
                con++;
        }
    }
    return con;
}

int findNonAlpha(string word) {
    int non = 0;
    for(int i = 0; i < word.length(); i++)
        if(!isalpha(word[i]))
            non++;
    return non;
}

int main() {
    string word;
    cout << "Ingrese texto: ";
    cin >> word;

    cout << "Vocales: " << findVowels(word) << endl;
    cout << "Consonantes: " << findConsonants(word) << endl;
    cout << "No alfabeticos: " << findNonAlpha(word) << endl;

    return 0;
}
