#include<iostream>
using namespace std;
class Parent
{
    public:
        void displayA()
        {
            cout<<"parent class properties here"<<endl;
        }
};
class Child:public Parent  // inheritance 
{
    public:
        void childDisplay()
        {
            cout<<"child class is here .."<<endl;
        }
};
int main()
{
    Child child = Child(); // object creation 
    child.displayA();
    child.childDisplay();
    return 0;
}