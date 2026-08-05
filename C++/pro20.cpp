/*
Constructor Overloading : 

    one class can have more than one constructor its called constructor overloading. 
*/
#include<iostream>
using namespace std;

class Sample 
{
    
    public:
    Sample() // constructor 1
    {
        cout<<"welcome to constructor : "<<endl;
    }
    Sample(int a)  // constructor 2
    {
        cout<<"\n a = "<<a;
    }
    Sample(int a,int b) // constructor 3
    {
        cout<<"\n a = "<<a<<"b = "<<b;
    }
};

int main()
{
    Sample obj1 = Sample();
    Sample obj2 = Sample(10);
    Sample obj3 = Sample(10,20);
    return 0;
}