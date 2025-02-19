#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,a,b,ans=0;
	cout<<"Input two Numbers;";
	cin>>a>>b;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				if(i!=1)
				{
				    ans=i;break;					
				}

			}
		}
		
	}cout<<ans;
}