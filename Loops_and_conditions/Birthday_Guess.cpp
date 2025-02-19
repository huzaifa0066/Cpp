#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,j,d=0,count,n=0;
	char ch;
	cout<<"On the Screen Five set of Numbers will be displayed and \nyou have to Press Y if your Birthday Date lies in them or \nPress N if your Birthday date is not in them.\n";
	cout<<"Plz don't Press Any other key or Enter a invalid character\n[Press Y to continue Or N to exit]\n>";
	ch=getche();
	while(ch!='Y' && ch!='y' && ch!='n' && ch!='N' ){
		cout<<"\nEnter a Valid Character!!\nPress Y for Yes and N for no.\n>";
	    ch=getche();	
	}
	if(ch!='n' && ch!='N')
	{
		
	//set1
	cout<<"\n\n\nDoes Your Birthday Lies In These Set Of Numbers:\n\n\n\t";
	for(i=1;i<=31;i=i+2){
		cout<<i<<"\t";
		n++;
		if(n==4){
			cout<<"\n\n\t";
			n=0;
		}  
	}
	cout<<endl<<">";
	ch=getche();
	while(ch!='Y' && ch!='y' && ch!='n' && ch!='N' ){
		cout<<"\nEnter a Valid Character!!\nPress Y for Yes and N for no.\n>";
	    ch=getche();	
	}		
	if(ch=='Y' || ch=='y')
		d=d+1;
	//set2
	n=0;
	j=4;
	cout<<"\nDoes Your Birthday Lies In These Set Of Numbers\n\n\n\t";
	for(i=2;i<=31;i++){
		if(i==j){
			i=i+2;
			j=i+2;
		}
		cout<<i<<"\t";
		n++;
		if(n==4){
			cout<<"\n\n\t";
			n=0;
		}
	}
	cout<<endl<<">";
	ch=getche();
	while(ch!='Y' && ch!='y' && ch!='n' && ch!='N' ){
		cout<<"\nEnter a Valid Character!!\nPress Y for Yes and N for no.\n>";
	    ch=getche();	
	}		
	if(ch=='Y' || ch=='y')
		d=d+2;
	//set3
	n=0;
	j=8;
	cout<<"\nDoes Your Birthday Lies In These Set Of Numbers\n\n\n\t";
	for(i=4;i<=31;i++){
		if(i==j){
			i=i+4;
			j=i+4;
		}
		cout<<i<<"\t";
		n++;
		if(n==4){
			cout<<"\n\n\t";
			n=0;
		}
	}
	cout<<endl<<">";
	ch=getche();
	while(ch!='Y' && ch!='y' && ch!='n' && ch!='N' ){
		cout<<"\nEnter a Valid Character!!\nPress Y for Yes and N for no.\n>";
	    ch=getche();	
	}		
	if(ch=='Y' || ch=='y')
		d=d+4;
	//set4
	n=0;
	j=16;
	cout<<"\nDoes Your Birthday Lies In These Set Of Numbers\n\n\n\t";
	for(i=8;i<=31;i++){
		if(i==j){
			i=24;
		}
		cout<<i<<"\t";
		n++;
		if(n==4){
			cout<<"\n\n\t";
			n=0;
		}
	}
	cout<<endl<<">";
	ch=getche();
	while(ch!='Y' && ch!='y' && ch!='n' && ch!='N' ){
		cout<<"\nEnter a Valid Character!!\nPress Y for Yes and N for no.\n>";
	    ch=getche();	
	}		
	if(ch=='Y' || ch=='y')
		d=d+8;
	//set5
	n=0;
	j=17;
	cout<<"\nDoes Your Birthday Lies In These Set Of Numbers\n\n\n\t";
	for(i=16;i<=31;i++){
		cout<<i<<"\t";
		n++;
		if(n==4){
			cout<<"\n\n\t";
			n=0;
		}
	}
	cout<<endl<<">"; 
	ch=getche();
	while(ch!='Y' && ch!='y' && ch!='n' && ch!='N' ){
		cout<<"\nEnter a Valid Character!!\nPress Y for Yes and N for no.\n>";
	    ch=getche();	
	}		
	if(ch=='Y' || ch=='y')
		d=d+16;
	cout<<"\nYour Date of Birth is "<<d;
	}
	cout<<"\nGood Bye";
	getch();
}