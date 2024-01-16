#include <bits/stdc++.h>

using namespace std;

class A
{
    int x,y;
    public:
    void get(){
        cout<<"\n Enter the value of x and y: ";
        cin >> x >> y;
    }
};

int main(){
    A obj;
    obj.get();
    return 0;
}