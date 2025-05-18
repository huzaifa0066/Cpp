#include<iostream>
using namespace std;
int main(){
    int a[10],i,j,tmp;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    cout<<"Sorted array in ascending order:\n";
    for(i=0;i<10;i++)
        cout<<a[i]<<"\t";
}