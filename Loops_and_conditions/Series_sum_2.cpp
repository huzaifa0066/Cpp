#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	float sum=0.0;
	for(i=1;i<=45;i++){
		sum=sum+(1.0/(i*i));
		
	}
	cout<<"Sum of 1+1/2^2+1/3^2+1/4^2..........1/45^2\n"<<sum;
}