#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c[100];
	int l=0;
	cout<<"Enter String:";
	cin.get(c,100);
	while(c[l] !='\0') 
	{
	  l++;  
    }
	for(;l>=0;l--)
	{
	 cout<<c[l];
	} 	  
}  
      
	