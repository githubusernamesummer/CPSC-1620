

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, discriminant;
    cout << "Enter the value of coefficients: ";
    cin >> a >> b >> c;
    discriminant = pow(b,2) - (4*a*c);
    if (discriminant ==0)
    {
        cout << "The equation has one single real root" << endl 
        << "x = " << -b/(2*a) << endl;

    }
    else if (discriminant > 0)
    {
        cout << "The equation has two real roots" << endl
        << "x= " << (-b+pow(discriminant, 0.5))/(2*a) << "  and" << (-b-pow(discriminant, 0.5))/(2*a) << endl;
    }
    else {
        cout << "The equation has two complex roots" << endl;

    }
        
    



    return 0;
}