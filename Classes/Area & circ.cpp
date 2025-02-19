#include<iostream>
using namespace std;
class circle
{
	private:
	  int r;
    public:
      void get_data(){
		  cout<<"Enter Radius of Circle:";
          cin>>r;
	  }
	  void area() {
          double area=3.14*r*r;
          cout<<"Area of Circle:"<<area<<endl;
      }
	  void circumference()  {
		  double circumference=2*3.14*r;
		   cout<<"Circumference of Circle:"<<circumference<<endl;
	  }
};
int main(){
	circle c1, c2;
	cout<<endl;
	c1.get_data();
	c1.area();
	c1.circumference();
	cout<<endl;
	c2.get_data();
	c2.area();
	c2.circumference();
}