#include<iostream>
using namespace std;
int Q =0;
int main(){
    int n;
    cout<<"Enter a Number";
    cin>> n;
    for(int i=1; i<=n; i++){
        Q = Q + i*i*i;
    }
    cout<<Q;
}