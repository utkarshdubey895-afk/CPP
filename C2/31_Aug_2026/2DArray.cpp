#include<iostream>
using namespace std;
int main(){
    int arr[5][4];
    //Input
    for(int i=0; i< 5; i++){
        for(int j=0; j< 4; j++){
            cin>> arr[i][j];
        }
    }
    //Output
    for(int i=0;i< 5; i++){
        for(int j=0;j< 4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
