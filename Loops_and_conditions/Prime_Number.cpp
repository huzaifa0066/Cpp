#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,count=0;
	cout<<"End Point :";
	cin>>n;
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0)
	
		   count++;	}
		if(count==0)
		   cout<<"\t"<<i;
		   count=0;
	}
	
}