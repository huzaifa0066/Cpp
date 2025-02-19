#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,h,m,s,r;
	cout<<"Input Seconds:";
	cin>>i;
	h=i/3600;
	r=i%3600;
	m=r/60;
	s=r%60;
	cout<<"\n"<<h<<" hours "<<m<< " minutes "<<s<<" seconds";
}