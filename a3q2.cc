#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
    const double conversionRate = 2.2;

    double weightInKg;
    

    cout << "Enter the weight of a person in kilograms: ";
    cin >> weightInKg;

    double weightInPounds = weightInKg * conversionRate;

    cout << fixed << showpoint << setprecision(2);
    cout << "Weight in Kilograms = " << weightInKg << " kg" << endl;
    cout << "Weight in Pounds = " << weightInPounds << " lbs" << endl;

    return 0;

}