#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
    void rectangal(int length,int breath){
    int area = length * breath;
    
    cout<<"Area of rectanbal:"<<area<<endl;
}
float circle(float r){
    float area = r*r;
    return area;
}
int main(){
    float r;
    int l;
    int b;

    cout<<"Enter the length of rectangal:";
    cin>> l;
    cout<<"Enter thr breath of rectangal:";
    cin>> b;
    cout<<"Enter the redius of rectangal:";
    cin>> r;

    rectangal(l,b);
    cout<<"are of the rectangal:"<<circle(r)<<endl;
    return 0;
}
