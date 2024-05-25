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

    
    string lastName1, firstName1, lastName2, firstName2, lastName3, firstName3;
    double currentSalary1, percentIncrease1, updatedSalary1, currentSalary2, percentIncrease2, updatedSalary2, currentSalary3, percentIncrease3, updatedSalary3;

    
    cout << setw(44) << setfill('*') << "*" << endl;
    cout << setfill(' ') << setw(30) << right << "Employee Salary" << endl;
    cout << setw(44) << setfill('*') << "*" << endl;
    cout << setw(21) << setfill(' ') << left << "Employee Name" << " | " << setw(20) << right << "Updated Salary" << endl;
    cout << setw(44) << setfill('-') << "-" << endl;

    
    while (inputFile >> lastName1 >> firstName1 >> currentSalary1 >> percentIncrease1 >> lastName2 >> firstName2 >> currentSalary2 >> percentIncrease2 >> lastName3 >> firstName3 >> currentSalary3 >> percentIncrease3) 
    {
        
        updatedSalary1 = currentSalary1 + (currentSalary1 * percentIncrease1 / 100);
        updatedSalary2 = currentSalary2 + (currentSalary2 * percentIncrease2 / 100);
        updatedSalary3 = currentSalary3 + (currentSalary3 * percentIncrease3 / 100);

        
        cout << fixed << setprecision(2);
        cout << setfill(' ') << setw(4) << "" << left << (firstName1) << (" ") << setw(10) << (lastName1) << " | " << right << setw(20) << updatedSalary1 << endl;
        cout << setfill(' ') << setw(4) << "" << left << (firstName2) << (" ") << setw(10) << (lastName2) << " | " << setw(20) <<  right << updatedSalary2 << endl;
        cout << setfill(' ') << setw(6) << "" << left << (firstName3) << (" ") << setw(10) << (lastName3) << " | " << setw(20) <<  right << updatedSalary3 << endl;
        
    }

    
    cout << setw(44) << setfill('*') << "*" << endl;

    
    inputFile.close();

    return 0;
}
