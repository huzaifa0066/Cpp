#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch[100];
	int l=0,v=0;
	cout<<"Enter String:";
	cin.get(ch,100);
	while(ch[l] != '\0')
	{
		switch(ch[l])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				v++;
	    }
			l++;
			
		
	}
	cout<<endl<<endl<<v;
}