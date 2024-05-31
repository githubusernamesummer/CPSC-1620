
//Author Name: Jahnavi Sharma
//Date: 29/05/2024
//Problem: A program to print a pyramid

#include <iostream>

using namespace std;
//function prototype
int getInput();
void makePyramid (int);

int main()
{
    int n;
    n = getInput();
    makePyramid(n);
    return 0;
}

//A function to take input fro user.
//Input: None
//Output: Number

int getInput()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    return number;
}
//A function to print a pyramid pattern
//Input: n--nuber of rows
//Output: None
void makePyramid (int n)
{
    //Outer loop for accessing each row
    for(int i = 1; i<=n; i++)
    {
        //first inner loop for printing spaces 
        for (int j = 1; j<= n-i; j++)
        {
            cout << " ";
        }
    
    //second inner loop for printing asteric sign 
    for (int k=1; k<=2*i-1; k++)
    {
        cout << "*";
    }
    cout << endl;
}

}