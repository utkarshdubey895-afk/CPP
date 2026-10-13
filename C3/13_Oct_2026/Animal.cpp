#include<iostream>
using namespace std;

class Animal{
public:
    virtual void sound(){
        cout<<"Animal makes a sound"<<endl;
    }
};

class dog: public Animal{
    public:
    void sound() override{
        cout<<"Dog barks"<<endl;
    }
};

class cat: public Animal{
    public:
    void sound() override{
        cout<<"Cat meow"<<endl;
    }
};

int main(){
    Animal* ace;
    Animal a;
    dog d;
    cat c;
    ace = &a;

    ace->sound();
    ace = &c;
    ace->sound();

    return 0;
}
