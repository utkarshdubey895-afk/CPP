#include<iostream>
using namespace std;
int main(){
    int arr[3][3],largest; 
    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            cin>>arr[i][j];
        }
    }
    largest = arr [0][0];
    for(int i=0;i< 2; i++){
        for(int j=0;j< 2;j++){
            if(arr[i][j] > largest);
            cout << arr[i][j];
           
        }
        cout<< "largest element = " << largest;
        cout<< endl;
    }
    return 0;
}