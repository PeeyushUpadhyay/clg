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

class D: public C{
    public:
    void prnD(){
        cout<<"\n i am in prnD()";
    }
};

class E: public D{
    public:
    void prnE(){
        cout<<"\n i am in prnE()";
    }
};

main(){
    E obj;
    obj.prnA(); 
    obj.prnB();
    obj.prnC(); 
    obj.prnD();
    obj.prnE();
}