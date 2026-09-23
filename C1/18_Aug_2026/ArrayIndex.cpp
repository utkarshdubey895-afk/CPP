#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int n =4;
    int target =9;

    for  (int  i=0; i<=n; i++){
        for (int j=i; j<=n; j++){

            if (arr[i] + arr[j] == target){
                cout<<"Index:<<" << i <<"" << j << endl;
                cout << "values:" << arr[i] << "" << arr[j];
                return 0;
            }

        }
    }
    cout <<"No pair Found";
    return 0;
}