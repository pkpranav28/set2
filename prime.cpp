#include<iostream.h>
#include<conio.h>
void main()
{
	int n,t,flag=0;
	cout<<"Enter a number:";
	cin>>n;
	if(n>0)
	{
	t=n/2;
	for(int i=2;i<=t;i++)
	{
		if(n%i==0)
		{
		cout<<n<<" is not a Prime Number";
		flag=1;
		break;
		}
	}
	if(flag==0)
	cout<<n<<" is a Prime number";
	}
	else
	cout<<"Invalid";
}
