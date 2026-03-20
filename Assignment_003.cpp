#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string course;
    float gpa;
    string standing;
};


bool idExists(Student arr[], int n, int id);
void input(Student arr[], int n);
void display(Student arr[], int n);
string getStanding(float gpa);

int main() {
    char choice;
    do {
        int n;
        cout << "Enter number of students: ";
        cin >> n;

        Student obj[n];  

        input(obj, n);   
        display(obj, n); 

        cout << "\nDo you want to run the program again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram terminated.\n";
    return 0;
}


bool idExists(Student arr[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (arr[i].id == id) {
            return true;
        }
    }
    return false;
}

void input(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";

        int tempId;
        
        do {
            cout << "Student ID: ";
            cin >> tempId;
            if (idExists(arr, i, tempId)) {
                cout << "This ID already exists. Please enter a different ID.\n";
            }
        } while (idExists(arr, i, tempId));
        arr[i].id = tempId;

        cin.ignore();
        cout << "Name: ";
        getline(cin, arr[i].name);

        cout << "Course: ";
        getline(cin, arr[i].course);

        cout << "GPA (0-100): ";
        cin >> arr[i].gpa;

        arr[i].standing = getStanding(arr[i].gpa);
    }
}


string getStanding(float gpa) {
    if (gpa >= 90) return "Excellent";
    else if (gpa >= 80) return "Very Good";
    else if (gpa >= 70) return "Good";
    else if (gpa >= 60) return "Passing";
    else return "Failed";
}

void display(Student arr[], int n) {
    cout << "\n------\n";
    cout << "ID\tName\tCourse\tGPA\tStanding\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i].id << "\t"
             << arr[i].name << "\t"
             << arr[i].course << "\t"
             << arr[i].gpa << "\t"
             << arr[i].standing << endl;
    }
}
