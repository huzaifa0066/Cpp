#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers:";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is Largest";		
	}
	else if(b>a && b>c)
	{
		cout<<b<<" is Largest";
	}
	else
	{
		cout<<c<<" is Largest";
	}
}