#include <iostream>
using namespace std;

int main() {
    int a[10], sum = 0;
    float avg;
    cout << "Enter elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum / 10.0;
    cout << "Sum: " << sum;
    cout<< "\nAverage: " << avg << endl;
    return 0;
}
