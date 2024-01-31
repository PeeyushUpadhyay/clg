#include<conio.h>
#include<iostream.h>

//virtual function

class A{
	public:
		void walk(){
			cout<<"\nMan can walk";
		}
		void talk(){
			cout<<"\nMan can talk";
		}
		virtual void swim(){
		}
		virtual void drive(){
		}

};
class B:public A{
	public:

		void dance(){
			cout<<"\nMan can dance";
		}

		void swim(){
			cout<<"\nMAn can swim";
		}
		void drive(){
			cout<<"\nMan can drive";
		}
};
void main(){

}