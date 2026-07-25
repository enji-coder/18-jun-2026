#include <iostream>
using namespace std;
class Student
{   
    public:
        // data member 
        int id;
        string name;
        string subject;
        int score;
        
        // member functions 
        void inputData()
        {
            cout<<"Enter id : ";
            cin>>id;
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter subject : ";
            cin>>subject;
            cout<<"Enter score : ";
            cin>>score;
        }
};
int main()
{
    Student obj = Student();
    obj.inputData();
    return 0;
}