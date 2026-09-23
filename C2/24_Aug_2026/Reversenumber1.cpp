#include<iostream>
using namespace std;
int main(){
    int num,reverse = 0,rem;
    cout<<"Enter any number:";
    cin>> num;
    int originalnumber = num;
    while(num !=0) {
        rem = num % 10;
        reverse =reverse * 10 + rem;
        num = num / 10;
    }
    cout<<"revers number =" <<reverse <<endl;
    //cout<<"reverse number ="<< reverse <<endl;
    if (originalnumber==reverse){
        cout<<"this is nalindrom number";

    }
    else {
        cout<<"this is not palindrom number";
    }
    
}