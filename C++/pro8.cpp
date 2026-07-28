#include<iostream>
using namespace std;
class Student
{
    public:
        Student() // constructor 
        {
            cout<<"\nwelcome to student application -- constructor";
        }
        void intro()
        {
            cout<<"\nwelcome to student application -- method ";
        }
};
int main()
{
    Student obj = Student();
    //obj.intro();
    Student obj2 = Student();
    return 0;
}