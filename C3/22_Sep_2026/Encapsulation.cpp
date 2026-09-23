#include<iostream>
using namespace std;
class student{
    public:
    student(int a, int b){
        // cout<<"This is a constructor"<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};
int main(){
    student s(10, 20);
    return 0;

}