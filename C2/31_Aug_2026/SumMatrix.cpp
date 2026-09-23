#include<iostream>
using namespace std;
int main(){
    int a[2][2],a2[2][2],sum[2][2];
    cout<<"Enter first\n:"; 
    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter second\n:";
    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cin>> a[i][j];
           
        }
    } 

    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            sum[i][j]= a[i][j]+ a[i][j];
        }
    }
    cout<<"Sum of matrix:\n";
     for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cout<< sum[i][j] <<" ";
            cout <<endl;
        }
        return 0;
    }
    

}