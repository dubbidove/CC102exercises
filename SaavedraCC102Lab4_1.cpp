#include <iostream>
using namespace std;

int main() {

    int numStudents, numQuiz;

    cout << "Enter number of students: ";
    cin >> numStudents;

    cout << "Enter number of quizzes: ";
    cin >> numQuiz;

    int grades[numStudents][numQuiz]; 

    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent ";                     
        for (int j = 0; j < numQuiz; j++) {
            cout << "Quiz #" << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    cout << "\n AVERAGE GRADE\n";
    cout << "Student\t";
    for (int j = 0; j < numQuiz; j++) {
        cout << "Quiz" << j + 1 << "\t";
    }
    cout << "Average\n";
    for (int i = 0; i < numStudents; i++) {
        cout << i + 1 << "\t"; 

        int total = 0;
        for (int j = 0; j < numQuiz; j++) {
            cout << grades[i][j] << "\t";
            total = total + grades[i][j];
        }

        double average = total / (double)numQuiz;
        cout << average << endl;
    }
    return 0;
}
    