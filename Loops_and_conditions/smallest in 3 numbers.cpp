#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers:";
	cin>>a>>b>>c;
	if(a<b && a<c)
	{
		cout<<a<<" is smallest";		
	}
	else if(b<a && b<c)
	{
		cout<<b<<" is smallest";
	}
	else
	{
		cout<<c<<" is smallest";
	}
}