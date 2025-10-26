#include <iostream>
using namespace std;

bool digitCheck(string word) {
    for(int i = 0; i < word.size(); i++)
        if(isdigit(word[i]))
            return true;
    return false;
}

bool specialCheck(string word) {
    for(int i = 0; i < word.size(); i++)
        if(word[i]=='@'||word[i]=='#'||word[i]=='$'||word[i]=='%')
            return true;
    return false;
}

bool spaceCheck(string word) {
    for(int i = 0; i < word.size(); i++)
        if(word[i]==' ')
            return false;
    return true;
}

int main() {
    string word;
    cout << "Codigo: ";
    cin >> word;

    cout << (digitCheck(word) && specialCheck(word) && spaceCheck(word) ? "Valido" : "Invalido");

    return 0;
}
