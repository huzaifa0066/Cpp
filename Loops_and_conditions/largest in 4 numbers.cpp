#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter 4 numbers:";
	cin>>a>>b>>c>>d;
	if(a>b && a>c && a>d)
	{
		cout<<a<<" is Largest";		
	}
	else if(b>a && b>c && b>d)
	{
		cout<<b<<" is Largest";
	}
	else if(c>a && c>b && b>d)
	{
		cout<<c<<" is Largest";
	}
	else
	{
		cout<<d<<" is Largest";
	}
}