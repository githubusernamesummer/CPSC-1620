#include <iostream>
#include <fstream>

using namespace std; 

void generate_even_series(int n, ofstream& output) {
    for (int i = 1; i <= n; ++i) {
        output << 2 * i;
        if (i != n) output << " ";
    }
    output << endl;
}


void generate_odd_series(int n, ofstream& output) {
    for (int i = 1; i <= n; ++i) {
        output << 2 * i - 1;
        if (i != n) output << " ";
    }
    output << endl;
}


void generate_fibonacci_series(int n, ofstream& output) {
   int a = 1, b = 1;
    if (n <= 0) return;  

    
    for (int i = 1; i <= n; ++i) {
        if (i == 1 || i == 2) {
            
            output << "1";
        } else {
            int next = a + b;  
            output << next;
            a = b;  
            b = next;  
        }
        if (i < n) output << ", ";
    }
    output << endl;  
    
    }



int main() {
    ifstream input("input.data");
    ofstream output("output.data");

    if (!input) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    if (!output) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    int n, option;
    while (input >> n >> option) {
        switch (option) {
            case 1:
                generate_even_series(n, output);
                break;
            case 2:
                generate_odd_series(n, output);
                break;
            case 3:
                generate_fibonacci_series(n, output);
                break;
            default:
                cerr << "Invalid option: " << option << endl;
                break;
        }
    }

    input.close();
    output.close();
    return 0;
}
