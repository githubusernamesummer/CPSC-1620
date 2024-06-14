//Author Name: Jahnavi Sharma
//Date: May 26 2024
//Program to output numbers in the odd, even or fibonacci series according to number of elements specified by the input file. 
/* odd = 2*(i-1);
    even = (2*i)
    fibonacciSeries = (current = previous1 + previous2)*/

#include <iostream>
#include <fstream> 

using namespace std;
int main()
{
    //Input file 
    ifstream inputFile("input.data")

    if (!inputFile)
    {
        cerr << "Unable to open file input.data" << endl;
        return 1;
    }

    //Declare the variables

    int odd
    int even
    int fibonacciSeries
    int optionNumber
    int numberOfElements

//Initialize the Input
while (inputFile >> numberOfElements1 >> optionNumber1 >> numberOfElements2 >> optionNumber2 >> numberOfElements3 >> optionNumber3 >> numberOfElements4 >> optionNumber4 >> numberOfElements5 >> optionNumber5)
int series[100];

    //Design a switch structure 

    cout << "Enter Option Number: ";
    cin >> optionNumber;

    switch (optionNumber)
{
    case '1':
        cout << " " << even << endl;
        


    case '2':
        cout << " " << even << endl;
    case '3':
        cout << " " << fibonacciSeries << endl;
    default: 
        cout << "Error" << endl;
}
    








return o;
}