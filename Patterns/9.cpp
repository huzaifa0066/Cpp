// *****
//  ****
//   ***
//    **
//     *

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,s,k=5;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		    cout<<" ";
		for(j=1;j<=k;j++)
		    cout<<"*";
         k=k-1;
		cout<<endl;
	}
	    	
}