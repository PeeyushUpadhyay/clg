#include<conio.h>
#include<iostream.h>

//function overriding

class A{
	public:
		void prnt(){
			cout<<"\ni am in function of parent class";
		}

};
class B:public A{
	public:
		void prnt(int x){
			cout<<"\ni am in function of child class";
		}


};
void main(){
	A obj1;
	B obj2;
	clrscr();
	obj1.prnt();
	obj2.prnt(10);
	getch();

}