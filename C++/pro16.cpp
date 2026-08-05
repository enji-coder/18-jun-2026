#include<iostream>
using namespace std;
class A
{
    public:
        int a,b;
        void inputA(){
            cout<<"Enter number 1 : ";
            cin>>a;
            cout<<"Enter number 2 : ";
            cin>>b;
        }
};
class B 
{   
    public:
        int c,d;
    void inputB(){
            cout<<"Enter number 3 : ";
            cin>>c;
            cout<<"Enter number 4 : ";
            cin>>d;
        }
};
class C :public A , public B 
{
    public:
        void addition()
        {
            cout<<"\naddition : "<<a + b;
        }
        void mul()
        {
            cout<<"\nmultplication : "<<c * d;
        }

};
int main()
{   
    C c = C(); 
    c.inputA();
    c.inputB();

    c.addition();
    c.mul();
    return 0;
}