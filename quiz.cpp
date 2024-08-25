#include <iostream>
#include <string>
using namespace std;

struct Question {
    string questionText;
    string options[4];
    char correctAnswer;
};

int main() {
    const int numberOfQuestions = 3;
    Question questions[numberOfQuestions] = {
        {"What is the capital of France?", {"A. London", "B. Berlin", "C. Paris", "D. Madrid"}, 'C'},
        {"Which language is used in C++ programming?", {"A. Python", "B. Java", "C. C++", "D. Ruby"}, 'C'},
        {"How many continents are there?", {"A. 5", "B. 6", "C. 7", "D. 8"}, 'C'}
    };

    char answer;
    int score = 0;

    cout << "Welcome to the Quiz Game!" << endl;
    cout << "Please answer the following questions:" << endl << endl;

    for (int i = 0; i < numberOfQuestions; i++) {
        cout << questions[i].questionText << endl;
        for (int j = 0; j < 4; j++) {
            cout << questions[i].options[j] << endl;
        }
        cout << "Your answer (A/B/C/D): ";
        cin >> answer;

        if (toupper(answer) == questions[i].correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect. The correct answer was " << questions[i].correctAnswer << "." << endl;
        }
        cout << endl;
    }

    cout << "You completed the quiz!" << endl;
    cout << "Your total score is: " << score << " out of " << numberOfQuestions << "." << endl;

    return 0;
}
