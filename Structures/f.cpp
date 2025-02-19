#include <iostream>
using namespace std;
struct Date{
    int date,year;
    string month;
};
struct p_book{
    string name,city;
    int telephone;
    Date d;
};
int main(){
    p_book d1;
    cout << "Enter date: ";
    cin>>d1.d.date;  
    cout << "Enter Month: ";
    cin>>d1.d.month;
    cout << "Enter year: ";
    cin>>d1.d.year;
    cout << "Enter Name: ";
    cin>>d1.name;  
    cout << "Enter City: ";
    cin>>d1.city;
    cout << "Enter Telephone Number: ";
    cin>>d1.telephone;
    cout<<"\nDetails:";
    cout<<"\nName: "<<d1.name;
    cout<<"\nCity: "<<d1.city;
    cout<<"\nTelephone Number: "<<d1.telephone;
    cout<<"\nDate: "<<d1.d.date<<" "<<d1.d.month<<" "<<d1.d.year<<"\n";
}