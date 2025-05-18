#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int search,size,e,s=0,m;
	cout<<"Input Size:";
	cin>>size;
	e=size;
	cout<<"Input Search:";
	cin>>search;
	int a[size];
	for(int i=0;i<size;i++)
	cin>>a[i];
	cout<<"\nList You Enter is\n";
	for(int i=0;i<size;i++)
	cout<<a[i]<<"\t";
	m=(s+e)/2;
	while(s!=e)
	{
		if(search>a[m])
		{
			s=m+1;
		}
		else if(search<a[m])
		{
			e=m-1;
		}
		else 
		{
			cout<<"found";break;
		}
	}

}