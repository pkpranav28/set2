#include<iostream.h>
#include<conio.h>
void main()
{
	int s,e;
	cout<<"Enter the start value:";
	cin>>s;
	cout<<"Enter the end value:";
	cin>>e;
	for(int i=s;i<e;i++)
	{
		int digit,sum=0,t;
		t=i;
		while(t!=0)
		{
			digit=t%10;
			sum=sum+(digit*digit*digit);
			t=t/10;
		}
		if(i==sum)
		cout<<"\t"<<sum;
	}
}
	
