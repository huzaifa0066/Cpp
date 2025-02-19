#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char opt;
	cout<<"Input two numbers:";
	cin>>a>>b;
	cout<<"Input Operation";
	cin>>opt;
	switch(opt)
	{
		case '+':
			cout<<a+b; break;
		case '-':
			cout<<a-b; break;
		case '*':
			cout<<a*b; break;
		case '/':
			cout<<a/b; break;
		case '%':
			cout<<a%b; break;
		default:
			cout<<"Invalid Number";
	}	
}