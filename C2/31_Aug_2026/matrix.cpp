#include<iostream>
using namespace std;
int main(){
    int A[2][2],B[2][2],c[2][2];
    cout<<"Enter first\n:"; 
    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter second\n:";
    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cin>> B[i][j];
           
        }
    } 

    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            c[i][j]= A[i][j]+ B[i][j];
        }
    }
    cout<<"Addision of matrix:\n";
     for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cout<< c[i][j] <<" ";
            cout <<endl;
        }
        return 0;
    }
    

}