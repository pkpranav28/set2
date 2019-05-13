#include<iostream.h>
#include<conio.h>
void main()
{
	int k,N,i,mul=1;
	cout<<"Enter a number:";
	cin>>k;
	cout<<"Enter the power:";
	cin>>N;
	for(i=0;i<N;i++)
	mul=mul*k;
	cout<<k<<" power "<<N<<" is: "<<mul;
}
	
