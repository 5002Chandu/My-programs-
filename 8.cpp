#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"stop it...!!!!!!"<<endl;
    }
    void surprise()
    {
        cout<<"This is surprise"<<endl;
    }
};
void surprise() {cout<<"This is secret"<<endl;}
int main()
{
    A obj;
    surprise();
    obj.surprise();
}