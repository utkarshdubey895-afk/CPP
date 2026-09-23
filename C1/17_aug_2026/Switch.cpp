#include<iostream>
using namespace std;
int main()
{
    int day = 2;

    switch (day) {
        
        case 1 :
        cout<<"Monday";
        break;

         case 2:
        cout<<"tuesday";
        break;

         case 3:
        cout<<"wednesday";
        break;

         default:
        cout<<"Invalid day";
        break;
    }
    return 0;
}