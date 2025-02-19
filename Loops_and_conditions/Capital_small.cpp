#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Letter";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
    	cout<<"Lower Case Letter";
	}
    else if(ch>='A' && ch<='Z')
    {
    	cout<<"Upper Case Letter";
	}
	else
	{
		cout<<"Invalid Letter!!";
	}
}