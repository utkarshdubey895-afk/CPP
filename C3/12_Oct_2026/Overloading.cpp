#include<iostream>
using namespace std;
class calculator{
    public:
    void add(int a){
        cout<<"The value of a is: "<<a<<endl;
    }
    void add(int a, int b){
        cout<<"The value of a and b is: "<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<"The value of a, b and c is: "<<a+b+c<<endl;
    }
};
int main(){
    calculator c;
    c.add(10);
    c.add(10,20);
    c.add(10,20,30);

    return 0;
}
