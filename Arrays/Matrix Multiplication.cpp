#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,a[3][3],b[3][3],p[3][3];
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
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p[i][j]=0;
			for(k=0;k<3;k++)
			{
				p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	cout<<"\nAnswer:";
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		    cout<<p[i][j]<<"\t";
		cout<<endl;
    }
}