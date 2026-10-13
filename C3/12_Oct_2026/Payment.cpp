#include<iostream>
using namespace std;

class payment{
    public:
    virtual void pay() = 0;
    
};
class UPI : public payment{
    public:
    void pay() override{

        cout<<"Payment  through UPI"<<endl;
    }

};
class creditCard : public payment{
    public:
    void pay() override{

        cout<<"Payment through credit card"<<endl;
    }

};
int main(){
    UPI u;
    creditCard c;
    
    u.pay();
    c.pay();
}