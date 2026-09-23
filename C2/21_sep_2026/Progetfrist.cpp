// task: create a basic c++ console project using olny control flow arrayand function
// 1. take the name / roll number of 5 student.
// 2. store marks of 3 subject for each student using array.
// 3.calculate total marks using a function.
// 4. calculate percentage using a function.
// 5. Display pass / Fail using a function.
// 6. find the student with the highest total.
// 7. Display all student records.
// 8. usw a menu with switch-case :
// Add/Display/Highest marks / exit.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the name of studrnt:"<<endl;
//     cout<<"Ankit:"<<endl;
//     cout<< 101<<endl;
//     cout<<"student 5:"<<endl;

//     cout<<"Enter the subject:"<<endl;
//     cout<<"English"<<endl;
//     cout<<"Hindi"<<endl;
//     cout<<"Computer"<<endl;

//     cout<<"Total marks:"<<endl;
//     cout<< 88 <<endl;
//     cout<< 78 <<endl;
//     cout<< 97 <<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// Function to calculate total marks
int calculateTotal(int marks[]) {
    return marks[0] + marks[1] + marks[2];
}

// Function to calculate percentage
float calculatePercentage(int total) {
    return total / 3.0;
}

// Function to display Pass or Fail
void displayResult(float percentage) {
    if (percentage >= 40)
        cout << "Pass";
    else
        cout << "Fail";
}

// Function to add students
void addStudents(string name[], int roll[], int marks[][3], int &count) {
    if (count >= 5) {
        cout << "\nOnly 5 students allowed!\n";
        return;
    }

    cout << "\nEnter Student Name: ";
    cin >> name[count];

    cout << "Enter Roll Number: ";
    cin >> roll[count];

    cout << "Enter marks of 3 subjects:\n";

    for (int j = 0; j < 3; j++) {
        cout << "Subject " << j + 1 << ": ";
        cin >> marks[count][j];
    }

    count++;

    cout << "\nStudent Added Successfully!\n";
}

// Function to display all students
void displayStudents(string name[], int roll[],
                     int marks[][3], int count) {

    if (count == 0) {
        cout << "\nNo student records found!\n";
        return;
    }

    for (int i = 0; i < count; i++) {

        int total = calculateTotal(marks[i]);
        float percentage = calculatePercentage(total);

        cout << "\n----------------------\n";
        cout << "Name: " << name[i] << endl;
        cout << "Roll Number: " << roll[i] << endl;

        cout << "Marks: ";

        for (int j = 0; j < 3; j++) {
            cout << marks[i][j] << " ";
        }

        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
        cout << "\nResult: ";

        displayResult(percentage);

        cout << endl;
    }
}

// Function to find highest marks
void highestMarks(string name[], int roll[],
                  int marks[][3], int count) {

    if (count == 0) {
        cout << "\nNo student records found!\n";
        return;
    }

    int highestIndex = 0;

    for (int i = 1; i < count; i++) {

        if (calculateTotal(marks[i]) >
            calculateTotal(marks[highestIndex])) {

            highestIndex = i;
        }
    }

    cout << "\n===== Highest Marks =====\n";
    cout << "Name: " << name[highestIndex] << endl;
    cout << "Roll Number: " << roll[highestIndex] << endl;

    cout << "Total Marks: "
         << calculateTotal(marks[highestIndex]) << endl;

    cout << "Percentage: "
         << calculatePercentage(
                calculateTotal(marks[highestIndex]))
         << "%" << endl;
}

// Main Function
int main() {

    string name[5];
    int roll[5];
    int marks[5][3];

    int count = 0;
    int choice;

    do {

        cout << "\n\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Highest Marks\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addStudents(name, roll, marks, count);
                break;

            case 2:
                displayStudents(name, roll, marks, count);
                break;

            case 3:
                highestMarks(name, roll, marks, count);
                break;

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}