#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers";
    }
    else
    {
        while (i <= num)
        {
            fact = fact * i;
            i++;
        }

        cout << "Factorial is: " << fact;
    }

    return 0;
}
