#include<iostream>
using namespace std;
int main(){
    int a,b,lcm;
    cout<<"Enter two number";
    cin>>a>>b;
    int LCM;
    for(int i=1; i<=a*b; i++){
        if(i%a==0&&i%b==0){
            LCM = i;
            break;
        }
        cout<<endl;
    }
    return 0;
}