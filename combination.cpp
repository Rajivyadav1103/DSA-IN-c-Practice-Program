#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    if (n < 0 || r < 0 || r > n || n > 20)
    {
        cout << "Invalid input";
    }
    else
    {
        long long result = factorial(n) /
                           (factorial(r) * factorial(n - r));

        cout << "Combination = " << result;
    }

    return 0;
}