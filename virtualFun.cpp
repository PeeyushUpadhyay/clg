#include <iostream>

using namespace std;

class A{
    public:
    virtual void prn(){
        cout<<endl<<"I am in prn() of Class A";
    }
    void func(){
        cout<<endl<<" I am in fun of class A";
    }
};

class B : public A{
    public:
    void prn(){
        cout<<endl<<"I am in prn() of Class B";
    }
    void func(){
        cout<<endl<<" I am in fun of class B";
    }
};

main(){
    A *ptrA;
    B *ptrB;
    A obj;
    B objj;
    cout<<endl<<"when ptrA has reference of base(A) class's object";
    ptrA=&obj;
    cout<<endl<<" prn()from ovj's reference";
    
    ptrA->prn();
    cout<<endl<<" func()from obj's reference";
    ptrA->func();

    cout<<endl<<"when ptrA has reference of derive(B) class 's object ";
    ptrA=&objj;

    cout<<endl<<"from objj's refeence";
    ptrA->prn();
    cout<<endl<<"from objj's refeence";
    ptrA->func();

    cout<<endl<<" when ptrB has reference of derive (B) class's object";
    ptrB=&objj;
    cout<<endl<<"prn() from objj's referecnce";
    ptrB->prn();
    ptrB=&objj;
    cout<<endl<<"prn() from objj's referecnce";
    ptrB->func();

}