#include<iostream>
using namespace std;
void add(int n1, int n2){
    cout<< n1 + n2;
}
int add(int n1, int n2,int n3){
    return n1 + n2 + n3;
}
int main(){
    int a=1,b=2,c,d=2;
    add(a,b);
    cout<<endl;
    c=add(a,b,d);
    cout<<c;
}