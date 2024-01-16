#include <iostream>

using namespace std;

class A{
    int x,y;
    public:
    A(){
        x=10;
        y=20;
        cout<<"\nI am a simple constructor";
    }
    void prn(){
        cout<<"\n x = "<<x;
        cout<<"\n y = "<<y;
    }
    ~A(){
        cout<<"\n I am in destructor";
    }
};

main(){
    A obj1, obj2, obj3;
    cout<<"\nobj1";
    obj1.prn();
    cout<<"\nobj2";
    obj2.prn();
    cout<<"\nobj3";
    obj3.prn();
}