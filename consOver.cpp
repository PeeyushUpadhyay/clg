#include <iostream>
using namespace std;

class A{
    int x,y;
    public:
    A(){
        x=0; 
        y=0;
        cout<<"\n I am in non perameterized constructor";
    }
    A(int a){
        x=a;
        y=0;
        cout<<"\n I am in one perameterized constructor";
    }
    A(int a , int b){
        x=a; 
        y=b;
        cout<<"\n I am in two perameterized constructor";
    }
    void prn(){
        cout<<"\nx :"<< x;
        cout<<"\ny :"<< y;
    }
};

main(){
    A obj1;
    A obj2(10);
    A obj3(30, 40);
    cout<<"\n obj1";
    obj1.prn();
    cout<<"\n obj2";
    obj2.prn();
    cout<<"\n obj3";
    obj3.prn();
}