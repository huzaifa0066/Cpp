// 1
// 1       4
// 1       4       9
// 1       4       9       16
// 1       4       9       16      25
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
		    cout<<j*j<<"\t";
		cout<<endl;
	}	  		
}