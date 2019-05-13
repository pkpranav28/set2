#include<iostream.h>
#include<conio.h>
void main()
{
	int n,t,a,rev=0;
	cout<<"Enter a value:";
	cin>>n;
	t=n;
	do
	{
		a=n%10;
		rev=(rev*10)+a;
		n=n/10;
	}while(n!=0);
	if(t==rev)
	cout<<t<<" is a Palindrome";
	else
	cout<<t<<" is not a Palindrome";
}
	
