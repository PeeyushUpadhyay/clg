#include <iostream>

using namespace std;

class A{
    public:
    void pubA(){
        cout<<endl<<"I am in pubA";
    }
    protected:
    void proA(){
        cout<<endl<<"I am in proA";
    }
    void priA(){
        cout<<endl<<"I am in priA";
    }
};

class B: public A{
    public:
    void pubB(){
        cout<<endl<<"I am in pubB";
    }
    protected:
    void proB(){
        cout<<endl<<"I am in proB";
    }
    void priB(){
        cout<<endl<<"I am in priB";
    }
};

class C: private B{
    public:
    void pubC(){
        cout<<endl<<"I am in pubC";
    }
    protected:
    void proC(){
        cout<<endl<<"I am in proC";
    }
    void priC(){
        cout<<endl<<"I am in priC";
    }
};

class D: protected C{
    public:
    void pubD(){
        cout<<endl<<"I am in pubD";
    }
    protected:
    void proD(){
        cout<<endl<<"I am in proD";
    }
    void priD(){
        cout<<endl<<"I am in priD";
    }
};

class E: public D{
    public:
    void pubE(){
        cout<<endl<<"I am in pubE";
        pubD();
        priD();
        proD();
    }
    protected:
    void proE(){
        cout<<endl<<"I am in proE";
    }
    void priE(){
        cout<<endl<<"I am in priE";
    }
};


main(){
    A ob1;
    B ob2;
    C ob3;
    D ob4;
    E ob5;


    ob5.pubE();
    // //A
    // ob1.pubA();
    // ob1.priA();
    // ob1.proA();

    // //B
    // ob2.pubA();
    // ob2.priA();
    // ob2.proA();
    // ob2.pubB();
    // ob2.priB();
    // ob2.proB();

    // //C
    // ob3.pubA();
    // ob3.priA();
    // ob3.proA();
    // ob3.pubB();
    // ob3.priB();
    // ob3.proB();
    // ob3.pubC();
    // ob3.priC();
    // ob3.proC();

    // //D
    // ob4.pubA();
    // ob4.priA();
    // ob4.proA();
    // ob4.pubB();
    // ob4.priB();
    // ob4.proB();
    // ob4.pubC();
    // ob4.priC();
    // ob4.proC();
    // ob4.pubD();
    // ob4.priD();
    // ob4.proD();

    // //E
    // ob5.pubA();
    // ob5.priA();
    // ob5.proA();
    // ob5.pubB();
    // ob5.priB();
    // ob5.proB();
    // ob5.pubC();
    // ob5.priC();
    // ob5.proC();
    // ob5.pubD();
    // ob5.priD();
    // ob5.proD();
    // ob5.pubE();
    // ob5.priE();
    // ob5.proE();

}