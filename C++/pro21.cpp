#include<iostream>
using namespace std;
class Parent
{
    public:
        void display()
        {
            cout<<"\n Welcome to parent class";
        }
};
class Child : public Parent
{           
    public:
        void display()
        {
            // scope resolution operator to access another class propreties 
            Parent::display();
            cout<<"\n Welcome to child class";
        }
};
int main()
{
    Child obj = Child();
    obj.display();
}
