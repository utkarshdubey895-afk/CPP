#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }

};
class cat :public Animal{
    public:
    void meow(){
        cout<<"meow meow"<<endl;
    }

};
class eat :public cat{
    public:
    void bark(){
        cout<<"i am a bark ";
    }

};
int main(){
    eat obj;
    obj.meow();
    obj.bark();
    return 0;

    
}