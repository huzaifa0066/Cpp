#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,disc;
	cout<<"Input value of a =";
	cin>>a;
	cout<<"Input value of b =";
	cin>>b;
	cout<<"Input value of c =";
	cin>>c;
	disc=b*b-4*a*c;
	if(disc>0){
	    cout<<"\nTwo real Solution.";
	    cout<<"\nx1= "<<(-1*b+sqrt(disc))/(4*a*c);
	   	cout<<"\nx2= "<<(-1*b-sqrt(disc))/(4*a*c);
	}
	else if(disc=0){
	    cout<<"\nOne real Solution.";
	    cout<<"\nx1=x2= "<<(-1*b+sqrt(disc))/(4*a*c);
	}
	else
	    cout<<"No real Solution.";
}