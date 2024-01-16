#include <iostream>

using namespace std;

class A{
    public:
    void prnA(){
        cout<<"\n I am in prnA()";
    }
};

class B : public A{
    public:
    void prnB(){
        cout<<"\n i am in prnB()";
    }
};

main(){
    A obj1;
    B obj2;
    cout<<"\n prnA() from obj1";
    obj1.prnA();
    // cout<<"\n prnB() from obj1";
    // obj1.prnB();
    cout<<"\n prnA() from obj2";
    obj2.prnA();
    cout<<"\n prnB() from obj1";
    obj2.prnB();
}