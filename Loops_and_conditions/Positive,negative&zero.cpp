#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number:";
	cin>>num;
	cout<<"Value of you have enter is "<<num;
	cout<<endl;
	if(num>0)
	{
		cout<<"Positive Number.";
	}
	else if(num<0)
	{
		cout<<"Negative Number.";	
	}
	else if(num==0)
	{
		cout<<"Zero";
	}
	else
	{
		cout<<"Invalid Number.";
	}	
}