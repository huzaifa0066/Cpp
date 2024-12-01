#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[3][3],i,j;
	cout<<"Input value of Matrix:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        cin>>a[i][j];
	    
	}
	cout<<"Matrix:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        cout<<a[i][j]<<"\t";
	    cout<<endl;
	    
	}
	cout<<"Transpose:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        cout<<a[j][i]<<"\t";
	    cout<<endl;
	    
	}
}