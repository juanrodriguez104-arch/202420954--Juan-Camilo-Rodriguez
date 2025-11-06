#include <iostream>
using namespace std;

int countWords(string phrase) {
int count = 0;
bool inWord = false;

for (int i = 0; i < phrase.length(); i++) 
    {
        if (phrase[i] != ' ' && !inWord) 
        {
            inWord = true;
            count++;
        } 
    else if (phrase[i] == ' ') 
        {
        inWord = false;
        }
    }
return count;
}

string findLongestWord(string phrase) {
string longest = "", current = "";

for (int i = 0; i < phrase.length(); i++) 
    {
        if (phrase[i] != ' ') 
        {
            current += phrase[i];
        } 
            else if (current != "") 
            {
                if (current.length() > longest.length()) 
                {
                    longest = current;
                }
                current = "";
            }
    }

if (current.length() > longest.length()) 
    {
        longest = current;
    }

return longest;
}

void showWordData() 
    {
    string phrase;

        cout << "Ingrese una frase: ";
        getline(cin, phrase);

    int totalWords = countWords(phrase);
        string longest = findLongestWord(phrase);

        cout << "Cantidad de palabras: " << totalWords << endl;
        cout << "Palabra mas larga: " << longest << endl;
}

int main() {
showWordData();
return 0;
}
