#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        setMarks(m);
    }

    void setMarks(float m) {
        while (m < 0 || m > 100) {
            cout << "Invalid marks. Enter marks from 0 to 100: ";
            cin >> m;
        }
        marks = m;
    }

    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    void display() {
        cout << "Roll number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

Student inputStudent(int number) {
    int rollNo;
    string name;
    float marks;

    cout << "\nEnter details for student " << number << endl;
    cout << "Roll number: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Name: ";
    getline(cin, name);

    cout << "Marks: ";
    cin >> marks;

    Student s(rollNo, name, marks);
    return s;
}

void printResult(Student s) {
    cout << "Roll number: " << s.getRollNo() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    if (s.getMarks() >= 40) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }
}

int main() {
    Student batch[3] = {
        inputStudent(1),
        inputStudent(2),
        inputStudent(3)
    };

    char answer;
    cout << "\nDo you want to re-evaluate marks? (y/n): ";
    cin >> answer;

    if (answer == 'y' || answer == 'Y') {
        cout << "\nStudent list:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "\nStudent " << i + 1 << endl;
            batch[i].display();
        }

        int number;
        cout << "\nEnter student number to re-evaluate (1-3): ";
        cin >> number;

        if (number >= 1 && number <= 3) {
            float newMarks;
            cout << "Enter new marks: ";
            cin >> newMarks;
            batch[number - 1].setMarks(newMarks);
            cout << "Marks updated." << endl;
        } else {
            cout << "Invalid student number." << endl;
        }
    }

    cout << "\nFINAL RESULTS" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << endl;
        printResult(batch[i]);
    }

    return 0;
}
