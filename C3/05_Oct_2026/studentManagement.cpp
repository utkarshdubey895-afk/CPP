#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int maths;
    int science;
    int computer;

public:

    Student(string n, int r, int m, int s, int c) {
        name = n;
        roll = r;
        maths = m;
        science = s;
        computer = c;
    }

    int CalculateTotal() {
        return maths + science + computer;
    }

    float CalculatePercentage() {
        return CalculateTotal() / 3.0;
    }

    void checkresult() {
        if (maths >= 33 && science >= 33 && computer >= 33) {
            cout << "Result: Pass" << endl;
        }
        else {
            cout << "Result: Fail" << endl;
        }
    }

    void display() {
        cout << "----- Student Management -----" << endl;
        cout << "Name - " << name << endl;
        cout << "Roll No - " << roll << endl;
        cout << "Total Marks - " << CalculateTotal() << endl;
        cout << "Percentage - " << CalculatePercentage() << "%" << endl;
    }
};

int main() {
    Student s1("Utkarsh", 23, 66, 76, 87);

    s1.checkresult();
    s1.display();

    return 0;
}