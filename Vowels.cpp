#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char str[50];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 50); 

    for (int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    cout << "Vowel count: " << count << endl;

    for (int i = 0; i < strlen(str); i++) {
        cout << str[i] << " ";
    }

    return 0;
}
