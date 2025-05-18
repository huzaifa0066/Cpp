
#include <iostream>
#include<string>
using namespace std;

int main()
 {
 	
    cout << "Weather Forecast" << endl;

            string days[]  = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
            string cities[] = { "Lahore", "Karachi", "Swat", "New york", "Sydney" };
           string forecasts[] = { "Sunny", "Cloudy", "Rainy", "Windy", "Snowy" };
           cout << "Select a city:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << cities[i] << endl;
    }

   
 int cityIndex;
    cout << "Enter the number of your selection: ";
    cin >> cityIndex;

    if (cityIndex >= 1 && cityIndex <= 5) {
        cout << "Forecast for " << cities[cityIndex - 1] << " on " << days[cityIndex - 2] << ": " << forecasts[cityIndex - 3] << endl;
    }
    else {
        cout << "Invalid selection" << endl;
    }

    return 0;
}