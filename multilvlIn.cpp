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

class C : public B{
    public:
    void prnC(){
        cout<<"\n i am in prnC()";
    }
};

main(){
    A obj1;
    B obj2;
    C obj3;
    cout<<"\n prnA() from obj1";
    obj1.prnA();
    // cout<<"\n prnB() from obj1";
    // obj1.prnB();
    cout<<"\n prnA() from obj2";
    obj2.prnA();
    cout<<"\n prnB() from obj1";
    obj2.prnB();

    cout<<"\n prnA() from obj3";
    obj3.prnA();
    cout<<"\n prnB() from obj3";
    obj3.prnB();
    cout<<"\n prnC() from obj3";
    obj3.prnC();
}