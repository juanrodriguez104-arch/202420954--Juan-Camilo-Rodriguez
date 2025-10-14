#include <iostream>
using namespace std;

// funcion para verificar si la respuesta del usuario es correcta 
bool isCorrect(char userAnswer, char correctAnswer) {
    return userAnswer == correctAnswer;
}

// Asignar puntaje si acierta o falla
int questionScore(bool correct) {
    if (correct) {
        return 10;
    } else {
        return 0;
    }
}

// Función principal 
void playQuiz() {
    char answer;
    int totalScore = 0;

    // Pregunta 1
    cout << "Pregunta 1: ¿Capital de Francia? (a) Madrid (b) Paris (c) Roma: ";
    cin >> answer;
    totalScore += questionScore(isCorrect(answer, 'b'));

    // Pregunta 2
    cout << "Pregunta 2: ¿2 + 2 = ? (a) 3 (b) 5 (c) 4: ";
    cin >> answer;
    totalScore += questionScore(isCorrect(answer, 'c'));

    // Pregunta 3
    cout << "Pregunta 3: ¿Letra inicial del alfabeto? (a) A (b) Z (c) M: ";
    cin >> answer;
    totalScore += questionScore(isCorrect(answer, 'a'));

    // Resultado final
    cout << "Puntaje final: " << totalScore << endl;
}

int main() {
    playQuiz();
    return 0;
}
