#include <iostream>
using namespace std;

// Function to calculate the billing amount
double calculateBill(double hourlyRate, int totalMinutes, bool isLowIncome) {
    int freeMinutes = isLowIncome ? 30 : 20; // Free consultation time based on income
    double billingRate = isLowIncome ? 0.4 * hourlyRate : 0.7 * hourlyRate; // Adjusted billing rate
    int excessMinutes = totalMinutes - freeMinutes; // Calculate excess time

    if (excessMinutes > 0) {
        double excessHours = excessMinutes / 60.0; // Convert minutes to hours
        return billingRate * excessHours; // Calculate the bill
    } else {
        return 0.0; // No charges if within the free consultation period
    }
}

int main() {
    double hourlyRate;
    int totalMinutes;
    bool isLowIncome;

    // User inputs
    cout << "Enter the hourly rate ($): ";
    cin >> hourlyRate;
    cout << "Enter the total consulting time (minutes): ";
    cin >> totalMinutes;
    cout << "Is the person of low income? (1 for yes, 0 for no): ";
    cin >> isLowIncome;

    // Calculate and display the bill
    double bill = calculateBill(hourlyRate, totalMinutes, isLowIncome);
    cout << "The billing amount is: $" << bill << endl;

    return 0;
}
