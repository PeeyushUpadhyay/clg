#include <iostream>

using namespace std;

class A
{
public:
    A()
    {

        cout << endl
             << "I am in A";
    }
};

class B :public A
{
public:
    B()
    {

        cout << endl
             << "I am in B";
    }
};

class C : public B
{
public:
    C()
    {

        cout << endl
             << "I am in C";
    }
};


main(){
    C obj;
}