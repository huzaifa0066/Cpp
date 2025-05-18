#include<iostream>
using namespace std;
int main()
{
	int i,j,a[3][4],min;
	cout<<"Input 12 Numbers";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
	        cin>>a[i][j]; 
	}
	min=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
	    {
	    	if(a[i][j]<min)
	    	{
	    		min=a[i][j];
			}
		}
	}
	cout<<"\nSmallest number:"<<min;
}