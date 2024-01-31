#include <iostream>

using namespace std;

class A{
    public:
    void walk(){
        cout<<endl<<"I can walk";
    }
    void talk(){
        cout<<endl<<"I can talk";
    }
    virtual void swim(void)=0;
    virtual void drive_a_car(void)=0;
};

class B : public A{
    public:
    void dancer(){
        cout<<endl<<"I can dance";
    }
    void swim(){
        cout<<endl<<"I can swim";
    }
    void drive_a_car(){
        cout<<endl<<"I can't drive a car";
    }

};

main(){
    B objj;
    objj.walk();
    objj.talk();
    objj.dancer();
    objj.swim();
    objj.drive_a_car();
}