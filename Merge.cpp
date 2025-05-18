#include <iostream>
using namespace std;

int main() {
    int s1,s2;
    cout << "Enter size of first array: ";
    cin >> s1;
    cout << "Enter size of second array: ";
    cin >> s2;
    int a[s1], b[s2], c[s1+s2];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < s1; i++) 
        cin >> a[i];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < s2; i++)
        cin >> b[i];

    for (int i = 0; i < s1; i++) 
        c[i] = a[i];
    for (int i = 0; i < s2; i++) 
        c[s1 + i] = b[i];

    cout << "Merged array: ";
    for (int i = 0; i < s1 + s2; i++) 
        cout << c[i] << " ";
    return 0;
}
