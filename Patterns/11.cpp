// 1       2       3       4       5       6
// 6       8       10      12      14      16
// 16      19      22      25      28      31
// 31      35      39      43      47      51
// 51      56      61      66      71      76
// 76      82      88      94      100     106
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,s=1,k=6;
	for(i=1;i<=6;i++)
	{
		k=i*5+s;
		for(j=s;j<=k;j=j+i)
		{
		   cout<<j<<"\t";	
		   s=j;
		}
	    cout<<endl;	
		
	}	
}