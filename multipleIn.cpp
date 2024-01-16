#include <iostream>

using namespace std;

class A{
    public:
    void prnA(){
        cout<<"\n I am in prnA()";
    }
};

class B{
    public:
    void prnB(){
        cout<<"\n i am in prnB()";
    }
};

class C : public B , public A{
    public:
    void prnC(){
        cout<<"\n i am in prnC()";
    }
};

main(){
    C obj;
    cout<<"\n prnA() from obj";
    obj.prnA();
    cout<<"\n prnB() from obj";
    obj.prnB();
    cout<<"\n prnC() from obj";
    obj.prnC();
}