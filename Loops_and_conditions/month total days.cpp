#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int m;
    cout<<"Enter month number:";
    cin>>m;
    if(m ==1 || m ==3 || m ==5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
    	cout<<"31 days";
	}
    else if( m == 4 || m == 6 || m == 9 || m == 11)
    {
    	cout<<"30 days";
	}
	else if( m == 2)
    {
    	cout<<"28 or 29 days";
	}
	else
	{
		cout<<"Invalid Number";
	}
}