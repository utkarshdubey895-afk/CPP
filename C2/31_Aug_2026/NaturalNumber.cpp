#include<iostream>
using namespace std;
int sum=0;
int main(){
    int n;
    cout<<"Enter a Number";
    cin>> n;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<sum;
}