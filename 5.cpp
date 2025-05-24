#include<iostream>
using namespace std;
class Data
{
    public:
        void displayOS();
};
class Apple : public Data
{
    public:
        void displayOS()
        {
             cout<<"Apple uses iOS and mcOS"<<endl;
        }
};
class Microsoft : public Data
{
    public:
    void displayOS()
    {
       cout<< "Microsoft uses WindowOS"<<endl;
    }
};
int main()
{
    Microsoft m;
    m.displayOS();
    Apple a;
    a.displayOS();
}