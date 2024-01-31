#include<conio.h>
#include<iostream.h>

//abstract class

class A{
	public:
		void walk(){
			cout<<"\nMan in class A can walk";
		}
		virtual void swim(void)=0;


};
class B:public A{
	public:

		void dance(){
			cout<<"\nMan in class B can dance";
		}

		void swim(){
			cout<<"\nMan in class B can swim";
		}

};
class C:public A{
	public:

		void chess(){
			cout<<"\nMan in class C can dance";
		}

		void swim(){
			cout<<"\nMan in class C can swim";
		}

};
void main(){
	clrscr();
	B obj1;
	C obj2;
	cout<<"\n obj1";
	obj1.dance();
	obj1.swim();
	cout<<"\n obj2";
	obj2.chess();
	obj2.swim();
	getch();
}