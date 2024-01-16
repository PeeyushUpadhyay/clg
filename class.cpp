#include <bits/stdc++.h>

using namespace std;

class A
{
    int x,y;
    public:
    class InnerClass
    {
        public:
        void prnInner()
        {
            cout<<"\n I am in prnInner() of inner class";
        }
    };
    void get()
    {
        cout<<"\n Enter the value of x & y";
        cin>>x>>y;
    }
    void prn(){
        cout<<"\n x= "<<x;
        cout<<"\n y= "<<y;

    }
};

main(){
    A obj;
    A::InnerClass objinner;
    obj.get();
    obj.prn();
    objinner.prnInner();
}