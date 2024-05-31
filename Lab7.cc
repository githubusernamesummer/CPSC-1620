/*Problem 1 - Let n be a non negative integer. The factorial of n, written n!, is defined by 0! = 1, n! = 1*2*3 ...n if n>= 1. For example, 4! = 1*2*3*4 = 24. Write a program that prompts the user to enter a nonnegative integer and outputs the factorial of the number. Use user - defined functions: int getInput() and void displayOutput (int result) to take input from user and print the result of the factorial, respectively. Another user -  defined function: int factorial (int n) will calculate the factorial and return the result. */
//Author Name: Jahnavi Sharma
//Date: 29/5/2024
//Program to calculate factorial of a number. 

#include <iostream> 
#include <cmath>
using namespace std;

//function prototype 
int getInput();
void displayOutput (int);
int factorial (int);


int main ()
{
    int number, result;
    number = getInput();
    result = factorial(number);
    displayOutput(result);

    return 0;
}
//Function to take input from user.
//Input: None
//Output: number 
int getInput()
{
    int n;
    cout <<"Enter Number: ";
    cin >> n;
    while (n<0)
    {
        cout << "Enter a non - negative number: ";
        cin >> n;
    }
    return n;
}
//A function to show the value of factorial 
//Input: res-- value of factorial 
//Output: None
void displayOutput (int res)
{
    cout << "Value of factorial is: " << res;
}
//A function to calculate factorial of a number. 
//Input: num -- number
//Output: Value of factorial 

int factorial (int num)
{
    int fact = 1;
    if(num ==0)
    {


        return fact;
    }
    else 
    {
        for(int i =1; i < num; i++)
        {
            fact = fact * i;
        
        }
        return fact;
    }
}
