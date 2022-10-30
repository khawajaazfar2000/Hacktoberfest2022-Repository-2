#include <iostream>
using namespace std;

// Calculator using Cpp

int main()
{
    // first Declaring the the variables A and B to store the number where X will be used for arithmetic operator.
    int A, B;
    char X;

    // Enter the arithmetic operator.
    cin >> A >> X >> B;

    if (X == '+')
    {
        cout << A + B;
    }
    else if (X == '-')
    {
        cout << A - B;
    }
    else if (X == "*")
    {
        cout << A * B;
    }
    else if (X == '/')
    {
        cout << A / B;
    }
    else
    {
        cout << "Please Enter the numbers"
    }
    return 0;
}