// write a program to creat a array of size [m][n].
// read data into the array and display int a from of matrix
// */

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and colunm of matrix:";
    cin>>m>>n;

    int arr[m][n];
    cout<<"Enter a Element"<<endl;
    for(int i=0;i<m; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }
    cout<<"Enter Element of Array"<<endl;
    for(int i=0;i<m; i++){
        for(int j=0; j<n; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
