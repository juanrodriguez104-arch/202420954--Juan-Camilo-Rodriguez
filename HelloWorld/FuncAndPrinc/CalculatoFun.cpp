#include <iostream>
using namespace std;

void sumOfTwoNumbers(int numberOne, int numberTwo) {
    int sumResult = numberOne + numberTwo;
    cout << "La suma de los numeros es: " << sumResult << endl;
}

void subtractOfTwoNumbers(int numberOne, int numberTwo) {
    int subtractResult = numberOne - numberTwo;
    cout << "La resta de los numeros es: " << subtractResult << endl;
}

void multipOfTwoNumbers(int numberOne, int numberTwo) {
    int multipResult = numberOne * numberTwo; 
    cout << "La multiplicacion de los numeros es: " << multipResult << endl;
}

void diviOfTwoNumbers(int numberOne, int numberTwo) {
    int dividResult = numberOne / numberTwo;
    cout << "La division de los valores es: " << dividResult << endl;
}


void square(int number) {
    int result = number * number;
    cout << "El cuadrado de " << number << " es: " << result << endl;
}

int main() {
    int numberOne, numberTwo;

    cout << "Ingrese un numero: ";
    cin >> numberOne;
    cout << "Ingrese otro numero: ";
    cin >> numberTwo;

    sumOfTwoNumbers(numberOne, numberTwo);
    subtractOfTwoNumbers(numberOne, numberTwo);
    multipOfTwoNumbers(numberOne, numberTwo);
    diviOfTwoNumbers(numberOne, numberTwo);
    square(numberOne);
    square(numberTwo);

    return 0;
}
