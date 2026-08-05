#include<iostream>
using namespace std;
class Student
{
    public:
        void signup(string contactno)
        {
            cout<<"register using contact no"<<endl;
        }
        void signup(string username,string password)
        {
            cout<<"register using username and password"<<endl;
        }
    
};
int main()
{
    Student student = Student();
    student.signup("7897897890");
    student.signup("a@gmail","123456");
    return 0;
}