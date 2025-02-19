#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,a,b,c;

	do{
		cout<<"Input Three Digit Number:";
		cin>>n;
	}while(n<99 || n>1000);
	c=n/100;
	n=n%100;
	b=n/10;
	a=n%10;
	cout<<"\nNumber in reverse order is "<<a<<b<<c;
}
	
		