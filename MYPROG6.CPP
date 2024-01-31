#include<iostream.h>
#include<conio.h>


template<class T>
Square(T x){
	T s;
	s=x*x;
	cout<<"square of "<<x<<" = "<<s;
}
void main(){
	int x=5;
	double y=9.6;
	float z=1.2;
	clrscr();
	cout<<"\nSquare of int";
	Square(x);
	cout<<"\nSquare of double";
	Square(y);
	cout<<"\nSquare of float";
	Square(z);
}
