#include<iostream>
using namespace std;
class Parent    // abstract class 
{
    public:
        virtual void land() = 0; // pure virtual method 
};
class Child1 : public Parent 
{
    public:
        void land()   // abstraction - implement 
        {
            cout<<"home";
        }
    
};
class Child2 : public Parent
{
    
    public:
        void land()
        {
            cout<<"\noffice";
        }
};
int main(){
    Child1 obj1 = Child1();
    Child2 obj2 = Child2();

    obj1.land();

    obj2.land();

    return 0;
}