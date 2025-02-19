#include<iostream>
using namespace std;
struct book{
	int id;
	float p;
	int pgs;
	
};

int main()
{
 int n;
 cout<<"enter no of books ";
 cin>>n;
 book b;
 for(int i=1;i<=n;i++)
 {
 	cout<<"id :";
 	cin>>b.id;
 	cout<<"price :";
	 cin>>b.p;
 	cout<<"pages of books";
 	cin>>b.pgs;
 		cout<<b.id<<endl;
 	cout<<b.p<<endl;
	 cout<<b.pgs<<endl;
 }
	
}