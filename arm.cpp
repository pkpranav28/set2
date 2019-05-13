#include<iostream.h>
#include<conio.h>
void main()
{
	int n,t,arm=0,a;
	cout<<"Enter a number:";
	cin>>n;
	if(n>0)
	{
	t=n;
	while(n!=0)
	{
		a=n%10;
		arm=(a*a*a)+arm;
		n=n/10;
	}
	if(t==arm)
	cout<<"Armstrong number";
	else
	cout<<"Not an armstrong number";
	}
	else
	cout<<"Invalid";
}
	
