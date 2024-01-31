#include<iostream.h>
#include<conio.h>

//function template with multiple parameter

template<class T>
Add(T x1,T y1){
	T s;
	s=x1+y1;
	cout<<"sum of "<<x1<<" + "<<y1<<" = "<<s;
}
Add(int x1,int y1){
	int s;
	s=x1+y1;
}
void main(){
	int x=5,y=20;
	double a=9.6,b=9.4;
	float i=1.2,j=2.2;
	clrscr();
	cout<<"\nSum of int";
	Add(x,y);
	cout<<"\nSum of double";
	Add(a,b);
	cout<<"\nSum of float";
	Add(i,j);
	getch();
}