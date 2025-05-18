#include <iostream>
using namespace std;
int main() {
    int a[10], pos = 0, neg = 0, zero = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] > 0) 
            pos++;
        else if (a[i] < 0) 
            neg++;
        else 
            zero++;
    }
    cout << "Positive: " << pos ;
    cout<< "\n Negative: " << neg ;
    cout<< "\n Zero: " << zero << endl;
    return 0;
}