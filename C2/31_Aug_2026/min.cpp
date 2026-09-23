#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={10,50,20,60,90};
    int min = INT_MAX;
    for(int i=1; i < 5; i++){
        if(arr[i]<min){
            min = arr[i];
            cout<<min <<endl;
        }
    }
     
    return 0;
}