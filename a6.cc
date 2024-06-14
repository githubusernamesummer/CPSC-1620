//Author Name: Jahnavi Sharma
//Date: 09/06/2024
//Purpose: Program to store the names and amount of sales for each seller, and to determine the name of the highest seller. 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_SELLERS = 100; 

// Function prototypes
void openFile(ifstream& inFile);
void getData(ifstream& inFile, string names[], int sales[], int& count);
void computePercentages(const int sales[], double percentages[], int count);
void sortSeller(string names[], int sales[], double percentages[], int count);
void display(const string names[], const int sales[], const double percentages[], int count);
void displayTopSeller(const string names[], const int sales[], int count);

int main() {
    ifstream inFile;
    string names[MAX_SELLERS];
    int sales[MAX_SELLERS];
    double percentages[MAX_SELLERS];
    int count = 0;

    openFile(inFile);
    getData(inFile, names, sales, count);
    computePercentages(sales, percentages, count);
    sortSeller(names, sales, percentages, count);
    display(names, sales, percentages, count);
    displayTopSeller(names, sales, count);

    inFile.close();
    return 0;
}

void openFile(ifstream& inFile) {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;
    inFile.open(filename);
    if (!inFile.is_open()) {
        cerr << "Failed to open " << filename << '\n';
        exit(1);
    }
}

void getData(ifstream& inFile, string names[], int sales[], int& count) {
    count = 0;
    while (inFile >> names[count] >> sales[count]) {
        if (++count == MAX_SELLERS) break; 
    }
}

void computePercentages(const int sales[], double percentages[], int count) {
    int totalSales = 0;
    for (int i = 0; i < count; ++i) {
        totalSales += sales[i];
    }
    for (int i = 0; i < count; ++i) {
        percentages[i] = (sales[i] * 100.0) / totalSales;
    }
}

void sortSeller(string names[], int sales[], double percentages[], int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (sales[i] < sales[j]) { 
                swap(sales[i], sales[j]);
                swap(names[i], names[j]);
                swap(percentages[i], percentages[j]);
            }
        }
    }
}

void display(const string names[], const int sales[], const double percentages[], int count) {
    int totalSales = 0;
    cout << "Seller                   # of Sales    % of Total Sales\n";
    cout << "-------------------------------------------------------\n";
    for (int i = 0; i < count; ++i) {
        totalSales += sales[i];
        cout << left << setw(27) << names[i] << "" 
                  << setw(18) << sales[i] << "" 
                  << fixed << setprecision(2) << percentages[i] << "%\n";
    }
    cout << "\nTotal                     " << totalSales << endl;
}



void displayTopSeller(const string names[], const int sales[], int count) {
    ostringstream topSellers; // Using string stream to concatenate names
    int maxSale = sales[0];

    for (int i = 0; i < count && sales[i] == maxSale; ++i) {
        if (i > 0) {
            topSellers << "  ";
        }
        topSellers << names[i];
    }

    cout << "Name of the highest seller(s): " << topSellers.str() << endl;
}




