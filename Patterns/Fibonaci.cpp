// 0       1       1       2       3       5       8       13      21      34
#include<iostream>
using namespace std;
int main()
{
    int j=0,k=1,n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<j<<"\t";  
        n=j+k;  
        j=k;  
        k=n;  
    }
}
