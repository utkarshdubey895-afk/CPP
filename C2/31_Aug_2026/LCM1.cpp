#include<iostream>
using namespace std;
void lcm(int a,int b){

    for(int i=1; i<=a*b; i++){
        if(i%a==0 && i%b==0){
            break;
        }
    }
    cout<<"lcm="<<lcm;
}
int main(){
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    lcm(a,b);
    return 0;
}