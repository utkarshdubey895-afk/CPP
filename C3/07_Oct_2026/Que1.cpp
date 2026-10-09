// //student result system
//1 base class ->student - name ,roll no .
//2.derived class -> result - marks,grade.
//3.requirement ->
//a) take student detail from user
//b) take student marks
//c) claculate grade 80-100 =A ,60-79=B, 40-59=C,<40=fail
#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Result : public Student {
private:
    float marks;
    char grade;

public:
    void getMarks() {
        cout << "Enter Student Marks: ";
        cin >> marks;
    }

    void calculateGrade() {
        if (marks >= 80 && marks <= 100)
            grade = 'A';
        else if (marks >= 60 && marks <= 79)
            grade = 'B';
        else if (marks >= 40 && marks <= 59)
            grade = 'C';
        else if (marks < 40 && marks >= 0)
            grade = 'F';
        else
            grade = 'X';
    }

    void displayResult() {
        cout << "\n----- Student Result -----" << endl;
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks   : " << marks << endl;
        
        if (grade == 'F')
            cout << "Grade   : FAIL" << endl;
        else if (grade == 'X')
            cout << "Invalid Marks" << endl;
        else
            cout << "Grade   : " << grade << endl;
    }
};

int main() {
    Result student;

    student.getStudentDetails();
    student.getMarks();
    student.calculateGrade();
    student.displayResult();

    return 0;
}