#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int p=1,i,e,n;
	cout<<"Enter Number and Power:";
	cin>>n>>e;
	for(i=1;i<=e;i++){
		p=p*n;
	}
	cout<<"Ans="<<p;
}