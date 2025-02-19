#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
    int g_pay,b_pay,tax,m,h,t;
	cout<<"Conditions\t\t\t\t     Payable Ammount of Tax\nG.pay<=600000   \t\t\t\t\t0\nG.pay>600000 && G.pay<=1200000\t\t\t1500 + 2.5%\nG.pay>=1200000 && G.pay<=2000000\t\t25000 +12.5%\nG.pay>2000000\t\t\t\t\t500000 + 25%\n";
	cout<<endl<<endl<<endl;
	cout<<"Enter Your Pay";
	cin>>b_pay;
	h=0.45*b_pay;
	m=0.2*b_pay;
	t=0.1*b_pay;
	g_pay=b_pay+h+m+t;
	cout<<"\nAllounces = "<<h+m+t<<"\nGross Salary = "<<g_pay;
	if(g_pay<=600000 )
	    tax=0;
	else if(g_pay>600000 && g_pay<=1200000)
	    tax=1500 + 0.025 *b_pay;
	else if(g_pay>1200000 && g_pay<=2000000)
	    tax=25000 + 0.125*b_pay;
	else if(g_pay>2000000)
	    tax=500000 + 0.25*b_pay;
	cout<<"\nTax = "<<tax<<"\nNet Pay = "<<g_pay - tax;
}