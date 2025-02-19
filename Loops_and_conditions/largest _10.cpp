#include<iostream>
using namespace std;
int main()
{
    int max,n;
    cin>>n;
    
    max=n;
    for (int i = 1; i <= 9; i++)
    {
       cin>>n;
       if(max<n)
       {
        max=n;
       }
    }
    cout<<"\nlargest="<<max;
}
