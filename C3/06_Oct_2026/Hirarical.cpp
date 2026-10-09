#include <iostream>
using namespace std;

class A {
public:
    void A1() {
        cout << "This is a eatingt" << endl;
    }
};

class B : public A {
public:
    void A2() {
        cout << "This is a foods" << endl;
    }
};

class C : public A {
public:
    void A3() {
        cout << "This is a class" << endl;
    }
};

int main() {
    B obj1;
    C obj2; 

    obj1.A1();
    obj1.A2();
    
    obj2.A1();  
    obj2.A3();

}