#include<iostream>
using namespace std;
int main(){
    int a= 10;
    int b= 20;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    a=a+b;
    b=a-b;
    a=b-a;
    cout<<"After swapping a = " << a <<" , b= "<< b <<endl;
    cout<<endl;

}