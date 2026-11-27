#include <iostream>
using namespace std;

int main()
{
    int base, exponent, i = 1;
    long long power = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    if (exponent < 0)
    {
        cout << "Please enter a non-negative exponent";
    }
    else
    {
        while (i <= exponent)
        {
            power = power * base;
            i++;
        }

        cout << "Power is: " << power;
    }

    return 0;
}