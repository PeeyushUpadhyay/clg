#include <iostream>

using namespace std;

class A{
    public: 
    void prn(){
        cout<<endl<<"I am in prn without parameter";
    }
    void prn(int x){
        cout<<endl<<"I am in prn with one int parameter";
    }
    void prn(int x, int y){
        cout<<endl<<"I am in prn with two int parameter";
    }
    void prn(int x, float y){
        cout<<endl<<"I am in prn with two int parameter";
    }
};

main(){
    A ob;
    ob.prn();
    ob.prn(10);
    ob.prn(20,30);
}