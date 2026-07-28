#include<iostream>
using namespace std;
class Student
{
    //data member 
    int id;
    string name;

    public: 
        Student(int idValue,string nameValue)
        {
            id = idValue;
            name = nameValue;  
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