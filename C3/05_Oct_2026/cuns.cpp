#include<iostream>
using namespace std;

class Student {
    int number;

public:
    Student(int n) {
        number = n;
        cout << "Constructor method" << endl;
        cout << "Number: " << number << endl;
    }
};

int main() {
    Student s(10);
    return 0;
}