#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,t;
	cout<<"Input A Value:\nA = ";
	cin>>a;
	cout<<"\nInput B Value:\nB = ";
	cin>>b;
	t=a;
	a=b;
	b=t;
	cout<<"\nValue of A and B after swap is:\nA ="<<a<<"\nB = "<<b;
}











//Or by using only two variables
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main()
// {
// 	int a,b;
// 	cout<<"Input A Value:\nA = ";
// 	cin>>a;
// 	cout<<"\nInput B Value:\nB = ";
// 	cin>>b;
// 	a=a+b;
// 	b=a-b;
// 	a=a-b;
// 	cout<<"\nValue of A and B after swap is:\nA ="<<a<<"\nB = "<<b;
// }