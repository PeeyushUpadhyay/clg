#include <iostream>

using namespace std;

template <class T>
Square(T x){
    T s;
    s=x*x;
    cout<<"Square="<<s;
}

main(){
    int x=10;
    float y=2.2;
    double z=9.6;
    Square(x);
    Square(y);
    Square(z);
}