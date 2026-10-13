#include<iostream>
using namespace std;

class student{
    public:
    void add(int a){
        cout<<"Sum of a: "<<a<<endl;
    }

    void add(int a,int b){
        cout<<"Sum of a and b:"<<a+b<<endl;
    }

    void add(int a,int b, int c){
        cout<<"Sum of a,b,and c:"<<a+b+c<<endl;
    }
};

int main(){

    student s;
    s.add(3);
    s.add(3, 5);
    s.add(3, 5, 7);
    
}
