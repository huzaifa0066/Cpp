#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,a[5];
	cout<<"Input Array:";
	for(i=0;i<5;i++)
	{
	    cin>>a[i];  
	}
	cout<<"\nActual Array:";
	for(i=0;i<5;i++)
	{
	    cout<<a[i]<<"  ";  
	}
	cout<<"\nReverse Array:";
	for(i=4;i>=0;i--)
	{
	    cout<<a[i]<<"  ";  
	}
}