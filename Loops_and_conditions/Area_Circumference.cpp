#include<iostream>
using namespace std;
int main()
{
    int r,ch;
    cout<<"Enter radius"
    cin>>r;
    cout<<"Enter 1 For Area\nEnter 2 For Circumference";
    cout<<endl;cout<<"\n";
	 cin>>ch;
    if(ch==1)
    {
    	cout<<"Area of Circle="<<3.14*r*r;
	}
    else if(ch==2)
    {
    	cout<<"Circumference of Circle="<<2*3.14*r;
	}
	else
	{
		cout<<"Invalid Character"
	}
}