#include <iostream>
using namespace std;

void analyzeGrades(int *matrix, int students, int subjects) {
    int highest = *(matrix); 

    cout << "\nGrade Matrix:\n";
    for (int i = 0; i < students; i++) {
        float sum = 0;

        for (int j = 0; j < subjects; j++) {
            int value = *(matrix + i * subjects + j);
            cout << value << "\t";

            sum += value;

            if (value > highest) {
                highest = value;
            }
        }

        cout << " | Average: " << sum / subjects;
        cout << endl;
    }

    cout << "\nHighest Grade: " << highest << endl;
}

int main() {
    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    
    int *grades = new int[students * subjects];

    
    cout << "\nEnter grades:\n";
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cout << "Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> *(grades + i * subjects + j);
        }
    }

    analyzeGrades(grades, students, subjects);

    return 0;
}
