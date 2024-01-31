#include<iostream.h>
#include<conio.h>

//function template with multiple parameter

template<class X,class Y,class T>
Add(X x1,Y y1,T z1){
	T s;
	s=x1+y1+z1;
	cout<<"sum of "<<x1<<" + "<<y1<< " + "<<z1 <<" = "<<s;
}
void main(){
	int x=5,y=20,z=20;
	double a=9.6,b=9.4,c=9.5;
	float i=1.2,j=2.2,k=3.3;
	clrscr();
	cout<<"\nSum of int";
	Add(x,y,z);
	cout<<"\nSum of double";
	Add(a,b,c);
	cout<<"\nSum of float";
	Add(i,j,k);
	cout<<"\nSum of int float and double";
	Add(x,a,i);
	getch();
}