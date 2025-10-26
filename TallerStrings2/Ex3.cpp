#include <iostream>
using namespace std;

int hCount(string s) {
    int c = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '-') c++;
    return c;
}

int dCount(string s) {
    int c = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= '0' && s[i] <= '9') c++;
    return c;
}

bool lastUpper(string s) {
    char last = s[s.size()-1];
    return (last >= 'A' && last <= 'Z');
}

int main() {
    string s;
    cout << "Ingrese codigo: ";
    cin >> s;

    cout << "Guiones: " << hCount(s) << endl;
    cout << "Digitos: " << dCount(s) << endl;
    cout << "Termina mayuscula: " << (lastUpper(s) ? "SI" : "NO") << endl;
    
    return 0;
}
