#include<iostream>
using namespace std;
class Student
{
    //data member 
    int id;
    string name;

    public: 
        Student(int id,string name)
        {
            this->id = id;
            this->name = name;  
        }
        void display()
        {
            cout<<"\n id : "<<id;
            cout<<"\n name : "<<name;
        }
};
int main()
{
    
    Student obj = Student(101,"AAA");
    obj.display();

    
    return 0;
}