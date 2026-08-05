#include<iostream>
using namespace std;
class RBI
{
    public:
        virtual void roi() = 0;
};
class SBI:public RBI 
{
    public:
        void roi()
        {
            cout<<"SBI rate of interest is : 8.5";
        }
};
class BOI: public RBI 
{
    public:
        void roi()
        {
            cout<<"\n BOI rate of interest is : 7.5";
        }
};
int main(){
    SBI sbi = SBI();
    BOI boi = BOI();
    
    sbi.roi();
    
    boi.roi();
    return 0;
}