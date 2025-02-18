#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int day,total,month,m_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Input Days And month:";
	cin>>day>>month;
	total=day;
	for(int i=0;i<month-1;i++)
	{
		total=total+m_days[i];
	}
	cout<<"\nTotal Days="<<total;
	
}