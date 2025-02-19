#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,c;
	cout<<"Input Value of NUmber and Limit";
	cin>>n>>c;
	for(i=1;i<=c;i++)
	{
			cout<<n<<"\tX\t"<<i<<"\t=\t"<<n*i<<endl;
	}

}