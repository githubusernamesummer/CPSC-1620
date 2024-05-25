

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int digit;
    int sum = 0;

    cout << "Enter Number: ";
    cin >> num;
    num = abs(num);
    while(num != 0)
    {
        digit = num % 10;
        cout << digit << "\t";
        sum = sum + digit; //sum += digit
        num = num/10; //num /=10;
    }
    cout << endl;
    cout << "Sum of the digits are: " <<sum<<endl;




    return 0;
}