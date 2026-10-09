#include<iostream>
using namespace std;

class A
{
    public:
    void show1()
    {
        cout<<"show -A";
    }
};
class B
{
    public:
    void show2()
    {
        cout<<"show -B";
    }
};
class C:public A, public B
{
    public:
    void show3()
    {
        cout<<"show -C";
    }
};
int main(){

    C C;
    C.show1();
    C.show2();
    C.show3();
}
