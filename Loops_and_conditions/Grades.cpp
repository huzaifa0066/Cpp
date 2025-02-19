// Range               Grades
// p<=100 && p>=90              A1
// p<90 && p>=80                A 
// p<80 && p>=70                B
// p<70 && p>=60                C
// p<60 && p>=50                D        
// p<50 && p>=40                E
// p<40 && p>=0                FAIL
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int p;
	cout<<"Enter Marks Percentage:";
	cin>>p;
	if(p<=100 && p>=90)
	{
		cout<<"Grade A1";
	}
	else if(p<90 && p>=80)
	{
		cout<<"Grade A";
	}
	else if(p<80 && p>=70)
	{
		cout<<"Grade B";	
	}
	else if(p<70 && p>=60)
	{
		cout<<"Grade C";	
	}
	else if(p<60 && p>=50)
	{
		cout<<"Grade D";	
	}
	else if(p<50 && p>=40)
	{
		cout<<"Grade E";	
	}
	else if(p<40 && p>=0)
	{
		cout<<"Fail";	
	}
    else
    {
		cout<<"Enter Valid Percentage";
	}
}