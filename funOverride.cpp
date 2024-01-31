#include <iostream>

using namespace std;
 
class A{
    public:
    void prn(){
        cout<<endl<<"I am in class A";
    }
};

class B{
    public:
    void prn(){
        cout<<endl<<"I am in class B";
    }
};

class C: public A,B{
    public:
    void prn(){
        cout<<endl<<"I am in class C";
        A::prn();
        B::prn();
    }
};

main(){
    C ob;
    ob.prn();
}