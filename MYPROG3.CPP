#include<conio.h>
#include<iostream.h>

//virtual function

class A{
	public:
		virtual void prnt(){
			cout<<"\ni am in function of parent class";
		}
		void fun(){
			cout<<"I am in fun2 of parent class";
		}

};
class B:public A{
	public:
		void prnt(){
			cout<<"\ni am in function1 of child class";
		}
		void fun(){
			cout<<"\nI am in function2 of child class";
		}
};
void main(){
	clrscr();
	A *ptrA;
	B *ptrB;
	A obj1;
	B obj2;
	cout<<"\nwhen ptrA has reference of base class A 's object";
	ptrA=&obj1;
	cout<<"\nprnt() with obj1 reference";
	ptrA->prnt();
	cout<<"\nfun() with obj1 reference";
	ptrA->fun();
	cout<<"\nwhen ptrA has reference of derived class B 's object";
	ptrA=&obj2;
	cout<<"\nprnt() with obj1 reference";
	ptrA->prnt();
	cout<<"\nfun() with obj1 reference";
	ptrA->fun();
	cout<<"\nwhen ptrB has reference of derived class B 's object";
	ptrB=&obj2;
	cout<<"\nprnt() with obj1 reference";
	ptrB->prnt();
	cout<<"\nfun() with obj1 reference";
	ptrB->fun();
	getch();

}