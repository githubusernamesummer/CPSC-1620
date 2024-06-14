/*If there are two numbers, 24 and 36 what is the GCD? a = 24 b = 36 min = 24 to 1. a%i == 0 && b%i == 0.
Euclidean algorithm.
a = 54 b = 36
a = 36 b = 54 % 36
a = 18 b = 36 % 18 = 0 So the GCD = 18 
Let a and b be integers such that either a or b is nonzero. The greatest common divisor, written gcd(a,b), of a and b is the largest positive integer that divides both a and b. Your program must contain a function that returns the GCD of two integers. Take pair of inputs (a,b) from an input file (input.data) and write the result on another output file (output.data). Write necessary functions those open, close and write data on files with message:
"File opening was successful", "File has been closed", "Data has been written successfully."*/
//Author Name: Jahnavi Sharma
//Date: 31/05/2024
//Purpose: A program to find GCD of two numbers from a file input data.

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
//Function prototype
void openFile(ifstream &); //Reference parameter will help to change the actual parameter. 
void readFile(ifstream &, int &, int &);
void closeFile(ifstream &); //Function overloading
void closeFile(ofstream &); //Function overloading
void writeData(ofstream &, int, int, int);
int gcd(int, int);//Find the GCD of two numbers 
int main()
{
    int res, num1, num2;
    ifstream in;
    ofstream out;

    openFile(in);
    out.open("output.data"); //If there is no file with name output.data then the compiler will create it.

// We need to read atleast one row before entering into while loop. 
readFile(in, num1, num2);
while(!in.eof())
{
    res = gcd(num1, num2);
    writeData(out, res, num1, num2);
    //Read nect row before going to the next iteration
    readFile(in, num1, num2);

}
closeFile(in);
closeFile(out);
    return 0;
}
//Purpose 
//Inputs: None
//Outputs: ifstream i // when we are using reference parameter, they will be described as output.
//Return --none
void openFile(ifstream &i )
{
    string fileName;
    do {
        cout << "Enter a filename -- : ";
        cin >> fileName;
        i.open(fileName.c_str());

    }while(!i);
    cout << "File opening was succesful" << endl;
}
//Purpose: Read a row from a file
//Inputs: Nonen
//Outputs: ifstream i 
//         int a
//         int b
//         Return -- None
void readFile(ifstream & i, int &a, int &b)
{
    i >> a >> b;
}

//Purpose: Closes an opened input file 
//Inputs: None
//Outputs: ifstream file 
//         Return -- None
void closeFile(ifstream & file)
{
    file.close();
    cout << "File has been closed" << endl;

}
//Purpose: Closes an opened output file
//Inputs: None
//Outputs: ofstream file
//         Return -- None
void closeFile(ofstream & file)
{
    file.close();
    cout << "File has been closed" << endl;
}
//Purpose: Finding GCD of two numbers 
//Inputs: a -- number
//        b -- number
//Outputs: gcd of two numbers
int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp =b;
        b = a % b;
        a = temp;
    }
    return a;
}
//Purpose: Writing output in a output file.
//Inputs: result -- final output
//        a -- number
//        b -- number
//Outputs: ofstream file
//         Returns -- None
// We are following the Euclidean Algorithm
void writeData(ofstream & file, int result, int a, int b)
{
    file << "The GCD of " << a << " and " << b << " is: " << result << endl;
    cout << "Data has been written successfully!" << endl;
}

