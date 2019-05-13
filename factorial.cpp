#include<iostream.h>
#include<conio.h>
void main()
{
	int a,i,fact=1;
	cout<<"Enter a number:";
	cin>>a;
	for(i=1;i<=a;i++)
	fact=fact*i;
	cout<<"Factorial of "<<a<<" is "<<fact;
}
	
