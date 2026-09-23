#include<iostream>
using namespace std;
int square =0;
int main(){
    int n;
    cout<<"Enter a Number";
    cin>> n;
    for(int i=1; i<=n; i++){
        square = square + i*i;
    }
    cout<<square;
}