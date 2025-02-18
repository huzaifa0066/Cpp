#include <iostream>
using namespace std;

int main() {
    int n;

    // Input: Size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input: Array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the largest number
    int largest = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output: Largest number
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
