#include<conio.h>
#include<iostream.h>

//function overloading

class A{
	public:
		void prnt(){
			cout<<"\ni am in function without parameter";
		}
		void prnt(int x){
			cout<<"\nI am in function with one int parameter";
		}
		void prnt(int x,int y){
			cout<<"\nI am in function with two int parameter";
		}
		void prnt(int x,float y){
			cout<<"\nI am in function with two parameter int and float";
		}
		void prnt(int x,char y){
			cout<<"\nI am in function with two parameter int and char";
		}
		void prnt(int x,int y,int z){
			cout<<"\nI am in function with three int parameter";
		}
};
void main(){
	clrscr();
	A obj;
	obj.prnt();
	obj.prnt(12);
	obj.prnt(10,20);
	obj.prnt(10,20,30);
	obj.prnt(20,'C');
	obj.prnt(10,8.0f);
	getch();
}