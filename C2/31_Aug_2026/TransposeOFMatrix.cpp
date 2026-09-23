#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    int transpose [3][3];

    cout<<"Enter matrix element:"<<endl;
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"original matrix:";
      for(int i=0; i<=3; i++){
        for(int j=0; j<=3;j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nTranspose matrix:";
       for(int i=0; i<=3; i++){
        for(int j=0; j<=3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    bool symmetric = true;
       for(int i=0; i<=3; i++){
        for(int j=0; j<=3;j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}   