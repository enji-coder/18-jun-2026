#include<iostream>
using namespace std;
class Student
{
    public:
        Student() // constructor 
        {
            cout<<"\nwelcome to student application -- constructor";
        }
        ~Student() // destructor 
        {
            cout<<"\n Thank you for using this application ";
        }
       
};
int main()
{
    Student obj = Student();
    
    return 0;
}