#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch[100];
	int l=0,w=0,c=0;
	cout<<"Enter String:";
	cin.get(ch,100);
	while(ch[l] !='\0') 
	{
		if(ch[l]==' ')
	        w++;
		else
		    c++;
		l++;  
    }
	 cout<<w+1<<endl<<c;
	 	  
}  