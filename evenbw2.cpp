#include<iostream.h>
#include<conio.h>
void main()
{
	int s,e,i;
	cout<<"Enter a starting number:";
	cin>>s;
	cout<<"Enter the ending number:";
	cin>>e;
	if(s!=e)
	{
	for(i=++s;i<e;i++)
	{
		if(i%2==0)
		cout<<"\t"<<i;
	}
	}
	else
	cout<<"Invalid";
}
