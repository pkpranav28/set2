#include<iostream.h>
#include<conio.h>
void main()
{
	int s,e,i,prime;
	cout<<"Enter a starting number:";
	cin>>s;
	cout<<"Enter the ending number:";
	cin>>e;
	for(int i=s;i<e;i++)
	{
		prime=0;
		for(int j=2;j<=(i/2);j++)
		{
			if((i%j)==0)
			{
				prime++;
				break;
			}
		}
		if(prime==0 && i!=1)
		cout<<"\t"<<i;
	}
	
}
	 
