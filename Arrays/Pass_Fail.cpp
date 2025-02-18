#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int s;
	cout<<"Input Total Strength of Students:";
	cin>>s;
	int i,a[s],fail=0,pass=0;
	cout<<"Input Marks:\n";
	for(i=0;i<s;i++)
	{
	    cin>>a[i];  
	}
	for(i=0;i<s;i++)
	{
	    if(a[i]>=33 && a[i]<=100)  
	      pass++;
	    else 
	     fail++;
	}
		cout<<"\nNumber of Pass Students= "<<pass;
		cout<<"\nNumber of Fail Student="<<fail;
}