#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    ifstream inputFile("employee.data");

    
    if (!inputFile) {
        cerr << "Unable to open file employee.data" << endl;
        return 1;
    }

    
    string lastName, firstName;
    double currentSalary, percentIncrease, updatedSalary;

    
    cout << setw(44) << setfill('*') << "*" << endl;
    cout << setfill(' ') << setw(30) << right << "Employee Salary" << endl;
    cout << setw(44) << setfill('*') << "*" << endl;
    cout << setw(21) << setfill(' ') << left << "Employee Name" << " | " << setw(20) << right << "Updated Salary" << endl;
    cout << setw(44) << setfill('-') << "-" << endl;

    
    while (inputFile >> lastName >> firstName >> currentSalary >> percentIncrease) {
        
        updatedSalary = currentSalary + (currentSalary * percentIncrease / 100);

        
        cout << fixed << setprecision(2);
        cout << setfill(' ') << setw(21) << center << (firstName + " " + lastName);
        cout << " | " << setw(20) <<  right << updatedSalary << endl;
    }

    
    cout << setw(44) << setfill('*') << "*" << endl;

    
    inputFile.close();

    return 0;
}
