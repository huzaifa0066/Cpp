#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int p;
	cout<<"Enter Marks Percentage:";
	cin>>p;
	if(p>=40 && p<=100)
	{
		cout<<"Pass";
	}
	else if(p<=40 && p>=0)
	{
		cout<<"fail";
	}
	else
	{
		cout<<"Enter Valid Percentage!";	
	}
	
}