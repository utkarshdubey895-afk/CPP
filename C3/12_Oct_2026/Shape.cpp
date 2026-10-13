#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void calculateArea() = 0;
    
};
class rectangle : public Shape{
    public:
    void calculateArea() override{
        int length = 5;
        int breadth = 10;
        cout<<"Area of rectangle is: "<<length*breadth<<endl;
    }

};