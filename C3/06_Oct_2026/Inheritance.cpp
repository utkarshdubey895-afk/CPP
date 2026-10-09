#include<iostream>
using namespace std;

class Animal{
    public:
    void food(){
        cout<<"food";
    }

};
class food :public Animal{
    public:
    void momo(){
        cout<<"momo"<<endl;
    }

};
int main(){
    Animal cat;
    cat.food();
    cout<<"momo";

}