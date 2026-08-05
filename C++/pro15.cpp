#include<iostream>
using namespace std;
class A
{
    public: 
        int a,b;
        
        void input()
        {
            cout<<"Enter a : ";
            cin>>a;
            cout<<"Enter b : ";
            cin>>b;
        }
};
class B:public A 
{
    public:
        int ans;
        
        void addition()
        {
            ans = a + b;
        }
};
class C:public B 
{
    public:
        void display()
        {
            cout<<"addition : "<<ans;
        }
}
int main()
{
    C c= C();
    c.input();
    c.addition();
    c.display();
    
}