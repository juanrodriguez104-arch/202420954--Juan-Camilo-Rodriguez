#include <iostream>
using namespace std;

bool checkSize(string name) {
    if(name.size() < 6 || name.size() > 12)
        return false;
    return true;
}

bool checkFirstChar(string name) {
    char c = name[0];
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

bool checkSpaces(string name) {
    int i = 0;
    while(i < name.size()) {
        if(name[i] == ' ')
            return false;
        i++;
    }
    return true;
}

int main() {
    string name;
    cout << "Ingrese nombre de usuario: ";
    cin >> name;

    if(checkSize(name) && checkFirstChar(name) && checkSpaces(name))
        cout << "Usuario valido." << endl;
    else
        cout << "Usuario invalido." << endl;

    return 0;
}
