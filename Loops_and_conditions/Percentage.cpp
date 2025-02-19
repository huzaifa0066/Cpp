#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float t_marks,o_marks;
	cout<<"Input Total Marks:";
	cin>>t_marks;
	cout<<"\nInput Obtain Marks:";
	cin>>o_marks;
	cout<<"\nPrecentage = "<<(o_marks/t_marks)*100<<"%";
}