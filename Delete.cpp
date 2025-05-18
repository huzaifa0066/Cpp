#include <iostream>
using namespace std;
int main() {
    int  n, pos;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter position to delete (0-based index): ";
    cin >> pos;

    for (int i = pos; i < n - 1; i++) 
    {
        a[i] = a[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
