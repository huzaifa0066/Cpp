#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,a[3][3],b[3][3];
	cout<<"Input value of Matrix A:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        cin>>a[i][j];
	    
	}
    cout<<"Input value of Matrix B:\n";	    
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        cin>>b[i][j];
	    
	}
    cout<<"Value of Matrix A:\n";   
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        cout<<a[i][j]<<"\t";
	    cout<<endl;
	}
    cout<<"Value of Matrix B:\n";	    
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	        cout<<b[i][j]<<"\t";
	    cout<<endl;
	}
	cout<<"A + B =:\n";	    
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	        cout<<a[i][j]+b[i][j]<<"\t";
	    cout<<endl;
	}
	
}