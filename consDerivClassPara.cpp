#include <iostream>

using namespace std;

class A
{
    int x,y;
public:
    A(int x1, int x2)
    {
        x=x1;
        y=x2;
        cout<<endl<<"i am in parameterize constructor of A class";
    }
    void prnA(){
        cout<<endl<<"x="<<x;
        cout<<endl<<"y="<<y;
    }
};

class B :public A
{
    int y;
public:
    B(int a, int b, int c): A(b,c)
    {
        y=a;
        cout << endl<< "I am in constructor B";
    }
    void prnB(){
        cout<<endl<<"y="<<y;
    }
};

main(){
    // A obj(10,50);
    B objj(20,30,40);
    // cout<<endl<<"prnA() from obj";
    // obj.prnA();
    cout<<endl<<"prnB() form objj";
    objj.prnB();
}